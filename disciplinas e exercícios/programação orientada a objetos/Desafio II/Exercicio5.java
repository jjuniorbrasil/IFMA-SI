/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafios;
import java.util.Scanner;

/**
 *
 * @author Júnior
 */
public class Exercicio5 {
    
    float primeiroGanhador(float v) {
        return v*0.46f;
    }
    
    float segundoGanhador(float v) {
        return v*0.32f;
    }
    
    float terceiroGanhador() {
        float v = 780000;
        v = v - primeiroGanhador(v) - segundoGanhador(v);
        return v;
    }
    
    void dividePorVencedor(float v) {
        Exercicio5 metodo = new Exercicio5(){};
        System.out.println(""
                + "==== RESULTADO DA PREMIAÇÃO ====\n"
                + "Prêmio: R$780000,00\n"
                + "\nPrimeiro ganhador: " + metodo.primeiroGanhador(v)
                + "\nSegundo ganhador: " + metodo.segundoGanhador(v)
                + "\nTerceiro ganhador: " + metodo.terceiroGanhador()
                + "\n====          ====           ====");
    }
    
    public static void main (String args[]) {
        float v = 780000;
        Exercicio5 metodo = new Exercicio5(){};
    
        metodo.dividePorVencedor(v);
    }
}
