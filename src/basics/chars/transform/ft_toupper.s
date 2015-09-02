; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_toupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 15:43:05 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/02 17:23:17 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_toupper
;	%rdi : char				c

SECTION .text
	global		_ft_toupper

_ft_toupper:
	mov			rax, rdi			; Prepare c return

	cmp			rdi, 'a'			; If c < 'a', return c
	jl			end
	cmp			rdi, 'z'			; If c > 'z', return c
	jg			end

	sub			rax, 32				; If 'a' <= c <= 'z', transform return

end:
	ret
