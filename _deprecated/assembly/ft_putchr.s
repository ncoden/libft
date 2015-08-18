; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putchr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 17:27:27 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/08 08:25:36 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

%include "libft_asm.h64"

;	ft_putchr
;	%rdi : char				c

SECTION .text
	global		_ft_putchr

_ft_putchr:
	push		rax
	push		rdx
	push		rsi
	push		rdi

	mov			[rel chr], rdi		; Put chr in memory

									; Prepare write syscall :
	lea			rsi, [rel chr]		; - %rsi, chr
	mov			rdx, 1				; - %rdx, chr lenght = 1
	mov			rax, CALL_WRITE		; - %rax, command number
	mov			rdi, STDOUT			; - %rdi, out number
	syscall

	pop			rdi					; Reset used register
	pop			rsi
	pop			rdx
	pop			rax
	ret

SECTION .data
	chr			db 0
