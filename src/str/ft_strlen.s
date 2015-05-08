; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 17:54:14 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/02 17:01:18 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_strlen
;	%rdi : char	*			s

SECTION .text
	global		_ft_strlen

_ft_strlen:
	cmp			rdi, 0				; Check s
	je			return_false

	push		rdi
	push		rcx

									; Prepare SCAS loop with :
	sub			al, al				;  - %al : 0, the char to search
									;			(string end)
	sub			rcx, rcx			;  - %rcx : !0, will be decremented at each
	not			rcx					;			loop turn (\0 include)

	cld
	repne		scasb				; Do loop

									; %rcx = !0 - x (x = the number of turn)
	not			rcx					; %rcx = 0 + x = x
	sub			rcx, 1				; %rcx = x - 1 = string length

	mov			rax, rcx			; Return length
	pop			rcx					; Reset used registers
	pop			rdi
	ret

return_false:
	mov			rax, 0
	ret
