#include <stdio.h>

int main() {
    float volts, ohms, amperes, watts;
    int opcao;

    printf("Escolha a grandeza a ser convertida:\n");
    printf("1 - Volts para Watts\n");
    printf("2 - Ohms para Amperes\n");
     printf("3 - watts para amperes\n");
     printf ("4- watts para volts\n")
    printf("5 - amperes para watts\n");
    printf("6 - amperes para watts\n");
     printf("5 - volts e ohms para amperes\n");
    printf("6 - amperes e ohms para volts\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite o valor em Volts: ");
            scanf("%f", &volts);
            printf("O valor em Watts eh: %.2f W\n", volts * volts);
            break;
        case 2:
            printf("Digite o valor em Ohms: ");
            scanf("%f", &ohms);
            printf("Digite o valor em Amperes: ");
            scanf("%f", &amperes);
            printf("O valor em Amperes eh: %.2f A\n", ohms * amperes);
            break;
            case 3:
            	  printf("Digite o valor em Watts: ");
            scanf("%f", &watts);
            printf("Digite o valor em volts ou amperes: ");
            scanf("%f", &amperes);
            printf("O valor em volts e amperes eh: %.2f A\n", ohms * amperes);
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}


Convers�o de volts para amperes: I = V / R, onde I � a corrente em amperes, V � a tens�o em volts e R � a resist�ncia em ohms.
Convers�o de amperes para volts: V = I * R, onde V � a tens�o em volts, I � a corrente em amperes e R � a resist�ncia em ohms.
Convers�o de watts para volts e amperes: V = v(P * R), onde V � a tens�o em volts, P � a pot�ncia em watts e R � a resist�ncia em ohms. I = P / V, onde I � a corrente em amperes.
Convers�o de watts para amperes: I = v(P / R), onde I � a corrente em amperes, P � a pot�ncia em watts e R � a resist�ncia em ohms.
Convers�o de volts e amperes para watts: P = V * I, onde P � a pot�ncia em watts, V � a tens�o em volts e I � a corrente em amperes.
Convers�o de volts e ohms para amperes: I = V / R, onde I � a corrente em amperes, V � a tens�o em volts e R � a resist�ncia em ohms.
Convers�o de amperes e ohms para volts: V = I * R, onde V � a tens�o em volts, I � a corrente em amperes e R � a resist�ncia em ohms.
