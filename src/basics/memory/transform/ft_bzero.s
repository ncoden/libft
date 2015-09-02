; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_bzero.s                                         :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 13:49:26 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/02 17:24:18 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_bzero
;	%rdi : void *			mem
;	%rsi : size_t			n

SECTION .text
	global		_ft_bzero

_ft_bzero:
	cmp			rdi, 0				; Check mem
	je			end

	push		rcx

									; STOS loop with :
									;  - %rdi : mem, start memory adress
	mov			rax, 0				;  - %rax : 0, char to copy in mem
	mov			rcx, rsi			;  - %rcx : n, iteration number

	cld
	rep			stosb				; Do loop

	pop			rcx					; Reset used registers
	mov			rax, rdi			; Return mem

end:
	ret
