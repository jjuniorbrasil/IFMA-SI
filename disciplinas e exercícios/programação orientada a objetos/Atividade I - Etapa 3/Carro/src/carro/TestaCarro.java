/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package carro;

/**
 *
 * @author Júnior
 */
public class TestaCarro {
    public static void main(String[] args) {
       Carro c1 = new Carro("Celta", 1, "1.0 Flexpower VHCE", "Chevrolet");
       Carro c2 = new Carro("Corsa", 2, "1.0 FLEX", "Chevrolet");
       
       System.out.println("Carro: " + c1.getNome() + ""
               + "\nID: " + c1.getId()
               + "\nMotor: " + c1.getModelo()
               + "\nFabricante: " + c1.getFabricante());
       
       System.out.println("\nCarro: " + c2.getNome() + ""
               + "\nID: " + c2.getId()
               + "\nMotor: " + c2.getModelo()
               + "\nFabricante: " + c2.getFabricante());
    }
}
