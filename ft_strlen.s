global ft_strlen

ft_strlen :
		xor			rcx, rcx			; xor himself, return value will be always 0

loop :
		cmp			byte [rdi + rcx], 0	; 1st argument + counter cmp NULL
		jz			return				; if cmp return 0, zero flag will 1, so return
		inc			rcx					; counter increase
		jmp			loop				; jump loop function

return :
		mov			rax, rcx			; counter value in to the accumulate for return value
		ret								; return