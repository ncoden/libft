; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalpha.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 15:43:05 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/01 16:34:35 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_isalpha
;	%rdi : char				c

SECTION .text
	global		_ft_isalpha

_ft_isalpha:
	cmp			rdi, 'A'			; If c < 'A', return FALSE
	jl			return_false
	cmp			rdi, 'z'			; If c > 'z', return FALSE
	jg			return_false
	cmp			rdi, 'Z'			; If c <= 'Z' : 'A' <= c <= 'Z'
	jle			return_true
	cmp			rdi, 'a'			; If c >= 'a' : 'a' <= c <= 'z'
	jge			return_true

return_false:
	mov			rax, 0
	ret

return_true:
	mov			rax, 1
	ret
