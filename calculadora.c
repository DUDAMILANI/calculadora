#include <stdio.h>
#include <stdlib.h>
int main(){
//Variaveis
     float num1,num2,total;
     int escolha;
do{ //inicio do loop
  system("clear"); //Limpar a tela toda vez que voltar 
  
printf("\t\t\tCalculadora\n\n");
  //Escolhas dos numeros
printf("Escolha o primeiro numero:");
  scanf("%f",&num1);

printf("Escolha o segundo numero:");
  scanf("%f",&num2);
  
  //Escolhas dos calculos 
printf("\n\n\t\t\tOperaçoes:\n\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair");
printf("\n\nDigite qual operação deseja realizar:");
  scanf("%d",&escolha);
if (escolha == 0) {
 // Para encerra o programa se o usuario escolher 0. Sair
      break;
    } else if (escolha < 1 || escolha > 4) {
      // Para verifica se a opção é valida
printf("opcao invalida! Por favor escolha uma opção valida\n\n");
      continue; // Retorna ao inicio do loop
    }

  //Calulos 
switch(escolha){
  case 1:
    total=num1+num2;
  printf("\nResultado:\n %.2f+%.2f=%.2f",num1,num2,total);
   break;

  case 2:
    total=num1-num2;
  printf("\nResultado: \n%.2f-%.2f=%.2f",num1,num2,total);
   break;
  
  case 3:
    total=num1*num2;
  printf("\nResultado:\n %.2f*%.2f=%.2f",num1,num2,total);
   break;
  
  case 4:
    total=num1/num2;
  printf("\nResultado:\n %.2f/%.2f=%.2f",num1,num2,total);
   break;
}
  printf("\n\nDigite 1 para voltar ou 0 para sair:");
    scanf("%d", &escolha);
  }while (escolha != 0); //retorno ao loop
  return 0;
}