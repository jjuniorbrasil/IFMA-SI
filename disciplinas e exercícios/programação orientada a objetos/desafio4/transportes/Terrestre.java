/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4.transportes;

/**
 *
 * @author Júnior
 */
 public class Terrestre extends Transporte {
        
        int numRodas;
            
            // CONSTRUCTORS
        
                public Terrestre () {}
                public Terrestre (double c) {super(c);}
                public Terrestre (double c, int numR) {super(c); this.numRodas = numR;}
        
            // GET AND SET
            
                public void setNumRodas (int n) {this.numRodas = n;}
                public int getNumRodas () {return numRodas;}

            // TO STRING
            
                @Override
                public String toString() {
                    return "Transporte terrestre{" + "Capacidade=" + this.getCapacidade() + "kg, Número de Rodas=" + numRodas + '}';
                }     
    }