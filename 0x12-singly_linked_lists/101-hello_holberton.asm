	section .data
	msg db 'Hello, Holberton', 0

		section .text
		global main
		extern printf

	main:
		mov edi, msg
		xor eax, eax

		call printf

		mov eax, 0
		ret
