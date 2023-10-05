/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package desafio4.transportes;

/**
 *
 * @author Júnior
 */
public class TestaTransporte {
    
    public static void main (String args[]) {
    
    // TRANSPORTE GENÉRICO
    
        Transporte t = new Transporte (200);
    
        // TRANSPORTES ESPECIALIZADOS
    
            Terrestre te = new Terrestre (200, 4);
            Aereo ae = new Aereo (500);
            Aquatico aq = new Aquatico (800);
    
        // TRANSPORTES ESPECÍFICOS
        
            Automovel au = new Automovel (200, 4, "ESG9484", "Vermelho", 4);
            Aviao av = new Aviao (500);
            Barco ba = new Barco (800);
        
    // TESTE DE ATRIBUIÇÃO E HERANÇA
        
        System.out.println(t.toString() + "\n" +
                            te.toString() + "\n" +
                            ae.toString() + "\n" +
                            aq.toString() + "\n" +
                            au.toString() + "\n" +
                            av.toString() + "\n" +
                            ba.toString() + "\n");

    }
}