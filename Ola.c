#include <stdio.h>
#include <stdlib.h>

void main () {
    int x = 0;                                      //(criando uma variável Inteira)
    printf("Valor de x: %d\n",x);                   //(Imprimindo um valor do tipo inteiro)
    x++;                                            //(incrementando x em 1 unidade)
    printf("Valor de x: %d\n",x);                   //(\n (espaçamento entre linhas) 
    float y = 12.345678;                            //(criando uma variável Real)
    printf("Valor de x: %f\n",y);                   //(Imprimindo o valor de y)
    printf("Valor de x: %.2f\n",y);                 //(Imprimindo o valor de y com duas casas decimais)
    char sexo = 'M';                                //(Variável que aceita 1 caracter [lembrando que tem que ser entre apóstrofes])
    printf("Sexo: %c\n", sexo);                     //(Imprime a variável do tipo caracter)
    char nome[30] = "joao";                         //(Criando vetor de caracteres para uma variável 'String' = Texto)
    printf("Nome: %s\n", nome);                     //(Imprimindo um vetor de caracteres "String")
    printf("Primeira Letra: %c\n", nome[0]);        //(Imprime o primeiro caracter do vetor que começa na posição 0)
    
    printf("\nDigite o valor de X: "); 
    scanf("%d", &x);                                //(comando para leitura de dados, scannear o dado e guardar o endereço na variável x)
    printf("O valor digitado foi: %d", x);
    gcc -o foo foo.c -lm                            //(forçar a inserção do math -> pow())


    printf("\nOlá Mundo!");  
}
