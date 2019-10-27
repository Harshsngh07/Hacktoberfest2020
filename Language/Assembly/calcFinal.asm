section .data
	scan_format 		db 	"%f", 0
	scan_char_format	db	"%c", 0
	printf_format	 	db 	"%f", 10, 0
	mensagem1 : db "Primeiro numero: ", 0
	mensagem2 : db "Segundo numero: ", 0
	mensagem3 : db "entre com o operador: ", 0
	mensagem4 : db "Nao eh possivel fazer divisao por zero ", 0
	mensagem5 : db "Operador Invalido Programa Abortado", 0
	
	
section .bss
	numero1 :	resd	1
	numero2 :	resd	1
	operador:	resd	1

section .text
	
	global main
	extern scanf
	extern printf

main:
	push ebx
	push ecx


	;MENSAGEM PARA ENTRAR COM O NUMERO 1
	push 	mensagem1
	call 	printf
	add 	esp , 4

	;LER O NUMERO 1
	push 	numero1
	push 	scan_format
	call 	scanf
	add 	esp , 8

	; MENSAGEM PARA ENTRAR COM O OPERADOR
	push 	mensagem3
	call 	printf
	add 	esp , 4	

	;LER O \n
	push 	operador
	push 	scan_char_format
	call 	scanf
	add 	esp , 8

	;LER O OPERADOR
	push 	operador
	push 	scan_char_format
	call 	scanf
	add 	esp , 8

	;MENSAGEM PARA ENTRAR O NUMERO 2
	push 	mensagem2
	call 	printf
	add 	esp , 4

	;LER O NUMERO 2
	push 	numero2
	push 	scan_format
	call 	scanf
	add 	esp , 8


	;COMPARA O CARACTERE OPERACAO PARA DESCOBRIR QUAL OPERACAO FAZER
	mov 	eax , dword [operador]
	cmp 	eax , 2Bh
	je 		soma
	cmp 	eax , 2Dh
	je 		subi
	cmp 	eax , 2Fh
	je 		divi
	cmp 	eax , 2Ah
	je 		multi

	jmp		operador_invalido
	;jmp 	abortar
	jmp		continua

operador_invalido:
	push 	mensagem5
	call 	printf
	add 	esp ,4
	jmp		abortar

multi:
    fld     dword [numero1]
    fld     dword [numero2]
    fmul
    fstp    dword [numero1]                                           
    jmp printar

soma:
    fld     dword [numero1]
    fld     dword [numero2]
    fadd
    fstp    dword [numero1]                                           
    jmp printar

divi:
	mov		eax, dword[numero2]
	cmp 	eax, 0
	je		erro

    fld     dword [numero1]
    fld     dword [numero2]
    fdiv
    fstp    dword [numero1]                                           
    jmp printar

subi:
    fld     dword [numero1]
    fld     dword [numero2]
    fsub
    fstp    dword [numero1]                                           
    jmp printar


printar:
	mov 	ebx , dword [numero1]
	fld     dword [numero1]               ; transform z in 64-bit word by pushing in stack
    fstp    qword [numero1]            ; and popping it back as 64-bit quadword

                 
    push    dword [numero1+4]          ; push temp as 2 32-bit words
    push    dword [numero1]
    push    dword printf_format     ; address of format string
    ;mov	ebx , dword[numero1+4]
    call    printf                  ; Call C function
    add     esp , 12                 ; pop stack 3*4 bytes

    jmp 	continua

abortar:
    pop 	ecx
	pop 	ebx
	xor 	eax , eax
	ret	

erro:
	push 	mensagem4
	call 	printf
	add 	esp ,4
	jmp 	abortar

continua:
	mov 	dword[numero1], ebx

	; MENSAGEM PARA ENTRAR COM O OPERADOR
	push 	mensagem3
	call 	printf
	add 	esp , 4	

	;LER O OPERADOR
	push 	operador
	push 	scan_char_format
	call 	scanf
	add 	esp , 8

	push operador
	push 	scan_char_format
	call 	scanf
	add 	esp , 8

	;ABORTA O PROGRAM COM ENTER
	mov 	eax , dword [operador]
	cmp 	eax , 0Ah
	je 		abortar

	;MENSAGEM PARA ENTRAR O NUMERO 2
	push 	mensagem2
	call 	printf
	add 	esp , 4

	;LER O NUMERO 2
	push 	numero2
	push 	scan_format
	call 	scanf
	add 	esp , 8


	;COMPARA O CARACTERE OPERACAO PARA DESCOBRIR QUAL OPERACAO FAZER
	mov eax, dword [operador]

	cmp		eax , 2Bh
	je		soma
	cmp 	eax , 2Dh
	je 		subi
	cmp 	eax , 2Fh
	je 		divi	
	cmp 	eax , 2Ah
	je 		multi
	jmp		operador_invalido
	jmp 	abortar
