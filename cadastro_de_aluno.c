#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%i", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%i", &matricula);

    printf("Nome do aluno: %s\nMatrícula: %i\nIdade do aluno: %i\nAltura do aluno: %.2f", nome, matricula, idade, altura);

    return 0;


}
