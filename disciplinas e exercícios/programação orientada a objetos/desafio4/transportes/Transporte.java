/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4.transportes;

/**
 *
 * @author Júnior
 */

public class Transporte {
    
    private double capacidade;
    
    // CONSTRUCTORS
    
        public Transporte() {}
        public Transporte (double c) {this.capacidade = c;}
    
    // GET AND SET

        public void setCapacidade (double c) {this.capacidade = c;}
        public double getCapacidade () {return capacidade;}
    
    // TO STRING
    
        @Override
        public String toString() {
            return "Transporte{" + "Capacidade=" + capacidade + "kg}";
        }
}
