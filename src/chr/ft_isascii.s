; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isascii.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 17:03:54 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/01 16:34:28 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_isascii
;	%rdi : char				c

SECTION .text
	global		_ft_isascii

_ft_isascii:
	cmp			rdi, 0				; If c < 0, return FALSE
	jl			return_false
	cmp			rdi, 127			; If c > 127, return FALSE
	jg			return_false

	mov			rax, 1				; Else, return TRUE
	ret

return_false:
	mov			rax, 0
	ret
