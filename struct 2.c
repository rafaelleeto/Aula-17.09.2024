#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[50];
    int matricula;
    char curso[50];
}a;
struct aluno al[5];


void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

void dados (){
    for(int i = 0; i<5; i++){
    printf("Escreva o seu nome:");
    fgets(al[i].nome, 50, stdin);
     printf("Escreva seu curso");
    fgets(al[i].curso,50, stdin);
    printf("Escreva sua matricula");
    scanf("%d",&al[i].matricula);
    flush_in();
   
    }

}

void mostrar_dados(){
    for(int i = 0; i<5; i++){
    
        printf("nome: %s\n",al[i].nome);
        printf("matricula: %i\n",al[i].matricula);
        printf("curso: %s\n",al[i].curso);
    }

    
}



int main (){
    dados();
    mostrar_dados();
    return 0;
}