programa
{
	
	funcao inicio()
	{
		inteiro N, cont, div, resto
		N = 0
		cont = 0
		div = 0

		enquanto (N <= 100) {

			enquanto (cont <= 100) {
				resto = N%cont
				se (resto = 0) {
					
					div = div + 1
					}
					
					se (div > 2) {
						escreva (N, " não é primo!")
						} senao {
						escreva (N, " é primo!")	
							}
					
				cont++
				}

			N++
			}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 183; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */