/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pessoas;

/**
 *
 * @author 20231SI0003
 */
public class TestaPessoa {
    public static void main(String[] args) {
        
        Pessoa p = new Pessoa();
        Aluno a = new Aluno();
        Professor pr = new Professor();
        
        a.setNome("A");
        a.setCpf("100");
        
        a.setCr(100);
        
        a.imprimir();
        
        /*System.out.println(p.toString());
        System.out.println(a.toString());
        System.out.println(pr.toString());*/
    }
}
