/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafios;
import java.util.Scanner;

/**
 *
 * @author Júnior
 */

class Binario {
    int linhaBinario(String l) {
        int x = 0;
        
        System.out.printf("%d", l);
        
        return x;
    }
}

public class Exercicio2 {
    public static void main(String[] args) {
    
    int res;
    Binario bin = new Binario();
    Scanner myScan = new Scanner(System.in);
    System.out.print("Informe uma sequência de 4 bits: ");
    String l = myScan.nextLine();
    
    System.out.print("A linha '" + l + "' convertida é: " + bin.linhaBinario(l));
        
    }
}
