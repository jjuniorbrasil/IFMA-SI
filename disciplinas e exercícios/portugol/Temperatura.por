programa
{
	
	funcao inicio()
	{
		real temp
		escreva ("Temperatura (ºC): ")
		leia (temp)
		limpa()

		se (temp < 15) {
			escreva ("Muito frio!")
			}
			senao {
					se (temp >= 15 e temp < 23) {
						escreva ("Frio")
						}
							senao {
									se (temp >= 23 e temp <26) {
										escreva ("Normal")
										}
											senao {
													se (temp >= 26 e temp < 30) {
													escreva ("Calor")
														}
															senao {
																escreva ("Muito calor, fio")
																}
						}	
				}
			}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 119; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */