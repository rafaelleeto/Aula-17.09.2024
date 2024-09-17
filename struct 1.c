#include <stdio.h>
#include <string.h>

struct info_dados{
    char nome[50];
    int idade;
    char endereco[50];
}p;


void dados (){
    printf("Escreva o seu nome:");
    fgets(p.nome, 50, stdin);
    printf("Escreva sua idade");
    scanf("%d ",&p.idade);
    printf("Escreva seu endereço");
    fgets(p.endereco,50, stdin);
}

int main (){
    dados();
    return 0;
}