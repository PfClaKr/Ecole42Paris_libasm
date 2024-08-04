global	ft_strdup

extern ft_strlen
extern malloc
extern ft_strcpy
extern __errno_location

ft_strdup :
	call		ft_strlen					; ft_strlen(rdi)
	inc			rax							; get the return value by strlen, and inc 1 for \0
	push		rdi							; push in stack original string
	mov			rdi, rax					; rdi = return value strlen
	call		malloc wrt ..plt			; malloc heap memory size of rax
	cmp			rax, 0						; check memory allocation fail
	jz			mem_error					; if zero flag on, go mem error
	pop			rsi							; put str in the 2nd argument
	mov			rdi, rax					; put allocatoin ptr in the 1st argument
	call		ft_strcpy					; call strcpy
	ret

mem_error :
	mov			rax, 12						; set 12, in the errno is ENOMEM (out of memory)
	push		rax							; push in the stack for use after calling errno_location function
	call		__errno_location wrt ..plt	; return errno ptr value in rax
	pop			qword [rax]					; get 12, and save in errno ptr
	mov			rax, 0						; set the return value
	ret