/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividadeextra02;
import java.util.Random;

/**
 *
 * @author Júnior
 */
public class Ex6 extends Exercicio {
    int id;
    
    public Ex6() {
        this.id = 6;
    }
    
    @Override
    int getId() {
        return this.id;
    }
    
    @Override
    void Executar() {
        Random rand = new Random();
        int limite = 100, qtPar = 0, qtImpar = 0;
        int vetor[] = new int[10];
        
        System.out.println("\n========= EXERCÍCIO 6 =========\n"
                + "\nAnalisando o vetor: ");
        
        for (int c = 0; c < 9; c++) {
            vetor[c] = rand.nextInt(limite);
                if (vetor[c] % 2 == 0)
                    qtPar++;
                else
                    qtImpar++;
            System.out.print(vetor[c] + ", ");
        }   vetor[9] = rand.nextInt(limite);
                if (vetor[9] % 2 == 0) qtPar++; else qtImpar++;
            System.out.print(vetor[9] + ".");
        
        System.out.println("\n-------------------------\n"
                + "Quantidade de pares: " + qtPar + "\n"
                + "Quantidade de ímpares: " + qtImpar + "\n");
    }
}
