/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package descricao;

/**
 *
 * @author 20231SI0003
 */
public class HerdaDescricao extends Descricao {
    
    private String atributoHerdado;

    public HerdaDescricao(int cod, String descricao) {
        super(cod, descricao);
    }

    public HerdaDescricao(int cod, String descricao, String atributoHerdado) {
        super(cod, descricao);
        this.atributoHerdado = atributoHerdado;
    }

    public String getAtributoHerdado() {
        return atributoHerdado;
    }

    public void setAtributoHerdado(String atributoHerdado) {
        this.atributoHerdado = atributoHerdado;
    }

    public void imprimir() {
        System.out.println("Código: " + getCod());
        System.out.println("Descrição: " + getDescricao());
        System.out.println("Atributo herdado: " + this.atributoHerdado);
    }
}
