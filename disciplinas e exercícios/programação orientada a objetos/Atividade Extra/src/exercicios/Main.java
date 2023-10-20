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
        boolean state = true;
        
        System.out.print("Atividade Extra - 19/10/23"
                        + "Aluno: J. Júnior"
                        + "\nSelecione o exercício [1-10]: ");
        
        n = myScan.nextInt();
        
        while (state == true) {
            
            if (n > 0 && n < 11) state = false;
            
            switch (n) {
                    case 1:
                        m.ex1();
                    break;

                    case 2:
                        m.ex2();
                    break;

                    case 3:
                        m.ex3();
                    break;

                    case 4:
                        m.ex4();
                    break;

                    case 5:
                        m.ex5();
                    break;

                    case 6:
                        m.ex6();
                    break;

                    case 7:
                        m.ex7();
                    break;

                    case 8:
                        m.ex8();
                    break;

                    case 9:
                        m.ex9();
                    break;
                    
                    case 10:
                        m.ex10();
                    break;

                    default:
                       System.out.print("Opção inválida. Escolha novamente: ");
                       n = myScan.nextInt();
                    break;
                }
        }
    }
}