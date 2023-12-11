package exceptions;

public class TransporteInvalido extends Exception {

	@Override
	public String toString() {
		return "Nenhum Transporte foi selecionado";
	}

}
