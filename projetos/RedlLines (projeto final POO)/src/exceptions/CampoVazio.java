package exceptions;

public class CampoVazio extends Exception{

	String campo;

	public CampoVazio(String campo) {
		this.campo=campo;
	}

	@Override
	public String toString() {
		return "O campo " +campo+" está vazio";
	}

	
}
