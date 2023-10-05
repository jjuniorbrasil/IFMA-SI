/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package desafio4.professores;
import java.util.Scanner;

/**
 *
 * @author Júnior
 */
public class TestaProfessor {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Scanner myScan = new Scanner(System.in);
       
       Seletista s = new Seletista();
       Horista h = new Horista();
       
       System.out.println("PROFESSOR SELETISTA:\n");
        System.out.print("Insira a matrícula: ");
            s.setMatricula(myScan.nextInt());
            myScan.nextLine();
        System.out.print("Insira o nome: ");
            s.setNome(myScan.nextLine());
        System.out.print("Insira a idade: ");
            s.setIdade(myScan.nextInt());
       
       System.out.println("PROFESSOR HORISTA:\n");
        System.out.print("Insira a matrícula: ");
            h.setMatricula(myScan.nextInt());
            myScan.nextLine();
        System.out.print("Insira o nome: ");
            h.setNome(myScan.nextLine());
        System.out.print("Insira a idade: ");
            h.setIdade(myScan.nextInt());
       
       System.out.print("Insira as horas trabalhadas e o valor das horas: ");
            h.retornaSalario(myScan.nextDouble(), myScan.nextDouble());
       
       System.out.println("\nESTUDO DE CASO (RESULTADO):"
                        + "\n===========================");
       System.out.println(s.toString());
       System.out.println(h.toString());
    }
    
}
