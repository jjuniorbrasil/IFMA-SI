package pessoas;

import java.util.Date;

public class Cliente extends Pessoa {
    private static int qtdcontas = 1;
    private int idcliente;
    private String RG;
    private String país;
    private Date dataNascimento;
    private String sexo;
    private String telefone;
    private String email;
    
    public int getIdcliente() {
		return idcliente;
	}

	public void setIdcliente(int idcliente) {
		this.idcliente = idcliente;
	}


	public String getRG() {
		return RG;
	}

	public void setRG(String rG) {
		RG = rG;
	}

	public String getPaís() {
		return país;
	}

	public void setPaís(String país) {
		this.país = país;
	}

	public Date getDataNascimento() {
		return dataNascimento;
	}

	public void setDataNascimento(Date date) {
		this.dataNascimento = date;
	}

	public String getSexo() {
		return sexo;
	}

	public void setSexo(String sexo) {
		this.sexo = sexo;
	}

	public String getTelefone() {
		return telefone;
	}

	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public Cliente (String cpf, String nome) {
        super();
        super.setCpf(cpf);
        super.setNome(nome);
        idcliente = qtdcontas++;
    }
    
    public int id() {
        return this.idcliente;
    }

	@Override
	public String toString() {
		return  "Nome: "+super.getNome()+" | CPF: " +super.getCpf() + " | RG: " + RG + " \nPaís: " + país + 
				" | Data de nascimento: " + dataNascimento.getDate()+"/"+dataNascimento.getMonth()+"/"+dataNascimento.getYear()
				+ "\nSexo: " + sexo + " | Telefone: " + telefone + " | E-mail: " + email + "\n"
				+"---------------------------------------------------------------------------------------------------------------------------";
	}
}
