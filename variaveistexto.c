#include<stdio.h>

main(){

    //declaração de variaveis de texto
    //chamdas em c de vetores de caractere
    char nome[20] = "Ana da Silva";
    char endereco[50];
    char matricula[12];

    printf("\nNome: %s", nome);

    //recebendo dados com scanf
    printf("\nDigite o endereco:");
    scanf("%[^\n]", endereco);
    printf("\nO endereco e: %s", endereco);
    fflush(stdin); //limpa o buffer do teclado

    //recendo dados com fgets
    printf("\nDigite a matricula:");
    fgets(matricula, 12, stdin);
    printf("\nA matricula e: %s", matricula);
}