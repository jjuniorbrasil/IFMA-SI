/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package sistemabancario;

class DepositoInvalido extends Exception {
    public DepositoInvalido(String mensagem) {
        super(mensagem);
    }
}

class TransferenciaInvalida extends Exception {
    public TransferenciaInvalida(String mensagem) {
        super(mensagem);
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
    
    public void transferir(double v, Conta c2){
        try {
            if (v <= 0 || v > this.saldo)
                throw new TransferenciaInvalida("Houve um erro ao transferir.");
            this.saldo -= v;
            c2.saldo += v;
            System.out.println("Valor transferido.");
        } catch (TransferenciaInvalida e) {
            System.out.println("ERRO: " + e.getMessage());
        }
    }
    
    public void depositar(double valor) {
	try {
            if (valor <= 0)
		throw new DepositoInvalido("Houve um erro ao depositar.");
            this.saldo += valor;
            System.out.println("Valor depositado.");
	} catch (DepositoInvalido e) {
            System.out.println("ERRO: " + e.getMessage());
	}
    }
}
