#include <stdio.h>

void limparMenu(){
	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

int mostrarMenu(){
	
	int selecao;
		
	printf ("==============================================\n");
	printf ("	   	 SAUDE EM DIAS\n");
	printf ("==============================================\n\n");
	printf ("----------------------MENU----------------------\n");
	printf ("1 - Calcular seu IMC\n");
	printf ("2 - Calcular quantidade de agua a ser consumida\n");
	printf ("0 - Sair\n");
	printf ("------------------------------------------------\n");
	scanf ("%d", &selecao);
	
	return selecao;
	
}

void mostrarIMC (){
	
	float altura, massa, IMC;
	
	limparMenu();
	
	printf ("Informe sua altura (M): ");
	scanf ("%f", &altura);
	printf ("Informe sua massa (Kg): ");
	scanf ("%f", &massa);
	
	IMC = massa / (altura * 2);
    
    printf ("---------------------------\n");
    printf ("	IMC:%.2f\n", IMC);
    
    if (IMC <= 17){
        printf ("	Muito abaixo do peso ideal");
    } else if (IMC >= 17 && IMC <= 18.5){
        printf ("	Abaixo do peso ideal");
    } else if (IMC >= 18.5 && IMC <= 25){
        printf ("	Peso ideal");
    } else if (IMC >= 25 && IMC < 30){
        printf ("	Sobrepeso");
    } else if (IMC >= 30 && IMC < 35){
        printf ("	Obesidade");
    } else if (IMC >= 35){
        printf ("	Obesidade Morbida");
    }
    
    printf ("\n---------------------------\n\n");
		
}

void mostrarQtdAgua (){
	
	float peso, qtdAgua;
	
	limparMenu();
	
	printf ("Informe sua massa (Kg): ");
	scanf ("%f", &peso);
	
	qtdAgua = peso * 35 / 1000;
	
	printf ("A quantidade de agua que voce deve ingerir e de %.2f L\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", qtdAgua);
}

int main (){
	
	int selecao = mostrarMenu();
	
	while (selecao != 0){
		switch (selecao){
		case 1:
			mostrarIMC();
			break;
		case 2:
			mostrarQtdAgua();
			break;
		default:
			return 0;
	}
	
	selecao = mostrarMenu();
	
	}
	
	return 0;
}
