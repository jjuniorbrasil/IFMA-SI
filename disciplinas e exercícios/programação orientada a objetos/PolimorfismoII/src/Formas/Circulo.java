/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Formas;
import java.lang.Math;

/**
 *
 * @author Júnior
 */
public class Circulo extends Forma {
    private double raio;
    
    public Circulo(double r) {
        this.raio = r;
    }

    public double getRaio() {
        return raio;
    }

    public void setRaio(double raio) {
        this.raio = raio;
    }
    
    @Override
    public double calcularArea() {
        return raio*raio*Math.PI;
    }
}
