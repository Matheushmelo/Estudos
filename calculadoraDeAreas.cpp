#include <stdio.h>
#include <math.h>

void limparMenu(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

int mostrarMenu (){
	
	int selecao;
	
	printf(":::::::::: CALCULADORA DE AREAS ::::::::::");
	printf("\n------------------ MENU ------------------");
	printf("\n1 - Calcular area Cone");
	printf("\n2 - Calcular area Cilindro");
	printf("\n3 - Calcular area Esfera");
	printf("\n4 - Calcular area Triangulo");
	printf("\n5 - Calcular area Retangulo");
	printf("\n6 - Calcular area Quadrado");
	printf("\n7 - Calcular area Circulo");
	printf("\n0 - Sair");
	printf("\n------------------------------------------\n");
	scanf("%d", &selecao);
	
	return selecao;
	
}

void mostrarAreaCone(){
	
	float raio, altura, geratriz, pi, areaTotal;
	pi = 3.1415;
	
	limparMenu();
	
	printf("\nInforme a altura do cone (cm): ");
	scanf("%f", &altura);
	printf("\nInforme o raio do cone (cm): ");
	scanf("%f", &raio);
	
	geratriz = pow(altura, 2) + pow(raio, 2);
	
	areaTotal = pi * raio * (geratriz + raio);
	
	printf("\n----------------------------------");
	printf("\nAREA CONE: %.2f cm/quadrados", areaTotal);
	printf("\n----------------------------------");
	
	limparMenu();
}

void mostrarAreaCilindro(){
	
	float raio, altura, areaTotal, pi;
	
	pi = 3.1415;
	
	limparMenu();
	
	printf ("\nInforme o raio do cilindro (m):");
	scanf ("%f", &raio);
	printf ("\nInforme a altura do cilindro (m):");
	scanf ("%f", &altura);
	
	areaTotal = (2 * pi) * pow(raio, 2) + 2 * pi * raio * altura;
	
	printf("\n-----------------------------------");
	printf("\nAREA CILINDRO: %.2f cm/quadrados", areaTotal);
	printf("\n-----------------------------------");
	
	limparMenu();
	
}

void mostrarAreaEsfera(){
	
	float raio, pi, areaTotal;
	pi = 3.1415;
	
	limparMenu();
	
	printf("Informe o raio da esfera (cm):");
	scanf("%f", &raio);
	
	areaTotal = 4 * pi * pow(raio, 2);
	
	printf("\n----------------------------------");
	printf("\nAREA ESFERA: %.2f cm/quadrados", areaTotal);
	printf("\n----------------------------------");
	
	limparMenu();
	
}

void mostrarAreaTriangulo(){
	
	float base, altura, areaTotal;
	
	limparMenu();
	
	printf("Informe o tamanho da base do triangulo (cm):");
	scanf("%f", &base);
	printf("\nInforme altura do triangulo (cm):");
	scanf("%f", &altura);
	
	areaTotal = (base * altura) / 2;
	
	printf("\n-----------------------------------");
	printf("\nAREA TRIANGULO: %.2f cm/quadrados", areaTotal);
	printf("\n-----------------------------------");
	
	limparMenu();
	
}

void mostrarAreaRetangulo(){
	
	float base, altura, areaTotal;
	
	limparMenu();
	
	printf("\nInforme o tamanho da base do retangulo (cm):");
	scanf("%f", &base);
	printf("\nInforme a altura do retangulo (cm):");
	scanf("%f", &altura);
	
	areaTotal = base * altura;
	
	printf("\n-----------------------------------");
	printf("\nAREA RETANGULO: %.2f cm/quadrados", areaTotal);
	printf("\n-----------------------------------");
	
	limparMenu();
	
}

void mostrarAreaQuadrado(){
	
	float lado, areaTotal;
	
	limparMenu();
	
	printf("\nInforme o tamanho do lado do quadrado (cm):");
	scanf("%f", &lado);
	
	areaTotal = lado * lado;
	
	printf("\n----------------------------------");
	printf("\nAREA QUADRADO: %.2f cm/quadrados", areaTotal);
	printf("\n----------------------------------");
	
	limparMenu();
	
}

void mostrarAreaCirculo(){
	
	float pi, raio, areaTotal;
	pi = 3.1415;
	
	limparMenu();
	
	printf("\nInforme o raio do circulo (cm):");
	scanf("%f", &raio);
	
	areaTotal = pi * pow(raio, 2);
	
	printf("\n----------------------------------");
	printf("\nAREA CIRCULO: %.2f cm/quadrados", areaTotal);
	printf("\n----------------------------------");
	
	limparMenu();
	
}

int main(){
	
	int selecao = mostrarMenu();
	
	while (selecao != 0){
		switch (selecao){
			case 1:
				mostrarAreaCone();
				break;
			case 2:
				mostrarAreaCilindro();
				break;
			case 3:
				mostrarAreaEsfera();
				break;
			case 4:
				mostrarAreaTriangulo();
				break;
			case 5:
				mostrarAreaRetangulo();
				break;
			case 6:
				mostrarAreaQuadrado();
				break;
			case 7:
				mostrarAreaCirculo();
				break;
			default:
				return 0;
		}
		
		selecao = mostrarMenu();
		
	}
	
	return 0;
	
}
