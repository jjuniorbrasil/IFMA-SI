/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4.transportes;

/**
 *
 * @author Júnior
 */

public class Aquatico extends Transporte {
            
            // CONSTRUCTORS
        
                public Aquatico () {}
                public Aquatico (double c) {super(c);}

            // TO STRING
            
                @Override
                public String toString() {
                    return "Transporte aquatico{" + "Capacidade=" + this.getCapacidade() + "kg}";
                }     
}
