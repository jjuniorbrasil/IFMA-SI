/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package produtos;
import java.util.Scanner;

/**
 *
 * @author Júnior
 */
public class Produto {
    int codigo;
    String nome;
    int quantidade;
    double valor;
    
    public Produto(int codigo, String nome, int quantidade, double valor) {
        this.codigo = codigo;
        this.nome = nome;
        this.quantidade = quantidade;
        this.valor = valor;
        System.out.println("Produto cadastrado com sucesso!");
    }
    
    public void cadastrarProduto(int cod, String n, int qtd, double v) {
        if (this.codigo != cod && this.nome == null) 
        {
            this.codigo = cod;
            this.nome = n;
            this.quantidade = qtd;
            this.valor = v;
            System.out.println("Produto cadastrado com sucesso!");
        } 
        else 
        {
            System.out.println("Produto já cadastrado ou inválido.");
        }
    }
    
    public Produto() {
        Scanner myScan = new Scanner(System.in);
        
            System.out.print("Insira os dados do produto: "
                    + "\n- Código: ");
            this.codigo = myScan.nextInt();
            System.out.print("- Nome: ");
            myScan.nextLine();
            this.nome = myScan.nextLine();
            System.out.print("- Quantidade: ");
            this.quantidade = myScan.nextInt();
            System.out.print("- Valor: ");
            this.valor = myScan.nextDouble();
        
        System.out.println("Produto cadastrado com sucesso!");
    }
    
    public void venderProduto(int qtd) {
        if (qtd <= 0) {
            System.out.println("Quantidade inválida.");
        } else {
            this.quantidade -= qtd;
            System.out.println("Venda/Qtde Produto = " + qtd + 
                               "\nVenda/Valor total = " + (this.valor*qtd)
                             + "\nProduto vendido com sucesso!");
        }
    }

    @Override
    public String toString() {
        return "Produto{" + "codigo=" + codigo + ", nome=" + nome + ", quantidade=" + quantidade + ", valor=" + valor + '}';
    }
    
    public void mostrarProduto() {
        System.out.println(this.toString());
    }
    
    public void acrescimoProduto (double acresc) {
        if (acresc <= 0) {
            System.out.println("Acréscimo inválido.");
        }
        else 
        {
            this.valor += this.valor*(acresc/100);
            System.out.println("Valor/Atualizado = " + this.valor);
            System.out.println("Acréscimo realizado com sucesso!");
        }
    }
    
    // GETTERS AND SETTERS

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }
    
    
    
}
