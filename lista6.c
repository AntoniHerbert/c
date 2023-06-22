#include <stdio.h>

void questao1(){
  struct Aluno
  {
    int nota1;
    int nota2;
  };

    struct Aluno ze;

  printf("informe a primeira nota do aluno");
  scanf("%d", &ze.nota1);
  printf("informe a segunda nota do aluno");
  scanf("informe a segunda nota do aluno");
  scanf("%d", &ze.nota2);

  printf("a média do aluno é: %d", (ze.nota1 + ze.nota2)/2);
}

void questao2(){
  struct Estoque
  {
    char* nomePeca;
    int numero;
    float preco;
    int numeroPedido;
  };

  struct Estoque estoque;
  estoque.nomePeca = "iodas";
  estoque.numero = 7100;
  estoque.preco = 7.21;
  estoque.numeroPedido = 12100;

  printf("%s \n %d\n %f\n %d\n", estoque.nomePeca, estoque.numero, estoque.preco, estoque.numeroPedido);


}

void questao3(){
  
}

void questao4(){
  
}

void questao5(){
  
}

int main(void) {
  questao2();

}