/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package produtos;

/**
 *
 * @author Júnior
 */
public class TesteProduto {
    public static void main(String args[]) {
        
        // PRIMEIRO TESTE
        
        System.out.println("------------------------");
        
        Produto p1 = new Produto();
        
            p1.cadastrarProduto(1, "Arroz", 10, 10.5);
            p1.mostrarProduto();
            p1.venderProduto(3);
            p1.mostrarProduto();
        
        // SEGUNDO TESTE
        
        System.out.println("------------------------");
        
        Produto p2 = new Produto(2, "Farinha", 20, 10);
        
            p2.mostrarProduto();
            p2.acrescimoProduto(20);
            p2.mostrarProduto();
            p2.venderProduto(5);
            p2.mostrarProduto();
        
    }
}
