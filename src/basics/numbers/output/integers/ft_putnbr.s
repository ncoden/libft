; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putnbr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/04 13:07:07 by ncoden            #+#    #+#              ;
;    Updated: 2015/09/07 23:29:00 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_putnbr
;	%rdi : int				n

SECTION .text
	global		_ft_putnbr

	extern		_ft_putchr

_ft_putnbr:
	push		rbp					; Enter
	mov			rbp, rsp

	push		rdi					; Save used registers
	push 		rax
	push		rbx
	push		rdx

	mov			ebx, edi			; Move n to an unused register

	cmp			ebx, 0				; Skip the next step for positive numbers
	jge			prepare_loop

prepare_negative:
	not			ebx					; Transform negative number to unsigned
	inc			ebx					; (!negative_nbr + 1 = positive_nbr)

	mov			rdi, '-'			; Print '-'
	call		_ft_putchr

prepare_loop:
	mov			eax, ebx			; Prepare division (number to divide in %eax)
	mov			edi, 10				; Prepare division (divisor in %edi)

	sub			ebx, ebx			; Start loop count at 0

read_loop:							; Read loop : Save number digits into stack
	sub			edx, edx			; | - Clear edx
	div			edi					; | - Divise %edx:%eax with %edi
									; |
	push		rdx					; | -> Save each digit
	sub			rsp, 8				; |    (Align stack)
									; |
	inc			ebx					; | - Count digit number
									; |
	cmp			eax, 0				; |
	jne			read_loop			; |_

print_loop:							; Print loop : For each digit pushed, print
									; |				it (in reversed order)
	add			rsp, 8				; |    (Align stack)
	pop			rdi					; | <- Retrive each digit
									; |
	add			edi, '0'			; | - Convert to printable digit
	call		_ft_putchr			; | - Print digit
									; |
	dec			ebx					; |
	cmp			ebx, 0				; |
	jne			print_loop			; |_

	pop			rdx					; Reset used registers
	pop			rbx
	pop			rax
	pop			rdi

	mov			rsp, rbp			; Leave
	pop			rbp
	ret
