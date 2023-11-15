/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividadeextra02;
import java.util.Scanner;

/**
 *
 * @author Júnior
 * Execute e pressione 'ENTER' para avançar.
 */
public class Menu {
    public static void main (String[] args) {
        
        int n = 0;
        int v1[] = {1, 5, 20, -10, 23, 40, 31, -2, -9, 10};
        
        Scanner myScan = new Scanner(System.in);
        Exercicio ex[] = {new Ex1(), new Ex2(v1), 
                            new Ex3(v1), new Ex4()};
        
        do {
            System.out.print("\nExecutar exercício (ESCOLHA de '1 a " + ex.length + "' ou '0' para SAIR): ");
            n = myScan.nextInt();
            
            if (n != 0 && n <= ex.length)
                ex[n - 1].Executar();
            
        } while (n != 0);
        
        System.out.println("\nPrograma encerrado!");
    }
}
