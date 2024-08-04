global ft_write

extern __errno_location

ft_write :
		mov			rax, 1						; 1 is write
		syscall
		cmp			rax, 0						; for check error, ZeroFlag, SignFlag, OverflowFlag will be set up
		jl			write_error					; if rax was negatif, (SF 1 OF 0 or SF 0 OF 1) jump error
		ret

write_error :
		neg			rax							; rax *= -1 for set up errno
		push		rax							; push in the stack for use after calling errno_location function
		call		__errno_location wrt ..plt	; return errno ptr value in rax
		pop			qword [rax]					; get old rax value, save in errno ptr
		mov			rax, -1						; set the return value
		ret