/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package figurageometrica;

/**
 *
 * @author Júnior
 */
public class Triangulo implements FiguraGeometrica {
    private int base;
    private int altura;
    private int LadoA;
    private int LadoB;
    private int LadoC;
    
    public Triangulo () {}
    
    public Triangulo (int base, int altura, int A, int B, int C) {
        this.base = base;
        this.altura = altura;
        this.LadoA = A;
        this.LadoB = B;
        this.LadoC = C;
    }

    public int getBase() {
        return base;
    }

    public void setBase(int base) {
        this.base = base;
    }

    public int getAltura() {
        return altura;
    }

    public void setAltura(int altura) {
        this.altura = altura;
    }

    public int getLadoA() {
        return LadoA;
    }

    public void setLadoA(int LadoA) {
        this.LadoA = LadoA;
    }

    public int getLadoB() {
        return LadoB;
    }

    public void setLadoB(int LadoB) {
        this.LadoB = LadoB;
    }

    public int getLadoC() {
        return LadoC;
    }

    public void setLadoC(int LadoC) {
        this.LadoC = LadoC;
    }
    
    @Override
    public int getArea() {
        return (this.base * this.altura)/2;
    }
    
    @Override
    public int getPerimetro() {
        return this.LadoA + this.LadoB + this.LadoC;
    }
    
    @Override
    public String getNomeFigura() {
    return "Triângulo";
    }
}
