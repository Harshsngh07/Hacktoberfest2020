                format elf64

				section 	'.text'
				public 		strlen2

strlen2:	
                xor         eax, eax
conta:
                cmp         byte [rdi], 0
                je          return
                inc         eax  
                inc         rdi
                jmp         conta
return:       
                ret