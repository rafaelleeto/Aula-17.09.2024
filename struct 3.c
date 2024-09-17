#include <stdio.h>
#include <string.h>
struct contato{
    char nome[50];
    int telefone;
    char endereco[50];
    char email[50];
};
struct agenda{
    struct contato agenda[100];
};
struct agenda a;
int numero;
int agenda_numero=0;
int opcao;
int contato;
void menu(){
do{
    printf("Escolha uma opção: \n");
    printf("\n1- Inserir");
    printf("\n2- listar contatos");
    printf("\n3- Localizar contato");
    printf("\n4- excluir");
    printf("\n5- Sair\n");
    scanf("%d",&opcao);
    flush_in();
    switch (opcao)
    {
    case 1:
    inserir_dados();
        break;
    case 2:
    mostrar_dados();
        break;
    case 3:
    buscar();
        break;
    case 4:
    excluir();
        break;
    default:
        break;
    } 
} 
while (opcao!= 5);
}
void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}
void excluir(){
    printf("Escolha o contato em que voce deseja apagar: lista abaixo :");
    mostrar_dados();
    scanf("%d",&numero);
    flush_in();
    strcpy(a.agenda[numero].nome, "");
    strcpy(a.agenda[numero].endereco, "");
    strcpy(a.agenda[numero].email, "");
    a.agenda[numero].telefone=0;
}
void inserir_dados (){
    printf("Escreva o seu nome:");
    fgets(a.agenda[agenda_numero].nome, 50, stdin);
    strtok(a.agenda[agenda_numero].nome,"\n");
    printf("Escreva seu endreco");
    fgets(a.agenda[agenda_numero].endereco,50, stdin);
    strtok(a.agenda[agenda_numero].endereco,"\n");
    printf("Escreva sua matricula");
    scanf("%d",&a.agenda[agenda_numero].telefone);
    flush_in();
    printf("Escreva o seu email:");
    fgets(a.agenda[agenda_numero].email, 50, stdin);
    strtok(a.agenda[agenda_numero].email,"\n");
    agenda_numero++;
}
void mostrar_dados(){
    for(int i = 0; i<5; i++){
        printf("\n%d Matricula:\n",i);
        printf("nome: %s\n",a.agenda[i].nome);
        printf("telefone: %i\n",a.agenda[i].telefone);
        printf("email: %s\n",a.agenda[i].email);
        printf("endereço:: %s\n\n",a.agenda[i].endereco);
    }  
}
void buscar(){
    printf("Escreva qual o ID do contato que você deseja localizar: ");
    scanf("%d",&contato);
    printf("%d Matricula:\n",contato);
    printf("nome: %s\n",a.agenda[contato].nome);
    printf("telefone: %i\n",a.agenda[contato].telefone);
    printf("email: %s\n",a.agenda[contato].email);
    printf("endereço:: %s\n\n",a.agenda[contato].endereco);
}
int main (){
    menu();
    return 0;
}