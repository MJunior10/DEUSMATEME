/*Você foi convidado a fazer um pequeno trabalho para seu professor de matemática. O trabalho é ler uma expressão matemática 
no formato de dois números racionais (numerador/denominador) e apresentar o resultado da operação. Cada operando ou operador é separado por 
um espaço em branco. A sequência de entrada (cada linha) deve respeitar o seguinte formato: número, ('/' char), número, operação char ('/', '*', '+', '-'),
 número, ('/' caractere), número. A resposta deve ser apresentada seguida do operador '=' e a resposta simplificada. Se a resposta não puder ser simplificada,
  deve ser repetida após um operador '='.

Considerando N1 e D1 como numerador e denominador da primeira fração, siga a orientação de como fazer cada uma dessas 4 operações:

Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: ( N1/D1) / (N2/D2), que significa (N1*D2)/(N2*D1)

Entrada
A entrada contém vários casos de teste. O primeiro valor é um inteiro N (1 = N = 1*10 4 ), indicando a quantidade de casos de teste que devem ser lidos. 
Cada caso de teste contém um valor racional X (1 = X = 1000), uma operação (-, +, * ou /) e outro valor racional Y (1 = Y = 1000).
Resultado
A saída deve ser um número racional, seguido de um sinal “=“ e outro número racional, que é a simplificação do primeiro valor. 
Caso o primeiro valor não possa ser simplificado, o mesmo valor deve ser repetido após o sinal '='.*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int soma(int *N1, int *D1, int *N2, int *D2, float *N){
    int result,num,den,i;
    for(i=0; i<N; i++)
    {
    		num = N1 * D2 + N2 * D1;
    		den = D1 * D2;
   	  	result = num / den;
    		return result;
		}
}

int subtracao(int *N1, int *D1, int *N2, int *D2, float *N){
int result,num,den,i;
	for(i=0; i<N; i++)
	{
    num = N1 * D2 - N2 * D1;
    den = D1 * D2;
    result = num / den;
    return result;
  }
}
int multiplicacao(int *N1, int *D1, int *N2, int *D2, float *N){
int result,num,den,i;
for(i=0; i<N; i++)
{

    num = N1 * N2;
    den = D1 * D2;
    result = num / den;
    return result;
  }
}
int divisao(int *N1, int *D1, int *N2, int *D2, float *N){
int result,num,den,i;
	for(i=0; i<N; i++){
    num = N1 * D2;
    den = N2 * D1;
    result = num / den;
    return result;
  }
}



int main(){
    
    int *N1, *D1, *N2, *D2, resultMain;
    float *N;
    char OP;
    scanf("&d",&N);
   	scanf("&s",&OP);
    scanf("&d",&N1);
    scanf("&d",&D1);
    scanf("&d",&N2);
    scanf("&d",&D2);
    if(*N>= 1 && N<=1*pow(*N,4))
    {
        if(*N1>= 1 && *N1<=1000 && *D1>= 1 && *D1<=1000 && *N2>= 1 && *N2<=1000 && *D2>= 1 && *D2<=1000  )
        {
         switch(OP)
        {
            case '+':
               resultMain = soma(N1, D1, N2, D2,N);
                break;
            case '-':
               resultMain = subtracao(N1, D1, N2, D2,N);
                break;
            case '*':
              resultMain =  multiplicacao(N1, D1, N2, D2,N);
                break;
            case '/':
              resultMain =  divisao(N1, D1, N2, D2,N);
                break;
        }
        }
    }
}