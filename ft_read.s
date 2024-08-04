global ft_read

extern __errno_location

ft_read :
		mov			rax, 0				; 0 is read
		syscall
		cmp			rax, 0				; for check error, ZeroFlag, SignFlag, OverflowFlag will be set up
		jl			read_error			; if rax was negatif, (SF 1 OF 0 or SF 0 OF 1) jump error
		ret

read_error :
		neg			rax					; rax *= -1 for set up errno
		push		rax					; push in the stack for use after calling errno_location function
		call		__errno_location	; return errno ptr value in rax
		pop			qword [rax]			; get old rax value, save in errno ptr
		mov			rax, -1				; set the return value
		ret