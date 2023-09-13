/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package clientes;

/**
 *
 * @author 20231SI0003
 */
public class TestaCliente {
    public static void main(String args[]) {
    Cliente c1 = new Cliente();
    c1.nome = "Júnior";
    c1.codigo = 1;
    c1.imprimir();
    
    Cliente c2 = new Cliente();
    c2.nome = "João";
    c2.codigo = 2;
    c2.imprimir();
    
    /*System.out.println(c1.nome);
    System.out.println(c1.codigo);
    
    System.out.println(c2.nome);
    System.out.println(c2.codigo);*/
    }
}
