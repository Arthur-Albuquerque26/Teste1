/******************************************************************************
                    Trabalho de Computacao eletronica
     					Calculadora Geometrica
*******************************************************************************/

#include <stdio.h>
#define PI 3.14

int main () {
    
//codigo sera o numero correspondente a figura desejda (de 1 a 6). Iria utilizar a funcao "char", mas para evitar erros como selecionar 60 e o computador ler 6, optei pelo short int.
//Como para todas as figuras temos uma medida que multiplica outra, para diminuir variaveis, simplifiquei tudo para lado e altura. (exceto o trapezio, que precisa de duas bases, logo deixei como lado e base 1).
    
    short codigo;
    float lado;
    float altura;
    float base1;
    float area;
    int loop = 1; // Variavel para ser usada na funcao "While". 1 = verdadeiro, 0 = falso.
    int repetir = 1; //Variavel para repetir em caso de meidida<=0. 1 = verdadeiro, 0 = falso
    
    printf("Bem-vindo a calculadora de areas!");
    
    //While para pedir que o usuario adicione um novo codigo apos digitar uma opcao invalida.
    while (loop == 1) {
	
    printf("\nDigite o codigo da figura desejada conforme abaixo:");
    printf("\n1 - Circulo.");
    printf("\n2 - Quadrado.");
    printf("\n3 - Retangulo.");
    printf("\n4 - Triangulo.");
    printf("\n5 - Losango.");
    printf("\n6 - Trapezio.\n\n");
    scanf ("%d", &codigo);
    
    switch (codigo) {
        
        case 1:
         loop = 0;
         while (repetir == 1){ //chave do while "repetir"
		 
         printf("\nVoce selecionou o circulo :), otima escolha!\n");
         printf("Insira a medida do raio do circulo:\n");
         scanf("%f", &lado);
        
         if (lado <= 0) {
         	printf("\nNao e possivel calcular a area de um circulo com o raio menor que ou igual a 0. Tente novamente.\n");
         	repetir = 1;//alguma medida é <=0, logo o programa pede uma medida novamente
			} else {
			
			 
         area = PI*lado*lado;
         printf ("\nA area do circulo de raio %.2f vale: %.2f unidades de area.", lado, area);
         printf ("\nA matematica eh linda! ;)");
         repetir = 0;} //as medidas sao todas positivas, logo o programa finaliza normalmente
          }//chave do while "repetir"
         break;
        
        case 2:
         loop = 0;
         while (repetir == 1) { //chave do while "repetir"
		 
         printf("\nVoce selecionou o quadrado :), boa escolha!\n");
         printf("Insira a medida do lado do quadrado:\n");
         scanf("%f", &lado);
         
         if (lado <= 0) {
         	printf("\nNao e possivel calcular a area de um quadrado com uma das medidas menor que ou igual a 0. Tente novamente.\n");
         	repetir = 1; //alguma medida é <=0, logo o programa pede uma medida novamente
			 } else {
			 
			 
         area = lado*lado;
         printf("\nA area do quadrado de lado %.2f vale: %.2f unidades de area.", lado, area);
         printf ("\nA matematica eh linda! ;)");
         repetir = 0;} //as medidas sao todas positivas, logo o programa finaliza normalmente
         } //chave do while "repetir"
         break; 
        
        case 3:
         loop = 0;
         while (repetir == 1){ //chave do while "repetir"
		 
         printf("\nVoce selecionou o retangulo, que escolha!!\n");
         printf("Insira as medidas da base e da altura do retangulo:\n");
         scanf("%f %f", &lado, &altura);
         
         if (lado <= 0 || altura <= 0) {
         	printf("\nNao e possivel calcular a area de um retangulo com uma das medidas menor que ou igual a 0. Tente novamente.\n");
         	repetir = 1; //alguma medida é <=0, logo o programa pede uma medida novamente
			 } else {
			 
			 
         area = lado*altura;
         printf("\nA area do retangulo de lado %.2f e altura %.2f vale: %.2f unidades de area.", lado, altura, area);
         printf ("\nA matematica eh linda! ;)");
         repetir = 0;} //as medidas sao todas positivas, logo o programa finaliza normalmente
         } //chave do while "repetir"
         break;
        
        case 4:
         loop = 0;
         while (repetir == 1) { //chave do while "repetir"
		 
         printf("\nVoce selecionou o triangulo, seria otimo conhecer Pitagoras!\n");
         printf("Insira as medidas da base e da altura do triangulo:\n");
         scanf ("%f %f", &lado, &altura);
         
         if (lado <= 0 || altura <= 0) {
         	printf("\nNao e possivel calcular a area de um triangulo com uma das medidas menor que ou igual a 0. Tente novamente.\n");
         	repetir = 1; //alguma medida é <=0, logo o programa pede uma medida novamente
			 } else {
			 
			 
         area = lado*altura/2.0;
         printf("\nA area do triangulo de base %.2f e altura %.2f vale: %.2f unidades de area.", lado, altura, area);
         printf ("\nA matematica eh linda! ;) ");
         repetir = 0; } //as medidas sao todas positivas, logo o programa finaliza normalmente
         } //chave do while "repetir"
         break;
        
        
        case 5:
         loop = 0;
         while (repetir == 1){ //chave do while "repetir"
		 
    	 printf("\nVoce selecionou o losango, quem em pleno seculo XXI faria isso??\n");
         printf("Insira as medidas das diagonais do losango:\n");
         scanf ("%f %f", &lado, &altura);
         
         if (lado <= 0 || altura <= 0) {
         	printf("\nNao e possivel calcular a area de um losango com uma das medidas menor que ou igual a 0. Tente novamente.\n");
         	repetir = 1; //alguma medida é <=0, logo o programa pede uma medida novamente
			 } else {
			 
			 
         area = lado*altura/2.0;
         printf("\nA area do losango de diagonais %.2f e %.2f vale: %.2f unidades de area.", lado, altura, area);
         printf ("\nA matematica eh linda! ;)");
		 repetir = 0;} //as medidas sao todas positivas, logo o programa finaliza normalmente
         } //chave do while "repetir"
         break;
        
        
        case 6 :
         loop = 0;
         while (repetir == 1){ // chave do while "repetir"
         
         printf("\nVoce selecionou o trapezio... existem figuras melhores...\n");
         printf("Insira as medidas das bases e da altura:.\n");
         printf("OBS: fique atento quanto a ordem das medidas. Insira na ordem pedida: base 1, base 2 e entao altura.\n");
         scanf("%f %f %f", &base1, &lado, &altura);
         
         if (base1 <= 0 || lado <= 0 || altura <= 0) {
         	printf("\nNao e possivel calcular a area de um trapezio com uma das medidas menor que ou igual a 0. Tente novamente.\n");
			 repetir = 1; //alguma medida é <=0, logo o programa pede uma medida novamente
			 } else {
			 
		
          area = (base1 + lado)*altura/2.0;
          printf("\nA area do trapezio de bases %.2f e %.2f e altura %.2f vale: %.2f unidades de area.", base1, lado, altura , area);
          printf ("\nA matematica eh linda! ;)");
          repetir = 0;} //as medidas sao todas positivas, logo o programa finaliza normalmente
         } //chave do while "repetir"
         break;
        
        default:
         printf("\nOpcao invalida! Selecione o codigo somente de 1 a 6.");
         loop = 1;
    }//chave do switch  
    
 } //chave do while "loop"
    return 0 ;

}//chave do int main

