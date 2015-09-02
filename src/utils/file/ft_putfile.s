; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putfile.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/02 12:25:01 by ncoden            #+#    #+#              ;
;    Updated: 2015/08/28 23:06:44 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_putfile
;	%rdi : int			fd (file descriptor)

SECTION .text
	global		_ft_putfile

_ft_putfile:
	push		rax
	push		rdi
	push		rdx

read_loop:
									; Read file part, Prepare read syscall :
	mov			rax, 0x2000003		; - %rax : command number
									; - %rdi : file descriptor
									; - %rsi : buffer
	mov			rdx, 256			; - %rdx : buffer size
	syscall

	push		rax					; Save file part length
	push		rdi					; Save file descriptor

									; Write file part, Prepare write syscall :
	mov			rdx, rax			; - %rdx : str lenght
	mov			rax, 0x2000004		; - %rax : command number
	mov			rdi, 1				; - %rdi : out number
									; - %rsi : str
	syscall

	pop			rdi
	pop			rax

	cmp			rax, 256			; Check EOF
	je			read_loop

end:
	pop			rdx					; Reset used registers
	pop			rdi
	pop			rax
	ret
