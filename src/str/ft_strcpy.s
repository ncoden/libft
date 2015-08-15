; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/01 17:30:56 by ncoden            #+#    #+#              ;
;    Updated: 2015/08/15 14:45:38 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

%include "libft_asm.h64"

;	ft_strcpy
;	%rdi : char *			dst
;	%rsi : const char *		src

SECTION .text
	global		_ft_strcpy

	extern		_ft_strlen
	extern		_ft_memcpy

_ft_strcpy:
	cmp			rdi, 0				; Check dst
	je			return_null
	cmp			rsi, 0				; Check src
	je			return_null

	push		rdi
	push		rdx

	push		rdi					; Save dst
	mov			rdi, rsi			; Get src lenght
	call		_ft_strlen

									; Copy src to dst : memcpy with
	pop			rdi					;  - %rdi : dst, destination end
									;  - %rsi : src, source
	mov			rdx, rax			;  - %rdx : src length + 1 (copy the \0)
	inc			rdx
	call		_ft_memcpy

	pop			rdx					; Reset used registers
	pop			rdi
	mov			rax, rdi			; Return dst
	ret

return_null:
	mov			rax, 0
	ret
