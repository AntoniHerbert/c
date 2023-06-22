#include <stdio.h>
#include <math.h>
#include <string.h>

void questao2(){
  int numero;
  printf("digite um número");
  scanf("%i",&numero);

  printf("numero hexadecimal:%x",numero);
  printf("numero octal:%o",numero);
}

void questao3(){
  float numero;
  printf("insira um numero real");
  scanf("%f", &numero);
  printf("%0.1f",numero);
}

void questao4(){
  int numero;
  printf("insira um numero inteiro");
  scanf("%d",&numero);
  printf("%d\n",numero*3);
  printf("%d\n",numero*numero);
  printf("%d\n",numero/2);
}

void questao5(){
  int valorBruto;
  printf("infome o valor da conta");
  scanf("%d", &valorBruto);
  int valorLiquido = valorBruto + valorBruto*0.1;
  printf("%d", valorLiquido);
}

void questao6(){
  float altura;
  char sexo = "";
  printf("informe a altura");
  scanf("%f", &altura);
  printf("informe o sexo M/F");
  scanf("%c", &sexo);
  if(strcmp(sexo, "M")){
    printf("%f",(72.7*altura-58));
  }else{
    printf("%f",(62.1*altura-44.7));
  }
}

void questao7(){
  int horas, minutos, segundos;
  printf("informe uma quantidade de horas");
  scanf("%d", &horas);
  printf("minutos");
  scanf("%d", &minutos);
  printf("segundos");
  scanf("%d", &segundos);
  int tempo = segundos + (minutos*60)+ (horas*60*60);
  printf("segundos:%d", tempo);
}

void questao8 (){
  int valor;
  printf("escreva um valor inteiro");
  scanf("%d", &valor);
  printf("%d", valor * valor);
}

void questao9(){
  int numero;
  printf("insira um número");
  scanf("%d", &numero);
  printf("%d, %d", numero -1, numero+1);
}

void questao10(){
  int comprimento;
  int largura;
  int altura;
  printf("insira o comprimento, a largura e a altura");
  scanf("%d", &comprimento);
  scanf("%d", &largura);
  scanf("%d", &altura);
  printf("%d", comprimento*altura*largura);
}

void questao11(){
  float cotacaoDoDolar;
  float quantidadeDeReais;
  printf("forneça a cotação do dolar");
  scanf("%f", &cotacaoDoDolar);
  printf("quantos dolares deseja comprar?");
  scanf("%f", &quantidadeDeReais);
  printf("%f reais valem %f dólares",quantidadeDeReais, quantidadeDeReais/cotacaoDoDolar);  
}

void questao12(){
  int numero1;
  int numero2;
  printf("escreva dois números");
  scanf("%d", &numero1);
  scanf("%d", &numero2);
  printf("soma:%d", numero1+numero2);
  printf("produto:%d", numero1*numero2);
  printf("diferença:%d", numero1-numero2);
  printf("quociente:%f", numero1*1.0/numero2*1.0);
  printf("resto:%f", numero1 % numero2);
}

void questao13(){
  int variavel1;
  int variavel2;
  int c;
  printf("insira duas variáveis");
  scanf("%d %d", &variavel1,&variavel2);
    c= variavel1;
  variavel1 = variavel2;
  variavel2 = c;
  printf("%d,%d", variavel1,variavel2);
}

void questao14(){
  float temperaturaEmCelsius;
  printf("escreva a temperatura em celsius");
  scanf("%f", &temperaturaEmCelsius);
  printf("a temperatura em graus fahrenheit é:%f",(9*temperaturaEmCelsius+160)/5);
}

void questao15(){
  int numeroDeDiasTrabalhados;
  float salario;
  float salarioComImposto;
  float salarioLiquido;
  salario = 50.25 * numeroDeDiasTrabalhados;
  salarioComImposto -= salario * 0.1;
  if(numeroDeDiasTrabalhados < 10 ){
    salarioLiquido = salarioComImposto;
    
  }else if (numeroDeDiasTrabalhados <= 20){
    salarioLiquido = salarioComImposto + salarioComImposto * 0.2;
  }else {
    salarioLiquido = salarioComImposto + salarioComImposto *0.3;
  }
  printf("%f", salarioLiquido);
}

void questao16(){
  float valorHora;
  int numeroDeHorasTrabalhadas;
  float percentualDeContibuicaoDoINSS;
  printf("informe o numero de horas trabalhadas");
  scanf("%d", &numeroDeHorasTrabalhadas);
  printf("informe o valor da hora");
  scanf("%f", &valorHora);
  printf("informe o percentual de contribuiçao do INSS");
  scanf("%f", &percentualDeContibuicaoDoINSS);
  float salarioLiquido = (numeroDeHorasTrabalhadas * valorHora) - (percentualDeContibuicaoDoINSS/100.0) * (numeroDeHorasTrabalhadas * valorHora);
  printf("%f", salarioLiquido);
}

void questao17(){
  int numero;
  printf("insira um valor inteiro");
  scanf("%d",&numero);
  printf("%d",abs(numero));
}

void questao18(){
  float raioDoCirculo;
  printf("insira o raio do círculo");
  scanf("%f", &raioDoCirculo);
  printf("a área do circulo é: %f", 3.14159 * (raioDoCirculo * raioDoCirculo));
  printf("a cicunferência do círculo é: %f", 2*3.14159*raioDoCirculo);
}

void questao19(){
  
}

void questao20(){
  
}
void questao21(){
  
}

void questao22(){
  
}

void questao23(){
  int numero;
  printf("informe um numero");
  scanf("%d",&numero);

char str[100];
int i = 0;

sprintf(str,"%d",numero);

for(int b = strlen(str);b>=i;b--)
 printf("%c ",str[b]);
}

void questao24(){
 
}

void questao25(){
  int segundos;
  printf("insira um valor em segundos");
  scanf("%d", &segundos);
  int horas = segundos / 3600;
  int minutos = segundos - (horas*3600);
  segundos = segundos - (horas*3600+minutos*60);
  printf("horas: %d, minutos: %d, segundos: %d", horas, minutos,segundos);
}

void questao26(){
  int x1;
  int y1;
  int x2;
  int y2;
  printf("insira as coordenadas do primeiro ponto");
  scanf("%d", x1);
  scanf("%d", y1);
  printf("insira as coordenadas do segundo ponto");
  scanf("%d", x2);
  scanf("%d", y2);
  printf("o resultado da distancia dos dois pontos é: %d", sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
}

void questao27(){
  float numero1;
  float numero2;
  float numero3;
  printf("insira 3 numeros");
  scanf("%f", numero1);
  scanf("%f", numero2);
  scanf("%f", numero3);
  printf("a média aritimetica dos 3 números é: %f", (numero1+numero2+numero3)/3);
  printf("a média geometrica dos 3 números é: %f", cbrt(numero1*numero2*numero3));
}

int main(void) {
  questao7();
  
}