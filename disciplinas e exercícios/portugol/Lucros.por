programa
{
	
	funcao inicio()
	{
		real vprod
		escreva ("Valor do produto (R$): ")
		leia (vprod)
		limpa()

		se (vprod >= 20) {
			escreva ("R$", vprod*1.3)
			}
		senao {
			escreva ("R$", vprod*1.2)
			}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 220; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */