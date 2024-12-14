/*
EXERCÍCIOS DO CAPÍTULO 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.
void questao01() {
int x,y,r;
printf("Digite um número inteiro: ");
scanf("%d", &x);
printf("Digite mais um número inteiro: ");
scanf("%d", &y);
r = (x+y);
if (r >= 10) {
	printf("A soma dos valores inteiros é maior que 10, e tem valor: %d", r);
} else {
	printf("A soma dos números é menor que 10");
} 
}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void questao02() {
int x,y,r;
printf("Digite um número inteiro: ");
scanf("%d", &x);
printf("Digite mais um número inteiro: ");
scanf("%d", &y);
r = (x+y);
if (r > 20) {
	printf("O valor é maior que 20, e seu resultado somado +8 é: %d", (r+8));
} else {
	printf("O valor é menor que 20, e seu resultado subtraindo -5 é: %d", (r-5));
}
}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {
	int x;
	printf("Digite um número qualquer: ");
	scanf("%d", &x);
    if (x % 3 == 0) {;
	printf("O número é multiplo de 3/n");
    } else {
		printf("Não é multiplo de 3/n");
	}
}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {
int a; 

printf("Digite um número: ");
scanf("%d", &a);
if (a % 5 == 0) {
	printf("O número digitado é divisível por 5.");
}
else {
	printf("o número não é divisível por 5.");
}
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() {
 int a; 

 printf("Digite um número: ");
 scanf("%d", &a); 

 if (a % 3 == 0 && a % 7 == 0) {
	printf("Esse número digitado é divisível por 3 e 7.");
 }
 else {
	printf("Esse número não é divisível por 3 e 7.");
 }
}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {
float sal, cred;

printf("Digite o valor bruto do seu salário: ");
scanf("%f", &sal);
printf("Digite qual o valor do crédito desejado: ");
scanf("%f", &cred);


if (cred > (sal*0.30)) {
	printf("O valor do crédito excede 30 por cento do salário, portanto, não será permitido o empréstimo!!"); 
} 
else {
	printf("Parabéns!! Você poderá retirar o crédito desejado");
}
}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {
float x;

printf("Digite um número: ");
scanf("%f", &x);
if (x >= 20 && x <= 50) {
	printf("O número digitado está entre 20 e 50");
} else {
	printf("O número digitado não está no intervalo de 30 e 50\n");
}

}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {
float x;

printf("digite um número: ");
scanf("%f", &x);
if(x < 20){
	printf("O número Digitado é menor que 20");
    }else{
    if(x == 20){
	printf("O número Digitado é igual a 20");
	   }else{
		if(x > 20){
	    printf("O número Digitado é maior que 20");
		}
} 
}
}
//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e com o ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {
int ano,idade;

printf("Digite seu ano de nascimento: ");
scanf("%d", &ano);

if(ano >= 1900 && ano <= 2024){
		idade= 2024-ano;
	 printf("A sua idade é %d anos!\n", idade);
	   }else{
		printf("Ano inválido!!\n");
	   }
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10() {
int a,b,c;

printf("Digite 3 números inteiros: ");
scanf("%d %d %d", &a, &b, &c);

if (a > c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    printf("a ordem crescente dos números é: %d %d %d\n", a, b, c);
}


//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {
	int a,b,c, mr;

	printf("Digite 3 números: ");
	scanf("%d %d %d", &a,&b,&c);

    if (a > b && a > c){
		mr = a;
	}
	if(b > a && b > c) {
		mr = b;
	} else {
        mr = c;  
	}
	printf("O maior dos números é: %d", mr);
	}


//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {
int a;

printf("Digite a sua idade: ");
scanf("%d", &a);

if(a < 18) {
	printf("Você é menor de idade!\n");
} else {
	if(a >= 18 && a <= 65){
		printf("Você é maior de idade!\n");
		} else {	
		 if(a > 65){
			printf("Você é maior de 65 anos!\n");
		 }
	}
}
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de um aluno. 
//O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado"
// "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {
	char nome[40];
	float p1,p2,med;

   printf("\nDigite o seu nome: ");
   scanf(" %40[^\n]", nome);
   printf("\nDigite a nota da sua p1: ");
   scanf(" %f", &p1);
   printf("\nDigite a nota da sua p2: ");
   scanf(" %f", &p2);

   med = (p1+p2)/2;

   if (med < 3) {
	printf("Você está aprovado! %s", nome);
   } else {
	if (med >= 3 && med < 7)
	printf("Você está de prova final! %s", nome);}
	if (med >= 7) {
		printf("Você está aprovado! %s", nome);
	}
   }



//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {
	float sal; 

	printf("Digite o valor do seu salário: ");
	scanf(" %f", &sal);
     
	if (sal <= 600) {
    printf("Você está isento de desconto, portanto, salário é: %.2f", sal);
	}else{
	if (sal > 600 && sal <= 1200){
     sal = sal-0.2*sal;
	 printf("O valor do seu salário com desconto é: %.2f", sal);
		}else{
			if (sal > 1200 && sal <= 2000){
			sal = sal-0.25*sal;
			printf("O valor do seu salário com desconto é: %.2f", sal);
		}else{
			sal = sal-0.3*sal;
			printf("O valor do seu salário com desconto é: %.2f", sal);
		}
	}
}
}
//15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor do produto e imprima o valor da venda.
void questao15() {
	float v;

	printf("Digite o valor do produto: ");
	scanf(" %f", &v);

	if (v < 20){
		v=v*1.45;
		printf("O Valor do produto com o lucro de 45 por cento, será: %.2f", v);
	}else{
		v=v*1.30;
		printf("O valor do produto com lucro de 30 por cento, será: %.2f", v);
	}
	}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
/*void questao16() {
	int idade; 

	printf("Digite sua idade: ");
	scanf(" %d", idade);

	if (idade >= 5 && idade <= 7){
		printf("categoria Infantil A!");
	} else {
		if (idade >= 8 && idade <= 10){
		printf("categoria Infantil B!");}
		 else {
		if (idade >= 11 && idade <= 13){
		printf("categoria Juvenil A!");
	} else {
		if (idade >= 14 && idade <= 17){
		printf("categoria Juvenil B!");
	}} else {
		printf("categoria Sênior!");
}*/

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Umvendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void questao17() {
	
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite umnúmero fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.
void questao18() {
	
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
void questao19() {
	
}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldomédio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void questao20() {
	
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {
	
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que umcarro tipo C faz 12 kmcom umlitro de gasolina, um tipo B faz 9 kme o tipo C, 8 kmpor litro.
void questao22() {
	
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//Prato Sobremesa Bebida
//Vegetariano 180cal Abacaxi 75cal Chá 20cal
//Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//Frango 250cal Mousse diet 170cal Suco de melão 100cal
//Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal
void questao23() {

}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dosmotoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe omês em que o emplacamento deve ser renovado.
void questao24() {
	
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais para umpaís do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos. Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um programa que possa imprimir intimações de acordo com o índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos
void questao25() {
	
}

int main() {
	const char menu[1000] = "\n================================\n            PROGRAMAS\n================================\n[1]  - Adição\n[2]  - Adição 2\n[3]  - Múltiplo\n[4]  - Múltiplo 2\n[5]  - Múltiplo 3\n[6]  - Crédito\n[7]  - Intervalo\n[8]  - Menor/Maior\n[9]  - Idade\n[10] - Crescente\n[11] - Maior\n[12] - Idade 2\n[13] - Situação Aluno\n[14] - INSS\n[15] - Valor de Venda\n[16] - Natação\n[17] - Plano de Saúde\n[18] - Mês do Ano\n[19] - Arco e Flecha\n[20] - Crédito Especial\n[21] - Biblioteca\n[22] - Consumo Combustível\n[23] - Calorias\n[24] - Emplacamento\n[25] - Intimação\n================================\n";
	printf("%s",menu);
	int opcao;
	printf("Digite a questão a ser executada: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
		case 3:
			questao03();
			break;
		case 4:
		    questao04();
			break;
		case 5:
			questao05();
			break;	
	    case 6:
			questao06();
			break;
		case 7:
			questao07();
			break;
		case 8:
			questao08();
			break;
		case 9:
		    questao09();
			break;		
		case 10:
			questao10();
			break;
		case 11:
			questao11();
			break;
		case 12:
			questao12();
			break;
		case 13:
			questao13();
			break;
		case 14:
		    questao14();
			break;
		case 15:
			questao15();
			break;	
	    case 16:
			questao16();
			break;
		case 17:
			questao17();
			break;
		case 18:
			questao18();
			break;
		case 19:
		    questao19();
			break;		
		case 20:
			questao20();
			break;
		case 21:
			questao21();
			break;	
	    case 22:
			questao22();
			break;
		case 23:
			questao23();
			break;
		case 24:
			questao24();
			break;
		case 25:
		    questao25();
			break;		
		default:
			printf("Opção inválida!");
	}
	
	return EXIT_SUCCESS;
}