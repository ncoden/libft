; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putstr_fd.s                                     :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 17:27:27 by ncoden            #+#    #+#              ;
;    Updated: 2015/08/28 00:22:37 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_puts_fd
;	%rdi : char	*			s
;	%rsi : int				fd

SECTION .text
	global		_ft_putstr_fd

	extern		_ft_strlen

_ft_putstr_fd:
	cmp			rdi, 0				; Check s
	je			return_null

	push		rdx
	push		rsi

									; Prepare write syscall :
	call		_ft_strlen			;	get lenght
	mov			rdx, rax			; - %rdx : str lenght

	mov			rdi, rsi			; - %rdi : fd
	mov			rsi, rdi			; - %rsi : str
	mov			rax, 0x2000004		; - %rax : command number
	syscall

	mov			rdi, rsi			; Reset used registers
	pop			rsi
	pop			rdx
	mov			rax, 1				; Return TRUE
	ret

return_null:
	mov			rax, 0
	ret
