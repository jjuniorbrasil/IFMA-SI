package exercicios;
import java.util.Scanner;
/**
 *
 * @author José Júnior - Matrícula 20231SI0003 - 2º Período SI
 */
public class Exercicio5 {
    public static void main(String args[]) {
        int v[] = {0, 0, 0}, m = 0, c = 97; // 'c' existe para caracteres em ASCII
        Scanner myScan = new Scanner(System.in);
        
        for (int x = 0; x < 3; x++) 
        {
            System.out.printf("Leia o valor '%c", (c + x)); System.out.print("': ");
            v[x] = myScan.nextInt();
            
                while (m < v[x])
                {
                m = v[x];
                }
        }
        
        System.out.println("-----------------");
        System.out.println("O maior valor é " + m + ".");
        
        
    }
}
