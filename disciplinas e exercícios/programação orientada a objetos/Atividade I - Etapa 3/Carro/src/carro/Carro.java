/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package carro;

/**
 *
 * @author Júnior
 */
public class Carro implements Veiculo, Motor {
    private String nome;
    private int id;
    private String modelo;
    private String fabricante;
    
    public Carro(String nome, int id, String modelomotor, String fabricantemotor) {
        this.nome = nome;
        this.id = id;
        this.modelo = modelomotor;
        this.fabricante = fabricantemotor;
    };
    
    @Override
    public String getNome() {
        return this.nome;
    }
    @Override
    public int getId() {
        return this.id;
    }
    @Override
    public String getModelo() {
        return this.modelo;
    }
    @Override
    public String getFabricante() {
        return this.fabricante;
    }
}
