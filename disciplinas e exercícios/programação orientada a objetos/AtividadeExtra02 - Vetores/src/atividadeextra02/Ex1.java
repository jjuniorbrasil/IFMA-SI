/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividadeextra02;
import java.util.Scanner;

/**
 *
 * @author Júnior
 * 1) Faça um algoritmo que leia do teclado seis valores inteiros e armazeno-os em um vetor. Em seguida,
apresente na tela os valores lidos na ordem inversa em que foram inseridos no vetor.
 */
public class Ex1 extends Exercicio {
    int id;

    public Ex1() {
        this.id = 1;
    }
    
    @Override
    int getId() {
        return this.id;
    }
    
    @Override
    void Executar() {
        Scanner myScan = new Scanner(System.in);
        int v[] = new int[6];
        
        System.out.println("\n========= EXERCÍCIO 1 =========\n\n"
                + "Informe 6 valores inteiros!\n");
        
        for (int i = 0; i < v.length; i++) {
            System.out.print("Valor " + (i+1) + ": ");
            v[i] = myScan.nextInt();
        }
        
        System.out.println("\n-----------------\n"
                + "Sequência na ordem inversa: ");
        for (int i = (v.length - 1); i > 0; i--) {
            System.out.print(v[i] + ", ");
        } System.out.println(v[0] + ".");
    }
}
