; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putnbr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/04 13:07:07 by ncoden            #+#    #+#              ;
;    Updated: 2015/08/15 14:38:48 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

%include "libft_asm.h64"

;	ft_putnbr
;	%rdi : int				s

SECTION .text
	global		_ft_putnbr

	extern		_ft_putchr

_ft_putnbr:
	push		rdi					; Save used registers
	push 		rax
	push		rbx
	push		rdx

	mov			eax, edi			; Prepare division (number to divide in %eax)
	sub			rdx, rdx			; Clear %rdx (modulo is writed in %edx, but
									;	the all 64-bit register is pushed/printed)
	sub			ebx, ebx			; Start loop count at 0

	cmp			eax, 0				; Skip the next step for positive numbers
	jge			prepare_loop

prepare_negative:
	not			eax					; Transform negative number to unsigned
	inc			eax					; (!negative_nbr + 1 = positive_nbr)

	mov			rdi, '-'			; Print '-'
	call		_ft_putchr

prepare_loop:
	mov			edi, 10				; Prepare division (divisor in %edi)

read_loop:							; Read loop : Save number digits into stack
	sub			edx, edx			;  - Clear edx
	div			edi					;  - Divise %edx:%eax with %edi

	push		rdx					;  - Push modulo
	inc			ebx

	cmp			eax, 0
	jne			read_loop

print_loop:							; Print loop : For each digit pushed, print
									;				it (in reversed order)
	pop			rdi					;  - Pop modulo
	add			edi, '0'			;  - Print digit
	call		_ft_putchr

	dec			ebx
	cmp			ebx, 0
	jne			print_loop

	pop			rdx					; Reset used registers
	pop			rbx
	pop			rax
	pop			rdi
	ret
