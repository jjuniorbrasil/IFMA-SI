package exercicios;
import java.util.Scanner;
/**
 *
 * @author José Júnior - Matrícula 20231SI0003 - 2º Período SI
 */
public class Exercicio8 {
    public static void main(String args[]) {
        int x, y, z;
        float l;
        Scanner myScan = new Scanner(System.in);
        
        System.out.print("Latas (350ml) no pedido: ");
        x = myScan.nextInt();
        System.out.print("Garrafas (600ml) no pedido: ");
        y = myScan.nextInt();
        System.out.print("Garrafas (2L) no pedido: ");
        z = myScan.nextInt();
        
        l = (z*2) + (y * 0.6f) + (x*0.35f);
        
        System.out.println("----------------");
        System.out.println("O comerciante 'x' adquiriu " + l + " litros de refrigerante.");
        
    }
}
