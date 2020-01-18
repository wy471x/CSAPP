	.file	"exercise_4.4.c"
	.text
	.globl	rsum
	.type	rsum, @function
rsum:
.LFB75:
	.cfi_startproc
	testq	%rsi, %rsi
	jns	.L8
	movl	$0, %eax
	ret
.L8:
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	(%rdi), %rbx
	subq	$1, %rsi
	addq	$8, %rdi
	call	rsum
	addq	%rbx, %rax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE75:
	.size	rsum, .-rsum
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"sum=%ld\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB76:
	.cfi_startproc
	subq	$56, %rsp
	.cfi_def_cfa_offset 64
	movq	%fs:40, %rax
	movq	%rax, 40(%rsp)
	xorl	%eax, %eax
	movq	$1, (%rsp)
	movq	$2, 8(%rsp)
	movq	$3, 16(%rsp)
	movq	$4, 24(%rsp)
	movq	%rsp, %rdi
	movl	$3, %esi
	call	rsum
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rsi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk@PLT
	movq	40(%rsp), %rcx
	xorq	%fs:40, %rcx
	jne	.L12
	movl	$0, %eax
	addq	$56, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L12:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE76:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
