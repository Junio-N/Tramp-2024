#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("Junio Novais");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2() {
    printf("\n30*27 = %d", 30*27);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3() {
    float media = (5+8+12)/3.0;
    printf("\na Média entre 5, 8 e 12 é = %.2f", media);
}

//4. Faça um programa que leia e imprima um número inteiro.
void q4() {
    int x;
    printf("\nDigite um número inteiro: ");
    scanf("%d", &x);
    printf("O valor digitado foi %d\n", x);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q5() {
    float x, y;
    printf("\nDigite o valor de x: ");
    scanf("%f", &x);
    printf("\nDigite o valor de y: ");
    scanf("%f", &y);
    printf("\nOs valores digitados foram: %.2f %.2f\n", x, y);
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6() {
int x, y, z;
printf("\nDigite um número inteiro: ");
scanf("%d", &x);
y=x-1;
z=x+1;
printf("\nO antecessor e o sucessor do número digitado é: %d e %d\n", y, z);
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7() {
char nome[40];
char end[40];
char tel[15];
printf("\ndigite o seu nome: ");
scanf("%40[^\n]", nome);
printf("\ndigite o seu endereço: ");
scanf(" %40[^\n]", end);
printf("\ndigite o seu número de telefone: ");
scanf(" %15[^\n]", tel);
printf("\nOs dados do cliente são: %s, residente em %s, com número de telefone %s", nome, end, tel);    
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8() {
 int x, y, z;
 printf("Digite um número inteiro: ");
 scanf("%d", &x);
 printf("Digite outro número inteiro: ");
 scanf("%d", &y);
 z = x-y;
 printf("\nA subtração entre o primeiro e o segundo número é: %d", z);
}

//9. Faça um programa que leia um número real e imprima ¼ deste número.
void q9() {
float x, y;
printf("Digite um número real: ");
scanf("%f", &x);
y= (x/4); 
printf("\n¼(um quarto) do valor digitado é igual a: %.2f ", y); 
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10() {
float x,y,z,m; 
printf("Digite um número real: ");
scanf("%f", &x);
printf("Digite um número real: ");
scanf("%f", &y);
printf("Digite um número real: ");
scanf("%f", &z);
m = (x+y+z)/3;
printf("\nA média dos números é igual a: %.2f", m); 
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11() {
float a, s, m, d, x, y;    
printf("Digite um número real: ");
scanf("%f", &x);
printf("Digite mais um número real: ");
scanf("%f", &y);
a=x+y; s=x-y; m=x*y; d=x/y;
printf("As quatro operações básicas entre o primeiro e segundo número são: adicão=%.2f, subtração=%.2f, multiplicação=%.2f, divisão=%.2f", a,s,m,d);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12() {
float x;
printf("Digite um número real: ");
scanf("%f", &x);
printf("O valor do número digitado ao quadrado é: %.2f", x*x);
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13() {
float x;
printf("Digite o saldo da sua conta: ");
scanf("%f", &x);
printf("O novo saldo da conta após o reajuste de 2 por cento é igual a: %.2f", x*1.02);
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).
void q14() {
float x,y,p,a;
printf("Digite o tamanho da base do retângulo: ");
scanf("%f", &x);
printf("Digite a altura do retângulo: ");
scanf("%f", &y);
p= (x*2+y*2);
a= (x*y);
printf("O perímetro do retângulo é igual a %.2f e sua área igual a %.2f", p,a);
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15() {
float v,d,desc,valf;
printf("Digite original do produto desejado (sem desconto): ");
scanf("%f", &v);
printf("Digite o desconto desejado ou o disponibilizado pela loja (em percentual): ");
scanf("%f", &d);
desc=(v*(d/100));
valf=(v-desc);
printf("O valor do desconto é %.2f(por cento), sendo assim, o valor final do produto é igual a: %.2f", desc, valf);
}

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void q16() {
float sal, perc, salf;
printf("Digite o valor do seu salário atual: ");
scanf("%f", &sal);
printf("Qual o percentual de reajuste salarial (em percentual)? ");
scanf("%f", &perc);
salf= sal+(sal/100)*perc;
printf("O salário após o reajuste é: R$%.2f", salf);
}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void q17() {
float g,f;
printf("Digite o valor da temperatura em graus celsius: ");
scanf("%f", &g);
f= (9*g+160)/5;
printf("O valor da temperatura em Fahrenheit é: %.2f", f); 
}
//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.
void q18() {
float t,v,d,l;
printf("Qual foi a duração da viagem em horas? ");
scanf("%f", &t);
printf("Qual a velocidade média do veículo durante a viagem (em km/h)? ");
scanf("%f", &v); 
d = t*v;
l = d/12;
printf("A distância percorrida foi de %.1fkm e a quantidade de combustível consumida foi %.1fl", d, l);
}

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q18();
    return EXIT_SUCCESS;
}