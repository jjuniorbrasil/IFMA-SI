/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package sistemabancario;

class DepositoInvalido extends Exception {
    public DepositoInvalido() {
        super("Depósito inválido!");
    }
}

class TransferenciaInvalida extends Exception {
    public TransferenciaInvalida() {
        super("Transferência inválida!");
    }
}

public class Conta {
    private static int qtdcontas = 1;
    private int id;
    private double saldo;
    
    public Conta(double saldo) {
        this.id = qtdcontas++;
        this.saldo = saldo;
    }
    
    public double getSaldo() {
        return this.saldo;
    }
    
    public void Transferir(double v, Conta c2) throws TransferenciaInvalida {
        if (v <= 0 || this.saldo < v)
            throw new TransferenciaInvalida();
        
        this.saldo -= v;
        c2.saldo += v;
        
        System.out.println("Transferência realizada com sucesso!");
    }
}
