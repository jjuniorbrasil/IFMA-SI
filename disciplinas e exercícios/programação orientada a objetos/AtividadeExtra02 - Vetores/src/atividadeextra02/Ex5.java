/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividadeextra02;
import java.util.Scanner;

/**
 *
 * @author Júnior
 */
public class Ex5 extends Exercicio {
    int id;
    
    public Ex5() {
        this.id = 5;
    }
    
    @Override
    int getId() {
        return this.id;
    }
    
    @Override
    void Executar() {
        Scanner myScan = new Scanner(System.in);
        int vetor[] = new int[10];
        int l = 0;
        
        System.out.println("\n=========== EXERCÍCIO 5 ==========\n\n"
                + "Informe 10 valores inteiros! (valores menores que '0' serão substituídos por '-1')\n");
        
        for (int c = 0; c<10; c++) {
            System.out.print("Valor " + (c+1) + ": ");
            l = myScan.nextInt();
            
            if (l < 0) 
                vetor[c] = -1;
            else
                vetor[c] = l;
        }
        
        System.out.println("\n-----------------------"
                + "\nVetor informado: ");
        
        for (int c = 0; c < vetor.length - 1; c++)
                {
                    System.out.print(vetor[c] + ", ");
                } 
                    System.out.print(vetor[vetor.length - 1] + ".\n\n"); 
    }
}
