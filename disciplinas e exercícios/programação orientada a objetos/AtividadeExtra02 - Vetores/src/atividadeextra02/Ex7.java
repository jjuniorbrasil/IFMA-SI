/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividadeextra02;

/**
 *
 * @author Júnior
 */
public class Ex7 extends Exercicio {
    int id;
    int vetor[];
    
    public Ex7(int v[]) {
        this.id = 7;
        this.vetor = v;
    }
    
    @Override
    int getId() {
        return this.id;
    }
    
    @Override
    void Executar() {
        int vetor2[] = new int[this.vetor.length];
        
        System.out.println("\n======== EXERCÍCIO 7 =========\n\n"
                + "Vetor informado: ");
        
        for (int i = 0; i < this.vetor.length - 1; i++)
        {
            vetor2[i] = this.vetor[i]*this.vetor[i];
            System.out.print(this.vetor[i] + ", ");
        }   vetor2[this.vetor.length - 1] = this.vetor[this.vetor.length - 1]*this.vetor[this.vetor.length - 1];
            System.out.print(this.vetor[this.vetor.length - 1] + ".");
    
            
        System.out.print("\n----------------------\n"
                + "Quadrado do vetor informado: \n");
        
        for (int i = 0; i < vetor2.length - 1; i++) {
            System.out.print(vetor2[i] + ", ");
        }   System.out.print(vetor2[vetor2.length - 1] + ".\n\n");
    }
}
