#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa em C que o usu�rio entre com o numero, 
//e ser� verificado se o numero � primo ou n�o?

int main()
{
	int numero, primo=0, i;
	
	printf("digite um numero\n");
	scanf("%d",&numero);	
	
	for (i=2;i<=numero/2;i++)
	{
	if (numero % i == 0)
	 {
       primo++;

 	 }
 	 }
 
	if (primo == 0){
    printf("o numero e primo\n");
 	 }
	else{
    printf("o numero nao e primo\n");
	
}
 return 0;
}  


 
    
