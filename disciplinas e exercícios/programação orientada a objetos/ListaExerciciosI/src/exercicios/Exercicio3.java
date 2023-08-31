package exercicios;
import java.util.Scanner;

/**
 *
 * @author José Júnior - Matrícula 20231SI0003 - 2º Período SI
 */
public class Exercicio3 {
    public static void main(String[] args){
    
    int p = 3;
    float n[] = {0, 0, 0}, m = 0;
    Scanner myScan = new Scanner(System.in);
    
    for (int x = 0; x < 3; x++) 
    {
        System.out.print("Digite a nota '" + (x+1) + "': ");
        n[x] = myScan.nextFloat();
        m = m + (n[x]*p);
        p = p + 2;
    }
    
    System.out.println("-----------------");
    System.out.println("A média do aluno é: " + m/15); 
    
    }
}
