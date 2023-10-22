/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bancario;

/**
 *
 * @author Júnior
 */
public class TestePoliformismo {
    public static void main(String[] args) {
        Gerente g = new Gerente();
        Funcionario f = g;
        Telefonista t = new Telefonista();
        ControleDePonto c = new ControleDePonto();      
        
        f.setNome("Júlio");
        t.setNome("Amanda");
        g.setNome("Novo nome");
        
        c.registraEntrada(f);
        c.registraEntrada(t);
        
        c.registraSaida(g);
        c.registraSaida(f);
    }
}
