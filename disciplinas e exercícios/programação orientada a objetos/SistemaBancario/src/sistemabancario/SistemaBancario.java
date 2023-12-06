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
       
       System.out.println("Saldo da conta 1 (antes das operações): R$" + c1.getSaldo());
       System.out.println("Saldo da conta 2 (antes das operações): R$" + c2.getSaldo());
       
       // Testes
       
       c1.transferir(5034, c2); // Transferência inválida.
       c1.transferir(500, c2);  // Transferência válida.
       
       c1.depositar(0);     // Depósito inválido.
       c1.depositar(213);   // Depósito válido.
       
       System.out.println("Saldo da conta 1 (após operações): R$" + c1.getSaldo());
       System.out.println("Saldo da conta 2 (após operações): R$" + c2.getSaldo());
    }    
}
