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
public class Exercicio4 {
    void converterSegundos(int s) {
    int h, m;
    
    h = s/3600;
    m = (s%3600)/60;
    s = ((s%3600))%60;
    
    System.out.println(h + "hr::" + m + "min::" + s + "seg");
    }
    
    public static void main (String args[]) {
        
    Exercicio4 metodo = new Exercicio4();
    Scanner myScan = new Scanner(System.in);
    
    System.out.println("Informe os segundos a serem convertidos: ");
    metodo.converterSegundos(myScan.nextInt());
    }
}
