	.file	"excise_3.43.c"
	.text
	.globl	get
	.type	get, @function
get:
.LFB75:
	.cfi_startproc
	movq	(%rdi), %rax
	movq	(%rdi,%rax,8), %rax
	movl	%eax, (%rsi)
	ret
	.cfi_endproc
.LFE75:
	.size	get, .-get
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
	movq	$0, 26(%rsp)
	movl	$0, 34(%rsp)
	movw	$0, 38(%rsp)
	movq	$3, 16(%rsp)
	movw	$1, 24(%rsp)
	movb	$99, 26(%rsp)
	leaq	12(%rsp), %rsi
	leaq	16(%rsp), %rdi
	call	get
	movq	40(%rsp), %rdx
	xorq	%fs:40, %rdx
	jne	.L5
	movl	$0, %eax
	addq	$56, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L5:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE76:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
