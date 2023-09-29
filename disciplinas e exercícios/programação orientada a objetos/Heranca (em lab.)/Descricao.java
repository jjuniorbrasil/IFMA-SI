/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package descricao;

/**
 *
 * @author 20231SI0003
 */
public class Descricao {
        
        int cod;
        private String descricao;
        
        // construtor

    public Descricao(int cod, String descricao) {
        this.descricao = descricao;
        this.cod = cod;
    }
    
        // get and set

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public int getCod() {
        return cod;
    }

    public void setCod(int cod) {
        this.cod = cod;
    }
    
    
}
