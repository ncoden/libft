; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isprint.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 17:03:54 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/01 17:28:51 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_isprint
;	%rdi : char				c

SECTION .text
	global		_ft_isprint

_ft_isprint:
	cmp			rdi, ' '			; If c < ' ', return FALSE
	jl			return_false
	cmp			rdi, '~'			; If c > '~', return FALSE
	jg			return_false

	mov			rax, 1				; Else, return TRUE
	ret

return_false:
	mov			rax, 0
	ret
