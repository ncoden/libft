; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_tolower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 15:43:05 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/02 17:23:23 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_tolower
;	%rdi : char				c

SECTION .text
	global		_ft_tolower

_ft_tolower:
	mov			rax, rdi			; Prepare c return

	cmp			rdi, 'A'			; If c < 'A', return c
	jl			end
	cmp			rdi, 'Z'			; If c > 'Z', return c
	jg			end

	add			rax, 32				; If 'A' <= c <= 'Z', transform return

end:
	ret
