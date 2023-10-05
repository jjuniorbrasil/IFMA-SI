/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4.funcionarios;
import java.util.Scanner;

/**
 *
 * @author 20231SI0003
 */
public class TestaFuncionario {
    public static void main (String args[]) {
        
        Scanner myScan = new Scanner(System.in);
        Gerente g = new Gerente();
        int c = 0;
        
        g.setSenha(123456);
        
        while (c < 3) { 
            System.out.print("Insira a senha gerencial: ");
                if (g.autentica(myScan.nextInt())) {
                    System.out.println("Usuário autenticado.");
                    break;
                } else {
                    System.out.println("Senha incorreta!");
                    c++;
                        if (c == 3) 
                        {
                            System.out.println("Número de tentativas excedido! Encerrando programa.");
                        }
                }
        }
        
    }
}
