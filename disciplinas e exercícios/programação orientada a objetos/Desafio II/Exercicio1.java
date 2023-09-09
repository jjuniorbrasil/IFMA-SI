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

class Calculadora {
            
        double soma(double x, double y) {
            return x+y;
        }
        
        double subtracao(double x, double y) {
            return x-y;
        }
        
        double produto(double x, double y) {
            return x*y;
        }
        
        double divisao(double x, double y) {
            return x/y;
        }
        
        double restodivisao(double x, double y) {
            return x%y;
        }
        
        
    }
public class Exercicio1 {

    public static void main(String[] args) {
    Scanner myScan = new Scanner(System.in);
    Calculadora calc = new Calculadora();
    System.out.print("===================\n"
                   + "CALCULADORA\n"
                   + "===================\n"
            + "[1] SOMAR\n"
            + "[2] SUBTRAIR\n"
            + "[3] MULTIPLICAR\n"
            + "[4] DIVIDIR\n"
            + "[5] RESTO DA DIVISÃO\n"
            + "===================\n\n"
            + "Escolha a opção: ");
    
    int c = myScan.nextInt();
    double x, y, res;
    String[] op = {"Soma de 'x' e 'y': ", "Subtração entre 'x' e 'y': ", "Multiplicar 'x' e 'y': ", "Dividir 'x' por 'y': ", "Resto da divisão de 'x' por 'y': "};
    System.out.println("Leia 'x' e 'y': ");
    x = myScan.nextDouble(); 
    y = myScan.nextDouble();
    
    switch (c) {
        case 1:
        res = calc.soma(x, y);
        System.out.println(op[0] + res);
        break;
        
        case 2:
        res = calc.subtracao(x, y);
        System.out.println(op[1] + res);
        break;
        
        case 3:
        res = calc.produto(x, y);
        System.out.println(op[2] + res);
        break;
        
        case 4:
        res = calc.divisao(x, y);
        System.out.println(op[3] + res);
        break;
        
        case 5:
        res = calc.restodivisao(x, y);
        System.out.println(op[4] + res);
        break;
        
        default:
        System.out.println("Opção inválida!");    
        break;
    }
    
    
    }
}
