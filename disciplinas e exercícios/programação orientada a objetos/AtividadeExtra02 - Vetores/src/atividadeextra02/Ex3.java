/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividadeextra02;

/**
 *
 * @author Júnior
 */
public class Ex3 extends Exercicio {
    int id;
    int vetor[];

    public Ex3(int v[]) {
        this.id = 3;
        this.vetor = v;
    }
    
    @Override
    int getId() {
        return this.id;
    }
    
    @Override
    void Executar() {
        
        int maiorPar = 0;
        int menorImpar = 0;
        
        for (int i = 0; i < this.vetor.length; i++) {
            if (this.vetor[i] % 2 == 0) {
                maiorPar = this.vetor[i];
                break;
            }
        }
        
        for (int i = 0; i < this.vetor.length; i++) {
            if (this.vetor[i] % 2 != 0) {
                menorImpar = this.vetor[i];
                break;
            }
        }
        
        for (int i = 0; i < this.vetor.length; i++) {
            if (this.vetor[i] % 2 == 0 && this.vetor[i] > maiorPar)
                maiorPar = this.vetor[i];
            else if (this.vetor [i] % 2 != 0 && this.vetor[i] < menorImpar)
                menorImpar = this.vetor[i];
        }
        
        System.out.println("\n========= EXERCÍCIO 3 =========\n"
                + "Vetor utilizado: ");
                for (int c = 0; c < this.vetor.length - 1; c++)
                    System.out.print(this.vetor[c] + ", ");
                    System.out.print(this.vetor[this.vetor.length - 1] + ".");
                    
        System.out.println("\n\n----------------------"
                + "\nMaior par: " + maiorPar
                + "\nMenor impar: " + menorImpar);
    }    
}
