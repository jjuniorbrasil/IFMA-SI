/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pessoas;

/**
 *
 * @author 20231SI0003
 */
public class Aluno extends Pessoa {
     double cr;
     
    public Aluno () {
    
    }
     
    public Aluno (String n, String c, double cr) {
        super(n, c);
        this.cr = cr;
    }
     
    public void imprimir() {
    System.out.println("Nome = " + super.nome);
    System.out.println("CPF = " + super.nome);
    System.out.println("CR = " + this.cr);
    }
    
    public double getCr() {
        return cr;
    }

    public void setCr(double cr) {
        this.cr = cr;
    }

    @Override
    public String toString() {
        return "Aluno{" + "cr=" + cr + '}';
    }
     
}
