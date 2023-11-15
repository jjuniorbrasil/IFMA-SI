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
public class Ex8 extends Exercicio {
    int id;
    int vetor[];
    
    public Ex8(int v[]) {
        this.id = 8;
        this.vetor = v;
    }
    
    @Override
    int getId() {
        return this.id;
    }
    
    @Override
    void Executar() {
        
        Scanner myScan = new Scanner(System.in);
        
         System.out.print("\n======== EXERCÍCIO 8 =========\n\n"
                + "Verificar quantas vezes aparece (insira um valor): ");
        
         int l = myScan.nextInt();
         int qtdAparece = 0;
         
         System.out.print("No vetor informado: ");
         
        for (int i = 0; i < this.vetor.length - 1; i++)
        {
            System.out.print(this.vetor[i] + ", ");
                if (this.vetor[i] == l)
                qtdAparece++;
        }   System.out.print(this.vetor[this.vetor.length - 1] + ".");
                if (this.vetor[this.vetor.length-1] == l)
                qtdAparece++;
        
        System.out.println("\n---------------------\n"
                + "Quantidade de vezes que '" + l + "' aparece no vetor informado: " + qtdAparece);
        
    }
}
