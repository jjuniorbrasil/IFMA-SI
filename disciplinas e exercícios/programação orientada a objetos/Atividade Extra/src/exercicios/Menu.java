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
                System.out.println("X^2 " + x*x + " Y^2 = " + y*y);
            } else {
                System.out.println("X^3  ou  Y^3 = " + y*x*y);
            }
        }

        public void ex2() {
            int x;
            
            System.out.print("Escolha um mês [1-12]:");
            
            x = myScan.nextInt();
            
            switch (x) {
                case 1:
                    System.out.println("Janeiro");
                    break;
                    
                case 2:
                    System.out.println("Fevereiro");
                    break;
                    
                case 3:
                    System.out.println("Março");
                    break;
                
                case 4:
                    System.out.println("Abril");
                    break;
                    
                case 5:
                    System.out.println("Maio");
                    break;
                    
                case 6:
                    System.out.println("Junho");
                    break;
                    
                case 7:
                    System.out.println("Julho");
                    break;
                    
                case 8:
                    System.out.println("Agosto");
                    break;
                    
                case 9:
                    System.out.println("Setembro");
                    break;
                    
                case 10:
                    System.out.println("Outubro");
                    break;
                    
                case 11:
                    System.out.println("Novembro");
                    break;
                    
                case 12:
                    System.out.println("Dezembro");
                    break;
                    
                default:
                    break;
            }
        }
        
        public void ex3() {
            int x;
            System.out.println("Digite um número a ser divisível por 3 ou 5: ");
            x = myScan.nextInt();
            
            if (x%3 == 0 && x%5 == 0) {
                System.out.println("É divisível pelos dois, simultaneamente.");
            } else if (x%3 == 0) {
                System.out.println("É divisível por 3.");
            } else if (x%5 == 0) {
                System.out.println("É divisível por 5.");
            } else {
                System.out.println("Não é divisível por nenhum dos dois.");
            }
        }
        
        public void ex4() {
            int x = 0;
            System.out.print("Informe a idade do jogador: ");
            x = myScan.nextInt();
            
            if (x >= 5 && x < 8) {
                System.out.println("Infantil A");
            } else if (x >= 8 && x < 11) {
                System.out.println("Infantil B");
            } else if (x >= 11 && x < 14) {
                System.out.println("Juvenil A");
            } else if (x >= 14 && x < 17) {
                System.out.println("Juvenil B");
            } else {
                System.out.println("Não pertence a nenhuma categoria disponível.");
            }
        }
        
        public void ex5() {
           Exercicio5 ex5 = new Exercicio5();
           ex5.dividePorVencedor(780000);
        }
        
        public void ex6() {
            int x = 0, p = 0, i = 0;
            
            for (int y = 0; y < 10; y++) {
                System.out.print("Leia o número " + (y+1) + ": ");
                x = myScan.nextInt();
                if (x % 2 == 0) {
                    p++;
                } else {
                    i++;
                }
            }
            
        System.out.println("Pares :" + p + ""
                + "\nÍmpares: " + i);
        }
        
        public void ex7() {
            System.out.print("Informe o número para a sequência de inteiros decrescente: ");
            int x = myScan.nextInt();
            
            for (int y = x; y > 0; y--) {
                System.out.print(y + ", ");
            }
            
        System.out.print("0.\n");
        }
        
        public void ex8() {
            int qtd = 0, p = 0, s = 0, m = 0, mai = 0, men = 999999999, x = 1;
            boolean state = true;
            
            for (int q = 0; state; q++) {
                System.out.printf("Leia um número [%d]:", q+1);
                x = myScan.nextInt();
                if (x != 0) {
                    s = s + x;
                    if (x % 2 == 0) p++;
                    if (x > mai) mai = x;
                    if (x < men) men = x;
                    qtd++;
                } else {
                    state = false;
                }
            }
            
            m = s/qtd;
            
            System.out.println(   "\nNÚMEROS LIDOS: " + qtd + ""
                                + "\nPARES: " + p +
                                  "\nSOMATÓRIA: " + s + ""
                                + "\nMÉDIA: " + m + ""
                                + "\nMAIOR: " + mai + " MENOR: " + men);
        }
        
        public void ex9() {
            int i = 0, s = 0;
            System.out.print("Leia o limite inferior: ");
            i = myScan.nextInt();
            System.out.print("Leia o limite superior: ");
            s = myScan.nextInt();
            
            if (i < s) {
                
                for (int y = i; y < s; y++) 
                    {
                        System.out.print(y + ", ");
                    }
                System.out.print(s + ".\n");
                
            } else if (i == s) {
                
                System.out.print(s + ".\n");
                
            } else {
               
                for (int y = i; y > s; y--) 
                    {
                        System.out.print(y + ", ");
                    }
                System.out.print(s + ".\n");
                
            }
        }
        
        public void ex10() {
            int n = 0, vmt = 0;
            double t = 0, mt = 99999999, mtv = 0;
            
            System.out.print("\nLeia o número de voltas do piloto: ");
            n = myScan.nextInt();
            
            for (int y = 0; y < n; y++) {
                System.out.printf("Tempo da volta %d (s): ", y+1);
                t = myScan.nextDouble();
                mtv += t;
                
                if (t < mt) {
                    mt = t;
                    vmt = y+1;
                }
                
            }
            
            mtv = mtv/n;
            
            System.out.println("\n\nMELHOR TEMPO: " + mt
                    + "\nVOLTA DO MELHOR TEMPO: " + vmt
                    + "\nTEMPO MÉDIO DAS VOLTAS: " + mtv + "\n");
        }
}
