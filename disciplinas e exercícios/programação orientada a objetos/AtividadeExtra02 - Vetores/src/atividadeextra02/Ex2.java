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
public class Ex2 extends Exercicio {
    int id;
    int vetor[];

    public Ex2(int v[]) {
        this.id = 2;
        this.vetor = v;
    }
    
    @Override
    int getId() {
        return this.id;
    }
    
    @Override
    void Executar() {
         
        int somaPositivos = 0;
        
        for (int i = 0; i < this.vetor.length; i++) {
            if (this.vetor[i] >= 0) {
                somaPositivos += this.vetor[i];
            }
        }
        
        System.out.println("\n========= EXERCÍCIO 2 =========\n\n"
                + "Elementos do vetor: ");
        for (int i = 0; i < (this.vetor.length - 1); i++) {
            System.out.print(this.vetor[i] + ", ");
        } System.out.print(this.vetor[this.vetor.length - 1] + ".\n\n");        
        
        System.out.println("\n-----------------\n"
                + "Soma dos valores positivos do vetor informado: " + somaPositivos);
     
    }    
}
