/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4.professores;

/**
 *
 * @author Júnior
 */
public class Professor {
    private int matricula;
    private String nome;
    private int idade;
    
    public Professor () {
    
    }
    
    public Professor (int m, String n, int i) {
        this.matricula = m;
        this.nome = n;
        this.idade = i;
    }
    
    public void setMatricula(int m) {
        this.matricula = m;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public int getMatricula() {
        return matricula;
    }
    
}
