package exercicios;
import java.util.Scanner;
/**
 *
 * @author José Júnior - Matrícula 20231SI0003 - 2º Período SI
 */
public class Exercicio4 {
    public static void main (String args[]) {
    float c;
    Scanner myScan = new Scanner(System.in);
    
    System.out.print("Custo de produção do veículo: R$");
    c = myScan.nextFloat();
    
    System.out.println("-----------------");
    System.out.println("Custo final ao consumidor: R$" + (c + c*0.28 + c*0.45));
    }
}
