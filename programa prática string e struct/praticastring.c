#include <stdio.h>
#include <string.h>
int main(){
typedef struct{
    int dia;
    int mes;
    int ano;
} data;
typedef struct{
    char nome[50];
    int idade;
    data nascimento;
} pessoa;
pessoa lista[5];
for(int i=0;i<5;i++){
    printf("Nome: ");
    scanf(" %[^\n]", lista[i].nome);
    printf("Idade: ");
    scanf("%d", &lista[i].idade);
    printf("Data de nascimento: ");
    scanf("%d %d %d", &lista[i].nascimento.dia, &lista[i].nascimento.mes, &lista[i].nascimento.ano);
}
int temp = 0;
for(int i=1;i<5;i++){
    if(strcmp(lista[i].nome, lista[temp].nome)<0){
        temp = i;
    }
}
printf("Registro do indivíduo com o menor nome lexicograficamente: %s %d anos %d/%d/%d\n", lista[temp].nome, lista[temp].idade, lista[temp].nascimento.dia, lista[temp].nascimento.mes, lista[temp].nascimento.ano);
for(int i=1;i<5;i++){
    if(lista[i].idade > lista[temp].idade){
        temp = i;
    }
}
printf("Registro do indivíduo mais velho: %s %d anos %d/%d/%d\n", lista[temp].nome, lista[temp].idade, lista[temp].nascimento.dia, lista[temp].nascimento.mes, lista[temp].nascimento.ano);
return 0;
}