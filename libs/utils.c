#include <stdio.h>
#include <stdlib.h>

#define endl printf("\n")

/* 
 *  Funcao que mostra as opcoes que o usuario pode realizar no sistema.
 */
int menu()
{
    int choice;

    printf("\033c");
    printf("\x1B[1mEscolha uma opcao:\x1B[0m"), endl, endl;
    printf("[1] Cadastrar usuario"), endl;
    printf("[2] Consultar usuario"), endl;
    printf("[3] Excluir usuario"), endl;
    printf("[4] Sair"), endl, endl;
    printf("[?] "), scanf("%i", &choice);

    if ( choice == 4 )
    {
        printf("\033c");
        printf("Obrigado por usar nosso sistema."), endl;
        exit(0);
    }

    return choice;
}