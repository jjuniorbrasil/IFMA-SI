package exercicios;
import java.util.Scanner;
/**
 *
 * @author José Júnior - Matrícula 20231SI0003 - 2º Período SI
 */
public class Exercicio7 {
    public static void main(String args[]) {
    float conta, c, a, f;
    int contai;
    Scanner myScan = new Scanner(System.in);
    
    System.out.print("Valor da conta: R$");
    conta = myScan.nextFloat();
    contai = (int)conta;
    a = contai/3;
    f = contai/3;
    c = conta - f - a;
    
    System.out.println("----------------");
    System.out.println("Carlos pagará R$" + c);
    System.out.println("André pagará R$" + a);
    System.out.println("Felipe pagará R$" + f);
    
    
    }
    
}
