; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putnbr_fd.s                                     :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/04 13:07:07 by ncoden            #+#    #+#              ;
;    Updated: 2015/09/09 16:55:17 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	ft_putnbr_fd
;	%rdi : int				s
;	%rsi : int				fd

SECTION .text
	global		_ft_putnbr_fd

	extern		_ft_putchr_fd

_ft_putnbr_fd:
	push		rbp					; Enter
	mov			rbp, rsp

	push		rdi					; Save used registers
	push 		rax
	push		rbx
	push		rdx
	push		r8
	sub			rsp, 8

	mov			ebx, edi			; Move n to an unused register

	cmp			ebx, 0				; Skip the next step for positive numbers
	jge			prepare_loop

prepare_negative:
	not			ebx					; Transform negative number to unsigned
	inc			ebx					; (!negative_nbr + 1 = positive_nbr)

	mov			r8d, esi			; -> Save fd
									; (_ft_putchr_fd change %esi)

	mov			rdi, '-'			; Print '-' (fd in %esi)
	call		_ft_putchr_fd

	mov			esi, r8d			; <- Retrieve fd

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

	mov			r8d, esi			; -> Save fd
									; (_ft_putchr_fd change %esi)

print_loop:							; Print loop : For each digit pushed, print
									; |				it (in reversed order)
									; | Print digit :
	add			rsp, 8				; |     (Align stack)
	pop			rdi					; |  <- Retrieve each digit
	mov			esi, r8d			; |  <- Retrieve fd
									; |
	add			edi, '0'			; |  - Convert to printable digit
	call		_ft_putchr_fd		; |  - Print digit
									; |
	dec			ebx					; |
	cmp			ebx, 0				; |
	jne			print_loop			; |_

	pop			r8
	pop			rdx					; Reset used registers
	pop			rbx
	pop			rax
	pop			rdi

	mov			rsp, rbp			; Leave
	pop			rbp
	ret