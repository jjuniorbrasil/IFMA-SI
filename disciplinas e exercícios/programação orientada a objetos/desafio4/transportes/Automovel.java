/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4.transportes;

/**
 *
 * @author Júnior
 */
public class Automovel extends Terrestre {
    
    String placa;
    String cor;
    int numPortas;
    
        // CONSTRUCTORS
    
            public Automovel () {}
            public Automovel (double c, int n) {super(c, n);}
            public Automovel (double cap, int numR, String pla, String cor, int numP) 
                {super(cap, numR); this.placa = pla; this.cor = cor;; this.numPortas = numP;}
        
        // GETTERS AND SETTERS

            public String getPlaca() {
                return placa;
            }

            public void setPlaca(String placa) {
                this.placa = placa;
            }

            public String getCor() {
                return cor;
            }

            public void setCor(String cor) {
                this.cor = cor;
            }

            public int getNumPortas() {
                return numPortas;
            }

            public void setNumPortas(int numPortas) {
                this.numPortas = numPortas;
            }

            public int getNumRodas() {
                return super.getNumRodas();
            }

            public void setNumRodas(int numRodas) {
                super.setNumRodas(numRodas);
            }
        
        // TO STRING

            @Override
            public String toString() {
                return "Automóvel{" + "Placa=" + placa + ", Cor=" + cor + ", Número de Portas=" + numPortas + ", Número de Rodas=" + super.getNumRodas() + ", Capacidade=" + super.getCapacidade() + "kg}";
            }
    
    
}
