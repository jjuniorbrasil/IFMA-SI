package exercicios;
import java.util.Scanner;
/**
 *
 * @author José Júnior - Matrícula 20231SI0003 - 2º Período SI
 */
public class Exercicio6 {
    public static void main(String args[]) {
    float s, sa, sf;
    Scanner myScan = new Scanner(System.in);
    
    System.out.print("Leia o salário do funcionário 'x': ");
    s = myScan.nextFloat();
    sa = (s*1.2f);
    sf = (sa*0.925f);
    
    System.out.println("-----------------");
    System.out.println("\nO salário do funcionário 'x' é de: R$" + s);
    System.out.println("Salário com aumento de 20%: R$" + sa);
    System.out.println("Saláfio líquido (desconto de 7,5% de impostos): R$" + sf);
    }
    
}
