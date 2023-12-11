package exceptions;

public class EmailInvalido extends Exception{
     private String email;
     
     public EmailInvalido(String email) {
 		super();
 		this.email = email;
 	}

	@Override
	public String toString() {
		return "O email '"+ email+"' é um email inválido";
	}

     
     
}
