package exercicios;
import java.util.Scanner;

/**
 *
 * @author José Júnior - Matrícula 20231SI0003 - 2º Período SI
 */
public class Exercicio2 {
    public static void main(String[] args) {
        int a, m, d;
        float dv;
        
        Scanner myScan = new Scanner(System.in);
        
        System.out.print("Anos vividos: ");
        a = myScan.nextInt();
        System.out.print("Meses vividos: ");
        m = myScan.nextInt();
        System.out.print("Dias vividos: ");
        d = myScan.nextInt();
        
        dv = (a * 365) + (m * 30) + d;
        
        System.out.println("-----------------");
        System.out.println("Total de dias vividos, aproximadamente: " + (int)dv);
    }
}
