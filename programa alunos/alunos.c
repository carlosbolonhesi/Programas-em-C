#include <stdio.h>
int main(){

float alunos[5][4];
int i, j, maior, linha;

for(i=0;i<5;i++){
    printf("\nAluno %d\n", i + 1);
    printf("RA: ");
    scanf("%f", &alunos[i][0]);
    printf("Nota Prova: ");
    scanf("%f", &alunos[i][1]);
    printf("Nota Trabalho: ");
    scanf("%f", &alunos[i][2]);
    alunos[i][3] = (alunos[i][1] + alunos[i][2])/2;
    printf("Média final: %.1f", alunos[i][3]);
}

maior = alunos[0][4];
linha = 0;
for(i = 0; i<5;i++){
    if(alunos[i][4] > maior){
        maior = alunos[i][4];
        linha = i;
    }
}
printf("\nInformações do aluno com a maior média final: ");
printf(" %.0f ", alunos[linha][0]);
for(j=1;j<4;j++){
    printf(" %.1f ", alunos[linha][j]);
}
 return 0;      
}