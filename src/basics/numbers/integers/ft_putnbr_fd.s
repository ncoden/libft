; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putnbr_fd.s                                     :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/04 13:07:07 by ncoden            #+#    #+#              ;
;    Updated: 2015/09/07 21:44:33 by ncoden           ###   ########.fr        ;
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

	mov			ebx, edi			; Move n to an unused register

	cmp			ebx, 0				; Skip the next step for positive numbers
	jge			prepare_loop

prepare_negative:
	not			ebx					; Transform negative number to unsigned
	inc			ebx					; (!negative_nbr + 1 = positive_nbr)

	mov			edx, esi			; -> Save fd
									; (_ft_putchr_fd change %rsi)

	mov			rdi, '-'			; Print '-' (fd in %rsi)
	call		_ft_putchr_fd

	mov			esi, edx			; <- Retrieve fd

prepare_loop:
	mov			eax, ebx			; Prepare division (number to divide in %eax)
	mov			edi, 10				; Prepare division (divisor in %edi)

	sub			ebx, ebx			; Start loop count at 0

read_loop:							; Read loop : Save number digits into stack
	sub			edx, edx			; | - Clear edx
	div			edi					; | - Divise %edx:%eax with %edi
									; |
	push		rdx					; | -> Save each modulo
	inc			ebx					; |
									; |
	cmp			eax, 0				; |
	jne			read_loop			; |_

	mov			edx, esi			; -> Save fd
									; (_ft_putchr_fd change %rsi)

print_loop:							; Print loop : For each digit pushed, print
									; |				it (in reversed order)
									; | Print digit :
	pop			rdi					; |  <- Retrieve each modulo
	add			edi, '0'			; | 
	mov			esi, edx			; |  <- Retrieve fd
	call		_ft_putchr_fd		; |
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