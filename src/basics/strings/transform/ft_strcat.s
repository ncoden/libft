; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcat.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/29 14:08:21 by ncoden            #+#    #+#              ;
;    Updated: 2015/08/28 00:23:30 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_strcat
;	%rdi : char *			dst
;	%rsi : const char *		src

SECTION .text
	global		_ft_strcat

	extern		_ft_strcpy

_ft_strcat:
	cmp			rdi, 0				; Check dst
	je			return_null
	cmp			rsi, 0				; Check src
	je			return_null

	push		rdi
	push		rcx

									; Move to the dst end
									; Prepare SCAS loop with :
	sub			al, al				;  - %al : 0, the char to search
	sub			rcx, rcx			;  - %rcx : !0, (infinite loop)
	not			rcx

	cld
	repne		scasb				; Do the loop

	dec			rdi					; Back on the \0 (to overwrite it)

	call		_ft_strcpy			; Copy src to dst : strcpy with
									;  - %rdi : dst, destination end
									;  - %rsi : src, source

	pop			rcx					; Reset used registers
	pop			rdi
	mov			rax, rdi			; Return dst start
	ret

return_null:
	mov			rax, 0
	ret
