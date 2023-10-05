/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4.professores;

/**
 *
 * @author Júnior
 */
public class Seletista extends Professor {
    private double salario = 1000.00;
    
    public Seletista () {
    
    }
    
    public Seletista (int m, String n, int i) {
        super(m, n, i);
    }
    
    public double retornaSalario () {
        return salario;
    }

    @Override
    public String toString() {
        return "Professor Seletista { matrícula=" + super.getMatricula() + ", nome=" + super.getNome() + ", idade=" + super.getIdade() + ", salario=" + salario + " }";
    }
    
}
