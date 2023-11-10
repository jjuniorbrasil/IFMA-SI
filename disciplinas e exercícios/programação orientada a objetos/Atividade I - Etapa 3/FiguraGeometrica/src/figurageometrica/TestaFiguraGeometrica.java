/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package figurageometrica;

/**
 *
 * @author Júnior
 */
public class TestaFiguraGeometrica {
    public static void main(String[] args) {
    
        Quadrado q = new Quadrado(10);
        Triangulo t = new Triangulo(18, 8, 9, 13, 18);
    
        System.out.println("Figura: " + q.getNomeFigura() +
                           "\nÁrea = " + q.getArea() +
                           "\nPerímetro = " + q.getPerimetro());
        
        System.out.println("\nFigura: " + t.getNomeFigura() +
                           "\nÁrea = " + t.getArea() +
                           "\nPerímetro = " + t.getPerimetro());
    }
}
