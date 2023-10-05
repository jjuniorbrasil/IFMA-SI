/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4.transportes;

/**
 *
 * @author Júnior
 */
public class Barco extends Aquatico {
    
    // CONSTRUCTORS
    
        public Barco () {}
        public Barco (double c) {super(c);}
    
    // TO STRING
    
        @Override
        public String toString() {
            return "Barco{ Capacidade=" + super.getCapacidade() +"kg}";
        }
}
