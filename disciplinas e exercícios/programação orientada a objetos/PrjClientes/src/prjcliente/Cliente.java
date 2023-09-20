package prjcliente;

/**
 *
 * @author Júnior
 */

public class Cliente {
    private int cpf;
    private String nome;
    private String endereco;
    private String dataNascimento;
    private String email;
    private boolean ativo;
    
    public Cliente() {
    this.ativo = false;
    }
    
    // CONSTRUTOR
    
    public Cliente(int cpf, String nome, String endereco, String dataNascimento, String email, boolean ativo) {
        this.cpf = cpf;
        this.nome = nome;
        this.endereco = endereco;
        this.dataNascimento = dataNascimento;
        this.email = email;
        this.ativo = ativo;
    }
    
    // GETTERS

    public int getCpf() {
        return cpf;
    }

    public String getNome() {
        return nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public String getDataNascimento() {
        return dataNascimento;
    }

    public String getEmail() {
        return email;
    }

    public boolean isAtivo() {
        return ativo;
    }
    
    // SETTERS

    public void setCpf(int cpf) {
        this.cpf = cpf;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public void setDataNascimento(String dataNascimento) {
        this.dataNascimento = dataNascimento;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public void setAtivo(boolean ativo) {
        this.ativo = ativo;
    }

    @Override
    public String toString() {
        return "Cliente{" + "cpf = " + cpf + ", nome = " + nome + ",\n endereco = " + endereco + ", dataNascimento = " + dataNascimento + ",\n email = " + email + ", ativo = " + (ativo ? "SIM" : "DESATIVADO") + '}';
    }
    
}
