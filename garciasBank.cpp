#include <stdio.h>
#include <time.h>

void limparMenu (){
	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void mostrarData(){
	struct tm *data_hora_atual;
	
	time_t segundos;
	
	time(&segundos);
	
	data_hora_atual = localtime (&segundos);
	
	printf("\n%d:",data_hora_atual->tm_hour);   
	printf("%d:",data_hora_atual->tm_min);
	printf("%d\n",data_hora_atual->tm_sec);
	printf("%d/", data_hora_atual->tm_mday);
	printf("%d/",data_hora_atual->tm_mon+1);
	printf("%d\n\n",data_hora_atual->tm_year+1900);
	
}

int mostrarMenu (){
	
	int selecao;
	
	printf ("----------------------------------\n");
	printf ("        GARCIA'S BANK S.A");
	printf ("\n----------------------------------\n");
	printf (":::::::::::::::MENU:::::::::::::::\n");
	printf ("1 - Deposito");
	printf ("\n2 - Saque");
	printf ("\n3 - Saldo");
	printf ("\n0 - Sair\n");
	mostrarData();
	scanf ("%d", &selecao);
	
	return selecao;
	
}

static float saldo;

void deposito (){
	
	float quantiaDepositada;
	
	limparMenu();
	
	printf ("Informe a quantia que deseja depositar: R$");
	scanf ("%f", &quantiaDepositada);
	
	if (quantiaDepositada <= 0){
		printf ("Deposite uma quantia valida!!");
	} else {
		saldo = saldo + quantiaDepositada;
		printf ("\n\n\n\n\n\n\n\n\n\n------------------------------\n");
		printf ("Deposito realizado com sucesso!");
		printf ("\n------------------------------\n\n\n\n\n\n\n\n\n");
	}	
	
}

void saque (){
	
	float sacarQuantia;
	
	limparMenu();
	
	printf ("Informe a quantia que deseja sacar: R$");
	scanf ("%f", &sacarQuantia);
	
	limparMenu();
	
	if (sacarQuantia > saldo){
		printf ("------------------------------\n");
		printf ("    Saldo insuficiente!!");
		printf ("\n------------------------------\n\n\n\n\n\n\n\n\n");
	} else {
		saldo = saldo - sacarQuantia;
		printf ("------------------------------\n");
		printf ("Saque realizado com sucesso!!\n");
		printf ("Saldo disponivel R$%.2f", saldo);
		printf ("\n------------------------------\n\n\n\n\n\n\n\n\n");
	}
}

int main (){
	
	int selecao = mostrarMenu();
	
	while (selecao != 0){
		switch (selecao){
		case 1:
			deposito();
			break;
		case 2:
			saque();
			break;
		case 3:
			printf ("\n\n\n\n\n\n\n\n\n\n\n\n---------------------------------\n");
			printf ("Seu saldo atual e de R$ %.2f", saldo);
			printf ("\n---------------------------------\n\n\n\n\n\n\n\n\n");
			break;
		default:
			return 0;
	}
	
	selecao = mostrarMenu();
	
	}
	
	return 0;
	
}
