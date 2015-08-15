; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalnum.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 16:31:41 by ncoden            #+#    #+#              ;
;    Updated: 2015/08/15 14:33:13 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

%include "libft_asm.h64"

;	ft_isalnum
;	%rdi : char				c

SECTION .text
	global		_ft_isalnum

	extern		_ft_isalpha
	extern		_ft_isdigit

_ft_isalnum:
	call		_ft_isalpha			; Call ft_isalpha with c in %rdi
	cmp			rax, 1				; If c is alpha, return TRUE
	je			end

	call		_ft_isdigit			; Else, return ft_isdigit with c in %rdi

end:
	ret
