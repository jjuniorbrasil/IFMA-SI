package exercicios;
import java.util.Scanner;

/**
 *
 * @author José Júnior - Matrícula 20231SI0003 - 2º Período SI
 */
public class Exercicio1 {
    public static void main(String[] args) {
        float a, b, c, d, r, s;
        Scanner myScan = new Scanner(System.in);
        
        System.out.print("Leia o valor 'A': ");
        a = myScan.nextFloat();
        System.out.print("Leia o valor 'B': ");
        b = myScan.nextFloat();
        System.out.print("Leia o valor 'C': ");
        c = myScan.nextFloat();
       
        r = (a + b)*(a + b);
        s = (b + c)*(b + c);
        
        d = (r+s)/2;
        
        System.out.println("-----------------");
        System.out.println("O resultado é: " + d);
    }
}
