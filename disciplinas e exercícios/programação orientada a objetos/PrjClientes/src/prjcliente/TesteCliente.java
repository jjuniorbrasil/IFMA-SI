/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package prjcliente;

/**
 *
 * @author J. Júnior - 20231SI0003
 */

public class TesteCliente {
    public static void main(String args[]) {
    Cliente c1 = new Cliente(999999999, "Carlos", "Rua 18 de Setembro, 25", "01/01/1990", "carlos@email.com", false);
    System.out.println(c1.toString());
    }
}
