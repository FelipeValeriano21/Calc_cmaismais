#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
  char op; 
	float a,b,c;  
	
	 printf("DIGITE O PRIMEIRO NUMERO:\n");
      scanf("%f", &a);
      
    printf("DIGITE O SEGUNDO NUMERO:\n");
      scanf("%f", &b);
	
	printf("ESCOLHA UMA DAS OPÇÕES:\n");
	printf("1 - SOMAR");
	printf("2 - SUBTRAIR");
	printf("3 - MULTIPLICAR");
	printf("4 - DIVIDIR");
	 scanf("%s", &op);
	
	Switch (op)
{
	Case 1:
	c=a+b;
		printf("c = %d ", c);
	Break;

Case 2:
c=a-b;
printf("c = %d ", c);
	Break;

Case 3:
	c=a*b;
	printf("c = %d ", c);
	Break;
	
Case 4:
c=a/b;
printf("c = %d ", c);
	Break;

default
printf("CODIGO INVALIDO");
}
	
	return 0;
}
