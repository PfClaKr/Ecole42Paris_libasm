global ft_strcmp

ft_strcmp :
		xor			rcx, rcx

loop :
		cmp				byte[rdi + rcx], 0	; cmp is NULL first argument
		jz				return				; if true, return
		cmp				byte[rsi + rcx], 0	; cmp is NULL second argumnet
		jz				return				; if true, return
		mov				al, byte[rsi + rcx]	; copy ptr in al for cmp rdi
		cmp				byte[rdi + rcx], al	; cmp is same
		jnz				return				; if false, return
		inc				rcx					; counter += 1
		jmp				loop				; jump loop

return :
		movzx			rax, byte[rdi + rcx]	; give the last ptr cmp
		movzx			rdx, byte[rsi + rcx]	; same
		sub				rax, rdx				; rax += rdx
		ret										; return rax