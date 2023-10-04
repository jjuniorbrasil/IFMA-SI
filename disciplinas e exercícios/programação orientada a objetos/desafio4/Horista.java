/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4;

/**
 *
 * @author Júnior
 */
public class Horista extends Professor {
    private double salario;
    
    public Horista () {
    
    }
    
    public Horista (int m, String n, int i) {
        super(m, n, i);
    }
    
    public double retornaSalario(double qtHoras, double vlHoras) {
        this.salario = qtHoras*vlHoras;
        return this.salario;
    }
    
    @Override
    public String toString() {
        return "Professor Horista { matrícula=" + super.getMatricula() + ", nome=" + super.getNome() + ", idade=" + super.getIdade() + ", salario=" + salario + " }";
    }
}
