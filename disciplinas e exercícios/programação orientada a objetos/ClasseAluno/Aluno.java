/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */
package teste;

/**
 *
 * @author 20231SI0003
 */

public class Aluno {

    private String nome;
    private int idade;
    
    public Aluno(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }
    
    public Aluno(String nome) {
        this.nome = nome;
    }
    
    public Aluno(int idade) {
        this.idade = idade;
    }
 
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }

    @Override
    public String toString() {
        return "Aluno{" + "nome=" + nome + ", idade=" + idade + '}';
    }
        
    public void imprime() {
        System.out.println("Nome: "+this.nome
                + "\nIdade: "+this.idade);
    }

    public void imprime(String n) {
        System.out.println("Nome: " + n);
    }

    public void imprime(int id) {
        System.out.println("Idade: " + id);
    }
}
