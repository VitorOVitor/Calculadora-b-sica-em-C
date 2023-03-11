#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operador;
    float num_1, num_2, resultado;

    printf("Coloque a operacao( +, _, *, /) que voce deseja fazer: \n");
    scanf(" %c", &operador);

    printf("Agora, coloque aqui o primeiro numero :\n");
    scanf(" %f", &num_1);

    printf("Por fim, coloque o segundo numero :\n");
    scanf(" %f", &num_2);

    switch(operador){
    case'+':
        resultado= num_1 + num_2;
        printf("O resultado dessa soma e igual a %.2f", resultado);
        break;
        case'-':
        resultado= num_1 - num_2;
        printf("O resultado dessa subtracao e igual a %.2f", resultado);
        break;
        case'*':
        resultado= num_1 * num_2;
        printf("O resultado dessa multiplicacao e igual a %.2f", resultado);
        break;
        case'/':
        resultado= num_1 / num_2;
        printf("O resultado dessa divisao e igual a %.2f", resultado);
        break;
        default:{
            printf("Por favor, coloque um dado valido");
        }
    }
    return 0;

}
