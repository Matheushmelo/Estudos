#include <stdio.h>
#include <math.h>

static float saldoFundos;

static float valorDividendos;

static float saldoTesouroPre;

static float saldoTesouroSelic;

static float saldoTesouroIPCA;

static float rendTesouroPre;

static float rendTesouroSelic;

static float rendTesouroIPCA;

static int selecaoMenuFundos;

static int selecaoMenuPrincipal;

static int selecaoMenuTesouro;

void limparMenu(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void limparMenuMenor(){
	printf("\n\n\n\n\n\n\n");
}

void mostrarPrimeiroFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 77.57, dividendos = 0.57;
	
	limparMenu();
	
	printf("=============== PATL11 ===============\n");
	printf("|Preco - R$%.2f                     |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
	
	limparMenu();
	
	printf("---------------------------------------------------\n");
	printf("Compra de %d cota(s) de PATL11 realizada com sucesso\n", cotas);
	printf("---------------------------------------------------");
	
	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;
		
}

void mostrarSegundoFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 47.05, dividendos = 0.40;
	
	limparMenu();
	
	printf("=============== QAGR11 ===============\n");
	printf("|Preco - R$%.2f                     |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
	
	limparMenu();
	
	printf("---------------------------------------------------\n");
	printf("Compra de %d cota(s) de QAGR11 realizada com sucesso\n", cotas);
	printf("---------------------------------------------------");

	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;	
	
}

void mostrarTerceiroFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 54.29, dividendos = 0.55;
	
	limparMenu();
	
	printf("=============== XPPR11 ===============\n");
	printf("|Preco - R$%.2f                     |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
	
	limparMenu();
	
	printf("---------------------------------------------------\n");
	printf("Compra de %d cota(s) de XPPR11 realizada com sucesso\n", cotas);
	printf("---------------------------------------------------");
	
	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;
		
}

void mostrarQuartoFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 66.15, dividendos = 0.70;
	
	limparMenu();
	
	printf("=============== MORE11 ===============\n");
	printf("|Preco - R$%.2f                     |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
	
	limparMenu();
	
	printf("---------------------------------------------------\n");
	printf("Compra de %d cota(s) de MORE11 realizada com sucesso\n", cotas);
	printf("---------------------------------------------------");
	
	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;
		
}

void mostrarQuintoFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 108.19, dividendos = 0.5;
	
	limparMenu();
	
	printf("=============== BCRI11 ===============\n");
	printf("|Preco - R$%.2f                    |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
	
	limparMenu();
	
	printf("---------------------------------------------------\n");
	printf("Compra de %d cota(s) de BCRI11 realizada com sucesso\n", cotas);
	printf("---------------------------------------------------");
	
	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;
		
}

void mostrarSextoFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 98.77, dividendos = 1.22;
	
	limparMenu();
	
	printf("=============== CVBI11 ===============\n");
	printf("|Preco - R$%.2f                     |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
		
	limparMenu();
	
	printf("---------------------------------------------------\n");
	printf("Compra de %d cota(s) de CVBI11 realizada com sucesso\n", cotas);
	printf("---------------------------------------------------");
	
	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;
		
}

void mostrarSetimoFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 1809.96, dividendos = 25.65;
	
	limparMenu();
	
	printf("=============== BBFI11B ===============\n");
	printf("|Preco - R$%.2f                    |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("=======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
	
	limparMenu();
	
	printf("----------------------------------------------------\n");
	printf("Compra de %d cota(s) de BBFI11B realizada com sucesso\n", cotas);
	printf("----------------------------------------------------");
	
	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;
	
}

void mostrarOitavoFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 93,69, dividendos = 0.8;
	
	limparMenu();
	
	printf("=============== NEWL11 ===============\n");
	printf("|Preco - R$%.2f                     |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
	
	limparMenu();
	
	printf("---------------------------------------------------\n");
	printf("Compra de %d cota(s) de NEWL11 realizada com sucesso\n", cotas);
	printf("---------------------------------------------------");
	
	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;
	
}

void mostrarNonoFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 57.49, dividendos = 0.6;
	
	limparMenu();
	
	printf("=============== RECT11 ===============\n");
	printf("|Preco - R$%.2f                     |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
	
	limparMenu();
	
	printf("---------------------------------------------------\n");
	printf("Compra de %d cota(s) de RECT11 realizada com sucesso\n", cotas);
	printf("---------------------------------------------------");
	
	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;
	
}

void mostrarDecimoFundo(){
	
	int cotas;
	float valor, dividendos;
	valor = 40.47, dividendos = 0.35;
	
	limparMenu();
	
	printf("=============== RBCO11 ===============\n");
	printf("|Preco - R$%.2f                     |\n", valor);
	printf("|Dividendos - R$%.2f                 |\n", dividendos);
	printf("======================================\n");
	printf("Quantidade de cotas:");
	scanf("%d", &cotas);
	
	limparMenu();
	
	printf("---------------------------------------------------\n");
	printf("Compra de %d cota(s) de RBCO11 realizada com sucesso\n", cotas);
	printf("---------------------------------------------------");
	
	saldoFundos += cotas * valor;
	
	valorDividendos += cotas * dividendos;
	
}

void mostrarTesouroPre(){
	
	float rentabilidade = 0.008, valor = 100;
	int cotas;
	
	limparMenuMenor();
	
	printf("=============== TESOURO PREFIXADO 2025 ===============\n");
	printf("|Rentabilidade - %.3f a.m                            |\n", rentabilidade);
	printf("|Investimenro minimo - R$ %.2f                     |\n", valor);
	printf("|Vencimento - 01/01/2025                             |\n");
	printf("======================================================\n");
	printf("Informe a quantidade de cotas: ");
	scanf("%d", &cotas);
	
	if (cotas <= 0 ){
	
		limparMenuMenor();
		
		printf("Informe uma quantidade valida!\n");
	
	} else {
	
		limparMenuMenor();
	
		printf("---------------------------------------------------\n");
		printf("Compra de %d cota(s) de Tesouro Prefixado realizada\n", cotas);
		printf("---------------------------------------------------");
		
		saldoTesouroPre += cotas * valor;
		
		rendTesouroPre += saldoTesouroPre * rentabilidade;

	}
	
}

void mostrarTesouroSelic(){
	
	float rentabilidade = 0.01, valor = 200;
	int cotas;
	
	limparMenuMenor();
	
	printf("=============== TESOURO SELIC 2025 ===============\n");
	printf("|Rentabilidade - %.3f a.m                        |\n", rentabilidade);
	printf("|Investimenro minimo - R$ %.2f                 |\n", valor);
	printf("|Vencimento - 01/01/2025                         |\n");
	printf("==================================================\n");
	printf("Informe a quantidade de cotas: ");
	scanf("%d", &cotas);
	
	if (cotas <= 0 ){
	
		limparMenuMenor();
		
		printf("Informe uma quantidade valida!\n");
	
	} else {
	
		limparMenuMenor();
	
		printf("---------------------------------------------------\n");
		printf("Compra de %d cotas de Tesouro Selic realizada\n", cotas);
		printf("---------------------------------------------------");
		
		saldoTesouroSelic += cotas * valor;
		
		rendTesouroSelic += saldoTesouroSelic * rentabilidade;

	}
}

void mostrarTesouroIPCA(){
	
	float rentabilidade = 0.005, valor = 150;
	int cotas;
	
	limparMenuMenor();
	
	printf("=============== TESOURO IPCA 2025 ===============\n");
	printf("|Rentabilidade - %.3f a.m                       |\n", rentabilidade);
	printf("|Investimenro minimo - R$ %.2f                |\n", valor);
	printf("|Vencimento - 01/01/2026                        |\n");
	printf("=================================================\n");
	printf("Informe a quantidade de cotas: ");
	scanf("%d", &cotas);
	
	if (cotas <= 0 ){
	
		limparMenuMenor();
		
		printf("Informe uma quantidade valida!\n");
	
	} else {
	
		limparMenuMenor();
	
		printf("---------------------------------------------------\n");
		printf("Compra de %d cotas de Tesouro Prefixado realizada\n", cotas);
		printf("---------------------------------------------------");
		
		saldoTesouroIPCA += cotas * valor;
		
		rendTesouroIPCA += saldoTesouroIPCA * rentabilidade;

	}
}

int mostrarMenuPrincipal(){
	
	int selecaoMenuPrincipal;
	
	printf("==============================================\n");
	printf("|                GARCIA'S INVEST             |\n");
	printf("==================== MENU ====================\n");
	printf("[1] Fundos Imobiliarios\n");
	printf("[2] Tesouro Direto\n");
	printf("[8] Saldo\n");
	printf("[9] Rendimentos\n");
	printf("[0] Sair\n");
	scanf("%d", &selecaoMenuPrincipal);
	
	limparMenu();
	
	return selecaoMenuPrincipal;
	
}

int mostrarMenuFundos(){
	
	int selecaoMenuFundos;
	
	limparMenuMenor();
	
	printf("===============================================\n");
	printf("|              FUNDOS IMOBILIARIOS            |\n");
	printf("========Selecione o Fundo para investir========\n");
	printf("[1] PATL11\n");
	printf("[2] QAGR11\n");
	printf("[3] XPPR11\n");
	printf("[4] MORE11\n");
	printf("[5] BCRI11\n");
	printf("[6] CVBI11\n");
	printf("[7] BBFI11B\n");
	printf("[8] NEWL11\n");
	printf("[9] RECT11\n");
	printf("[10] RBCO11\n");
	printf("[11] Saldo\n");
	printf("[12] Rendimentos\n");
	printf("[0] Menu Principal\n");
	scanf("%d", &selecaoMenuFundos);
	
	limparMenuMenor();
	
	return selecaoMenuFundos;
	
}

int mostrarMenuTesouro(){
	
	int selecaoMenuTesouro;
	
	limparMenuMenor();
	
	printf("===============================================\n");
	printf("|              TESOURO DIRETO                 |\n");
	printf("===============================================\n");
	printf("[1] Tesouro Prefixado\n");
	printf("[2] Tesouro Selic\n");
	printf("[3] Tesouro IPCA\n");
	printf("[8] Saldo\n");
	printf("[9] Rendimentos\n");
	printf("[0] Menu Principal\n");
	scanf("%d", &selecaoMenuTesouro);
	
	limparMenuMenor();
	
	return selecaoMenuTesouro;
}

int mostrarSwitchFundos(){
	
	selecaoMenuFundos = mostrarMenuFundos();
			while (selecaoMenuFundos != 0){
				switch (selecaoMenuFundos){
					case 1:
						mostrarPrimeiroFundo();
						break;
					case 2:
						mostrarSegundoFundo();
						break;
					case 3:
						mostrarTerceiroFundo();
						break;
					case 4:
						mostrarQuartoFundo();
						break;
					case 5:
						mostrarQuintoFundo();
						break;
					case 6:
						mostrarSextoFundo();
						break;
					case 7:
						mostrarSetimoFundo();
						break;
					case 8:
						mostrarOitavoFundo();
						break;
					case 9:
						mostrarNonoFundo();
						break;
					case 10:
						mostrarDecimoFundo();
						break;
					case 11:
						printf("============= CARTEIRA DE FUNDOS ===============\n");
						printf("                  R$%.2f\n", saldoFundos);
						printf("================================================\n");
						break;
					case 12:
						printf("============== RENDIMENTOS ===============\n");
						printf("   Voce recebera R$%.2f de dividendos\n", valorDividendos);
						printf("==========================================\n");
						break;
					default:
						return 0;
				}
				
				selecaoMenuFundos = mostrarMenuFundos();
				selecaoMenuPrincipal = -1;
			}
}

int mostrarSwitchTesouro(){
	
	selecaoMenuTesouro = mostrarMenuTesouro();
			while(selecaoMenuTesouro != 0){
				switch(selecaoMenuTesouro){
					case 1:
						mostrarTesouroPre();
						break;
					case 2:
						mostrarTesouroSelic();
						break;
					case 3: 
						mostrarTesouroIPCA();
						break;
					case 8:
						printf("============= CARTEIRA DE TESOURO ===============\n");
						printf("                  R$%.2f\n", saldoTesouroPre + saldoTesouroSelic + saldoTesouroIPCA);
						printf("=================================================\n");
						break;
					case 9:
						printf("============== RENDIMENTOS ===============\n");
						printf("   Sua rentabilidade sera de R$ %.2f\n", rendTesouroPre + rendTesouroSelic + rendTesouroIPCA);
						printf("==========================================\n");
						break;
					default:
						return 0;
				}
				
				selecaoMenuTesouro = mostrarMenuTesouro();
				selecaoMenuPrincipal = -1;
				
			}
}

int main(){
	
	int selecaoMenuPrincipal = mostrarMenuPrincipal();
	int selecaoMenuTesouro = -2;
	int selecaoMenuFundos = -1;
		
	while (selecaoMenuPrincipal != 0){
		switch (selecaoMenuPrincipal){
		case 1:
			mostrarSwitchFundos();
			break;
		case 2:
			mostrarSwitchTesouro();
			break;
		case 8:
			printf("============= CARTEIRA DE INVESTIMENTOS ===============\n");
			printf("                      R$%.2f\n", saldoFundos + saldoTesouroPre + saldoTesouroSelic + saldoTesouroIPCA);
			printf("=======================================================\n");
			limparMenuMenor();
			break;
		case 9:
			printf("============== RENDIMENTOS ===============\n");
			printf("   Sua rentabilidade sera de R$ %.2f\n", rendTesouroPre + rendTesouroSelic + rendTesouroIPCA + valorDividendos);
			printf("==========================================\n");
			limparMenuMenor();
			break;
		default:
			return 0;
		}
		selecaoMenuPrincipal = mostrarMenuPrincipal();
	}
}
