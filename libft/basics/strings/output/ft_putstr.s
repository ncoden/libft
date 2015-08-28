; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putstr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 17:27:27 by ncoden            #+#    #+#              ;
;    Updated: 2015/08/28 00:22:17 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

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
	mov			rax, 0x2000004		; - %rax : command number
	mov			rdi, 1				; - %rdi : out number
	syscall

	mov			rdi, rsi			; Reset used registers
	pop			rsi
	pop			rdx
	mov			rax, 1				; Return TRUE
	ret

return_null:
	mov			rax, 0
	ret
