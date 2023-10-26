/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Formas;

/**
 *
 * @author Júnior
 */
public class Retangulo extends Forma {
    private double largura;
    private double altura;

    public double getLargura() {
        return largura;
    }

    public double getAltura() {
        return altura;
    }

    public void setLargura(double largura) {
        this.largura = largura;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }
    
    public Retangulo(double l, double a) {
        this.largura = l;
        this.altura = a;
    }
    
    @Override
    public double calcularArea() {
        return largura*altura;
    }
}
