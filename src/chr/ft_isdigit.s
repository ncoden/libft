; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isdigit.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 16:26:57 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/01 16:33:19 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_isdigit
;	%rdi : char				c

SECTION .text
	global		_ft_isdigit

_ft_isdigit:
	cmp			rdi, '0'			; If c < '0', return FALSE
	jl			return_false
	cmp			rdi, '9'			; If c > '9', return FALSE
	jg			return_false

	mov			rax, 1				; Else, return TRUE
	ret

return_false:
	mov			rax, 0
	ret
