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
public class Menu {
    Scanner myScan = new Scanner(System.in);
    
        public void ex1() {
            int x, y;
            System.out.print("Digite o valor de x: ");
            x = myScan.nextInt();
            System.out.print("Digite o valor de y: ");
            y = myScan.nextInt();
            
            if (x != y) {
                System.out.println("X^2 ou Y^2 = " + x*y);
            } else {
                System.out.println("X^3 = " + x*x*x + " Y^3 = " + y*y*y);
            }
        }

        public void ex2() {
            int x;
            x = myScan.nextInt();
            
            switch (x) {
                case 1:
                    break;
                    
                case 2:
                    break;
                    
                case 3:
                    break;
                
                case 4:
                    break;
                    
                case 5:
                    break;
                    
                case 6:
                    break;
                    
                case 7:
                    break;
                    
                case 8:
                    break;
                    
                case 9:
                    break;
                    
                case 10:
                    break;
                    
                case 11:
                    break;
                    
                case 12:
                    break;
                    
                default:
                    break;
            }
        }
}
