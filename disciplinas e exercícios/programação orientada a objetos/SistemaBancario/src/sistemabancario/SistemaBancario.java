/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package sistemabancario;

/**
 *
 * @author Júnior
 */
public class SistemaBancario {
    public static void main(String[] args) {
       Conta c1 = new Conta(500);
       Conta c2 = new Conta(1500);
       
       System.out.println("a");
       
        try {
            c2.Transferir(1500.0, c1);
        } catch (TransferenciaInvalida e) {
            System.out.println("Erro ao transferir: " + e.getMessage());
        }
        
      System.out.println(c2.getSaldo());
    }    
}
