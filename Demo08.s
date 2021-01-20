	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$96, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	L___const.main.element(%rip), %rsi
	movq	%rsi, -32(%rbp)
	movl	$0, -52(%rbp)
	movb	$49, -53(%rbp)
	movl	$1, -72(%rbp)
	movl	$2, -68(%rbp)
	movl	$3, -64(%rbp)
	movq	-72(%rbp), %rsi
	movq	%rsi, -48(%rbp)
	movl	-64(%rbp), %edi
	movl	%edi, -40(%rbp)
	movl	$1, -76(%rbp)
	movl	-48(%rbp), %esi
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movzbl	-53(%rbp), %esi
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -80(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.2(%rip), %rdi
	leaq	L_.str.3(%rip), %rsi
	movl	%eax, -84(%rbp)         ## 4-byte Spill
	callq	_fopen
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	jne	LBB0_2
## %bb.1:
	movq	___stderrp@GOTPCREL(%rip), %rax
	movq	(%rax), %rsi
	leaq	L_.str.4(%rip), %rdi
	callq	_fputs
	movl	$1, %edi
	movl	%eax, -88(%rbp)         ## 4-byte Spill
	callq	_exit
LBB0_2:
	movq	-24(%rbp), %rdi
	callq	_rewind
	movq	-24(%rbp), %rsi
	leaq	L_.str.5(%rip), %rdi
	callq	_fputs
	xorl	%ecx, %ecx
	movl	%eax, -92(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$96, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## @__const.main.element
L___const.main.element:
	.byte	97                      ## 0x61
	.space	7

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d\n"

L_.str.1:                               ## @.str.1
	.asciz	"%c\n"

L_.str.2:                               ## @.str.2
	.asciz	"b.txt"

L_.str.3:                               ## @.str.3
	.asciz	"a+"

L_.str.4:                               ## @.str.4
	.asciz	"Error opening a.txt file"

L_.str.5:                               ## @.str.5
	.asciz	"sunchenchen"


.subsections_via_symbols
