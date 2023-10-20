/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicios;
import java.util.Scanner;

/**
 *
 * @author Júnior
 */
public class Main {
    public static void main(String[] args) {
        Scanner myScan = new Scanner(System.in);
        Menu m = new Menu();
        int n = 0;
        
        System.out.print("Atividade Extra - 19/10/23"
                      + "\nSelecione o exercício [1-10]: ");
        
        n = myScan.nextInt();
        
        switch (n) {
            case 1:
                m.ex1();
            break;
        
            case 2:
                m.ex2();
            break;
            
            default:
                
            break;
        }
    }
}