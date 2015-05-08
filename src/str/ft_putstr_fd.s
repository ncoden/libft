; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putstr_fd.s                                     :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 17:27:27 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/07 16:31:15 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

%include "libft_asm.h64"

;	ft_puts_fd
;	%rdi : char	*			s
;	%rsi : int				fd

SECTION .text
	global		_ft_putstr_fd

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
	mov			rax, CALL_WRITE		; - %rax : command number
	syscall

	mov			rdi, rsi			; Reset used registers
	pop			rsi
	pop			rdx
	mov			rax, 1				; Return TRUE
	ret

return_null:
	mov			rax, 0
	ret
