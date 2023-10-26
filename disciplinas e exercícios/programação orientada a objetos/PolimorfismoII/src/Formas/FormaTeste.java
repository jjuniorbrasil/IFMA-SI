/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Formas;

/**
 *
 * @author Júnior
 */
public class FormaTeste {
    public static void main (String[] args) {
        Forma f = new Circulo(2);
        
        System.out.println("Área do círculo de raio 2: " + f.calcularArea());
        
        f = new Retangulo(2, 4);
        
        System.out.println("Área do retângulo de largura 2 e altura 4: " + f.calcularArea());
        
        f = new Retangulo(5, 2);
        
        if (f instanceof Circulo) {
            System.out.println("Círculo!");
        } else {
            System.out.println("Retângulo");
        }
    }
}
