; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putstr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 17:27:27 by ncoden            #+#    #+#              ;
;    Updated: 2015/08/15 14:42:56 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

%include "libft_asm.h64"

;	ft_puts
;	%rdi : char	*			s

SECTION .text
	global		_ft_putstr

	extern		_ft_strlen

_ft_putstr:
	cmp			rdi, 0				; Check s
	je			return_null

	push		rdx
	push		rsi

									; Prepare write syscall :
	call		_ft_strlen			;	get lenght
	mov			rdx, rax			; - %rdx : str lenght

	mov			rsi, rdi			; - %rsi : str
	mov			rax, CALL_WRITE		; - %rax : command number
	mov			rdi, STDOUT			; - %rdi : out number
	syscall

	mov			rdi, rsi			; Reset used registers
	pop			rsi
	pop			rdx
	mov			rax, 1				; Return TRUE
	ret

return_null:
	mov			rax, 0
	ret
