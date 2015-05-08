; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strdup.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/04/30 18:52:15 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/02 17:06:32 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

%include "libft_asm.h64"

;	ft_strdup
;	%rdi : char *				s

SECTION .text
	global		_ft_strdup

_ft_strdup:
	cmp			rdi, 0				; Check s
	je			return_null

	push		rdi
	push		rsi
	push		rdx

	call		_ft_strlen			; Get s lenght

	push		rax					; -> save n (%rax to %rdx)
	push		rdi					; -> save s (%rdi to %rsi)
									; (save in stack and not in %rsi and %rdx,
									;  malloc change theses registers)

									; Call malloc with :
	mov			rdi, rax			;  - %rdi : s length + 1
	inc			rdi
	call		_malloc

	cmp			rax, 0				; Check allocated string
	je			return				; If NULL, return NULL

	pop			rsi 				; <- retrieve s (%rdi to %rsi)
	pop			rdx					; <- retrieve n (%rax to %rdx)

	mov byte	[rax + rdx], 0		; Put \0 at the end of allocated string

									; Call ft_memcpy with :
	mov			rdi, rax			;  - %rdi : allocated string
									;  - %rsi : s, source string
									;  - %rdx : n, number of char to copy
	call		_ft_memcpy

return:
	pop			rdx					; Reset used registers
	pop			rsi
	pop			rdi
	ret								; Return allocated string in %rax

return_null:
	mov rax, 0
	ret
