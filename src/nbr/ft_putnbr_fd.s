; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_putnbr_fd.s                                     :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/05/04 13:07:07 by ncoden            #+#    #+#              ;
;    Updated: 2015/05/07 16:33:33 by ncoden           ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

%include "libft_asm.h64"

;	ft_putnbr_fd
;	%rdi : int				s
;	%rsi : int				fd

SECTION .text
	global		_ft_putnbr_fd

_ft_putnbr_fd:
	push		rdi
	push 		rax
	push		rbx
	push		rdx

	mov			eax, edi			; Prepare division (number to divide in %eax)
	sub			rdx, rdx			; Clear %rdx (modulo is writed in %edx, but
									;	the 64-bit register is pushed/printed)
	sub			ebx, ebx			; Start loop count at 0

	cmp			eax, 0				; Skip for positive numbers
	jge			prepare_loop

prepare_negative:
	not			eax					; Transform negative number to unsigned
	inc			eax					; (!negative_nbr + 1 = positive_nbr)

	mov			rdi, '-'			; Print '-'
	call		_ft_putchr_fd		;		(char in %rdi, fd in %rsi)

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
	call		_ft_putchr_fd		;		(char in %rdi, fd in %rsi)

	dec			ebx
	cmp			ebx, 0
	jne			print_loop

	pop			rdx					; Reset used registers
	pop			rbx
	pop			rax
	pop			rdi
	ret
