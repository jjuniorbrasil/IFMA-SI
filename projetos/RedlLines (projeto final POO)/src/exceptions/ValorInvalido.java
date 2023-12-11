package exceptions;

public class ValorInvalido extends Exception {
	
  private double valor;
	
	public ValorInvalido(double valor) {
	super();
	this.valor = valor;
}

	@Override
	public String toString() {
		return "O valor '"+valor+"' que foi digitado no preço é inválido ";
	}
  
}
