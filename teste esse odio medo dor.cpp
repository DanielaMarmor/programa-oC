#include <stdio.h>

int main () {
    int nota = 0;
    char resp;
	
    printf("Leia o trecho a seguir e assinale a alternativa CORRETA. \"Trata-se de um componente essencial, não apenas nos computadores, mas também em equipamentos como smartphones ou tablets. É componente eletrônico que armazena dados de forma temporária, durante a execução do sistema operativo, para que possam ser rapidamente acedidos pelo processador. Esta é considerada a memória principal do sistema e, além disso, as velocidades de leitura e escrita são superiores em relação a outro tipo de armazenamento\"\n");
    printf("O trecho se refere a:\n");
    printf("A -> Memória ROM\n");
    printf("B -> Disco rígido\n");
    printf("C -> Memória RAM\n");
	
    resp = getchar();
    getchar();
	
    switch (resp) {
        case 'C':
        case 'c':
            nota++;
            break;
        default:
            break;
    }

    printf("No Windows 7, o atalho do teclado Tecla do logotipo do Windows + Home tem a função de:\n");
    printf("A -> Minimizar todas as janelas, menos a ativa\n");
    printf("B -> Abrir a pasta de Downloads\n");
    printf("C -> Enviar comando para impressora\n");
	
    resp = getchar();
    getchar();
	
    switch (resp) {
        case 'A':
        case 'a':
            nota++;
            break;
        default:
            break;
    }
    
    
    
	printf ("Nas opções representadas a seguir, qual das opções refere-se à função de um sistema operacional\n");
     printf ("instalado em um computador ou dispositivo:\n");
	printf ("A -> Exclusivamente permitir o acesso à rede INTERNET\n") ;
		printf ("B -> Software cujo único objetivo e gerar uma interface de comunicação com o usuário\n") ;
			printf ("C -> Principal software do computador, pois possibilita o funcionamento e utilização dos dispositivos acoplados e demais softwares\n") ;
		
				
		resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'C':
				case 'c':
				nota++;
				break;
				default:
				break; 
			}
			
			
			

printf ("Para selecionar partes ALTERNADAS (palavras, frases, letras) usando mouse e teclado de um texto do Microsoft Word\n");
     printf ("após selecionar um texto ou parte dele, deve-se proceder de que forma:\n");
	printf ("A -> Manter pressionada a tecla CTRL e ir selecionando com o mouse as partes de texto\n") ;
		printf ("B -> Manter pressionada a tecla SHIFT e ir selecionando com o mouse as partes de texto\n") ;
			printf ("C -> Pressionar a ferramenta PINCEL DE FORMATAÇÃO na barra de ferramentas e ir selecionando com o mouse as partes de texto\n") ;
	
	
	
		resp = getchar ();
			getchar ();
			
			switch (resp) {
				
				case 'A':
				case 'a':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
printf ("O que é pc\n");
 
	printf ("A -> Um saco de batata\n") ;
		printf ("B -> um computador\n") ;
			printf ("C -> um fini de morango\n") ;
		
					resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'B':
				case 'b':
				nota++;
				break;
				default:
				break; 
			}


printf ("pra q serve um pend drive\n");
 
	printf ("A -> guardar arquivos\n") ;
		printf ("B -> Pra lutar com um anão selvagem\n") ;
			printf ("C -> pra dar pro teu gato comer\n") ;
		
			
				resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'A':
				case 'a':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
			
			
			

printf ("pra q serve um teclado\n");
 
	printf ("A -> pra apertar quando estiver estressadinho\n") ;
		printf ("B -> Pra usar junto com o pc\n") ;
			printf ("C -> pra fazer obra de arte\n") ;
		
				
					
					resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'B':
				case 'b':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
printf ("O que é um notebook?\n");
 
	printf ("A -> um pc portatil\n") ;
		printf ("B -> um bloquinho fino com joguinhos\n") ;
			printf ("C -> um tipo de árvore exótica\n") ;
		
					resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'A':
				case 'a':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
			
printf ("O word serve pra que?\n");
 
	printf ("A -> formatar textos\n") ;
		printf ("B -> fazer magia negra\n" ) ;
			printf ("C -> pra acessar um portal pra nárnia\n") ;
		
					resp = getchar ();
			getchar ();
			
			switch (resp) {
				case 'A':
				case 'a':
				nota++;
				break;
				default:
				break; 
			}
			
			
			
			
	
    printf("Sua nota eh %d.\n", nota);
	
    return 0;
}
