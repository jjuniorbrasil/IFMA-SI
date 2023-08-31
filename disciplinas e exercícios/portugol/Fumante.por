// Aluno: José Carlos Chaves Brasil Júnior
// 1º Período de Sistemas de Informação - IFMA - Monte Castelo
//
// Escreva um algoritmo em Portugol para calcular a redução do tempo de vida de um fumante. 
// Pergunte a quantidade de cigarros fumados por dia e quantos anos ele já fumou. 
// Considere que um fumante perde 7 minutos de vida a cada cigarro, calcule quantos dias de vida um fumante perderá. 
// Exiba o total em dias.

programa
{
	
	funcao inicio()
	{
		inteiro cpd, perddi, perdh
		real anosf, tempred, perdd

		escreva ("================ Calcule o seu tempo reduzido de vida de acordo com: ===================:\n\n")
		escreva ("Quantos cigarros fuma por dia?\n")
		leia (cpd)
		escreva ("\nFuma há quantos anos?\n")
		leia (anosf)
		limpa()
		
			tempred = ((anosf * 365) * (cpd)) * 7				// 'Tempo reduzido' em minutos
			perdd = tempred/3600							// Tempo convertido para dias (real)
			perddi = tempred/3600							// Tempo convertido para dias (inteiro)
			perdh = (perdd - perddi) * 24						// Complemento

		escreva ("Tempo de vida reduzido em: ")
			
			se (perddi != 0) {
			escreva (perddi, " dias")
				se (perdh != 0) {
					escreva (" e ")
					}
				}
			se (perdh != 0) {
			escreva (perdh, " horas")	
				}
				
		escreva (".\n")	

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 42; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */