/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividadeextra02;

/**
 *
 * @author Júnior
 */
public class Ex4 extends Exercicio {
    int id;
    int vetor1[];
    int vetor2[];
    
    public Ex4 (int v1[], int v2[]) {
        this.id = 4;
        this.vetor1 = v1;
        this.vetor2 = v2;
    };
    
    @Override
    int getId() {
        return this.id;
    }
    
    @Override
    void Executar() {
        int vetor3[] = new int[this.vetor1.length];
        
        if (this.vetor1.length != this.vetor2.length)
        {
            System.out.println("Vetor(es) inválido(s).");
        } else {
                System.out.println("\n======== EXERCÍCIO 4 ========\n\n"
                        + "Vetores utilizados: \n");
            
            System.out.print("Vetor 1: ");
                for (int i = 0; i < this.vetor1.length - 1; i++)
                {
                    System.out.print(this.vetor1[i] + ", ");
                }   System.out.print(this.vetor1[this.vetor1.length - 1] + ".");
            
            System.out.print("\nVetor 2: ");
                for (int i = 0; i < this.vetor2.length - 1; i++)
                {
                    System.out.print(this.vetor2[i] + ", ");
                }   System.out.print(this.vetor2[this.vetor2.length - 1] + ".");
            
            System.out.print("\n----------------------\n"
                    + "Vetor 3 resultante da soma: ");
            
                for (int c = 0; c < this.vetor1.length - 1; c++)
                {
                    vetor3[c] = this.vetor1[c] + this.vetor2[c]; 
                    System.out.print(vetor3[c] + ", ");
                }   vetor3[this.vetor1.length - 1] = this.vetor1[this.vetor1.length - 1] + this.vetor2[this.vetor1.length - 1]; 
                    System.out.print(vetor3[this.vetor1.length - 1] + ".\n"); 

        }
    }
}
