global ft_strcpy

ft_strcpy :
		xor			rcx, rcx			; init 0, xor himself always 0

loop :
		cmp			byte [rsi + rcx], 0	; if src == NUll
		jz			return				; return
		mov			dl, [rsi + rcx]		; copy character in data register
		mov			[rdi + rcx], dl		; copy characater in first argument
		inc			rcx					; counter += 1
		jmp			loop				; jump loop

return :
		mov			byte [rdi + rcx], 0	; add \0 in last of str
		mov			rax, rdi			; give first ptr for return
		ret