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



public class Exercicio3 {
    int inversor (int n) {
    int u = 0, d = 0, c = 0, m = 0, sum = 0;
    
    u = n/1000;
    d = (n-(u*1000))/100;
    c = (n-(u*1000)-(d*100))/10;
    m = (n-(u*1000)-(d*100)-(c*10));

    sum = u + d*10 + c*100 + m*1000;
    return sum;
    
    }
    
    public static void main (String[] args) {
        Scanner myScan = new Scanner(System.in);
        Exercicio3 metodo = new Exercicio3();
        int n = 0;
        
        System.out.print("Digite a sequência de quatro digitos a ser invertida:");
        n = myScan.nextInt();
        
        if (!(n < 1000) && !(n > 9999)) {
        System.out.println("Sequência invertida: " + metodo.inversor(n)); 
        } else {
        System.out.println("Sequência inválida!");
        }
    }
}
