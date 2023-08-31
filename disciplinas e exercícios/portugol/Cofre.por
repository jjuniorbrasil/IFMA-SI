programa
{
	funcao inicio()
	{
		inteiro op, d, s, df
		real saldo	
		caracter reset	
		saldo = 1
		escreva("============ COFRE DO JOÃOZINHO ===========\n\n") 					// ESCOLHER OPERAÇÃO
		escreva("               Escolha entre:                \n")
		escreva("\n")
		escreva("[1] Depositar moeda\n")
		escreva("[2] Sacar moeda\n")
		escreva("[ENTER] para sair.\n")
		escreva("\n")
		escreva("                     Saldo(R$):", saldo,"\n\n")
		escreva("===========================================\n")
		leia(op)
		limpa()
			se (op == 1) {				// DEPÓSITO
				escreva("============ DEPOSTIAR MOEDA ===========\n\n")
				escreva("               Escolha uma moeda:                \n")
				escreva("\n")
				escreva("[1] 5 centavos\n")
				escreva("[2] 10 centavos\n")
			     escreva("[3] 25 centavos\n")
				escreva("[4] 50 centavos\n")
				escreva("[5] 1 real\n\n")
				escreva("[6] Sair da operação\n")
				escreva("\n")
				escreva("                       Saldo(R$):", saldo,"\n\n")
				escreva("==========================================\n\n")
				leia (d)
				limpa()
					se (d == 1) { 		// DEPOSITAR 5 CENTAVOS
					saldo = saldo + 0.05	
					escreva("MOEDA DEPOSITADA:\n")
					escreva("5 centavos\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
					se (d == 2) { 		// DEPOSITAR 10 CENTAVOS
					saldo = saldo + 0.10	
					escreva("MOEDA DEPOSITADA:\n")
					escreva("10 centavos\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
					se (d == 3) { 		// DEPOSITAR 25 CENTAVOS
					saldo = saldo + 0.25	
					escreva("MOEDA DEPOSITADA:\n")
					escreva("25 centavos\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
					se (d == 4) { 		// DEPOSITAR 50 CENTAVOS
					saldo = saldo + 0.50	
					escreva("MOEDA DEPOSITADA:\n")
					escreva("50 centavos\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
					se (d == 5) { 		// DEPOSITAR 1 REAL
					saldo = saldo + 1	
					escreva("MOEDA DEPOSITADA:\n")
					escreva("1 real\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
					se (d == 6) {		// SAIR DA OPERAÇÃO DEPÓSITO
					escreva("FINALIZANDO PROGRAMA")
					escreva("Obrigado!")
						}
					senao {    		   // OPERAÇÃO INVÁLIDA
						escreva ("OPERAÇÃO INVÁLIDA")
						}	 							 	 	 
				}
			se (op == 2) {				// SAQUE
				se (saldo == 0) {		  // VOCÊ NÃO TEM MOEDAS
					escreva ("Você não tem moedas.")
					}
				senao {
					escreva("============ SACAR MOEDA ===========\n\n")
					escreva("               Escolha uma moeda:                \n")
					escreva("\n")
					escreva("[1] 5 centavos\n")
					escreva("[2] 10 centavos\n")
			   		escreva("[3] 25 centavos\n")
					escreva("[4] 50 centavos\n")
					escreva("[5] 1 real\n\n")
					escreva("[6] Sair da operação\n")
					escreva("\n")
					escreva("                       Saldo(R$):", saldo,"\n\n")
					escreva("==========================================\n\n")
					leia (s)
					limpa()
						se (s == 1) {  // SACAR 5 CENTAVOS
					saldo = saldo - 0.05	
					escreva("SAQUE EFETUADO:\n")
					escreva("5 centavos\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
						se (s == 2) { 	// SACAR 10 CENTAVOS
					saldo = saldo - 0.10	
					escreva("SAQUE EFETUADO:\n")
					escreva("10 centavos\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
						se (s == 3) {  // SACAR 25 CENTAVOS
					saldo = saldo - 0.25	
					escreva("SAQUE EFETUADO:\n")
					escreva("25 centavos\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
						se (s == 4) {  // SACAR 50 CENTAVOS
					saldo = saldo - 0.50	
					escreva("SAQUE EFETUADO:\n")
					escreva("50 centavos\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
						se (s == 5) {  // SACAR 1 REAL
					saldo = saldo - 1	
					escreva("SAQUE EFETUADO:\n")
					escreva("1 real\n\n")
					escreva("Novo saldo (R$): ", saldo)
						}
						se (s == 6) {	// FINALIZAR OPERAÇÃO
					escreva("FINALIZANDO PROGRAMA")
					escreva("Obrigado!")
						}
						senao 	{    // OPERAÇÃO INVÁLIDA
						escreva ("OPERAÇÃO INVÁLIDA")
						}	 							 	 	 
				}	
					}	
			senao {					// FINALIZAR PARA "op" sendo um número inteiro
			escreva ("Obrigado por usar o Cofre(TM).")
				}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 164; 
 * @DOBRAMENTO-CODIGO = [34, 40, 46, 52, 58, 64, 68, 19, 73, 91, 97, 103, 109, 115, 121, 125, 76, 72, 130];
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */