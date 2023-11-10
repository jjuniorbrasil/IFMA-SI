/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package figurageometrica;

/**
 *
 * @author Júnior
 */
public class Quadrado implements FiguraGeometrica {
    private int lado;
    
    public Quadrado() {}
    
    public Quadrado(int lado) {
        this.lado = lado;
    }

    public int getLado() {
        return lado;
    }

    public void setLado(int lado) {
        this.lado = lado;
    }
    
    @Override
    public int getArea() {
        return this.lado * this.lado;
    }
    
    @Override
    public int getPerimetro() {
        return this.lado*4;
    }
    
    @Override
    public String getNomeFigura() {
    return "Quadrado";
    }
    
}
