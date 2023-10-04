/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package desafio4;

/**
 *
 * @author Júnior
 */
public class TestaProfessor {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Seletista s = new Seletista(1, "Francisco", 35);
       Horista h = new Horista(2, "Paulo", 32);
       
       h.retornaSalario(40, 20);
       
       System.out.println("ESTUDO DE CASO (RESULTADO):"
               + "\n===========================");
       System.out.println(s.toString());
       System.out.println(h.toString());
    }
    
}
