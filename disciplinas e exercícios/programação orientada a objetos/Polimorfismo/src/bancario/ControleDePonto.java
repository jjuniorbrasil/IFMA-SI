/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bancario;
import java.text.SimpleDateFormat;
import java.util.Date ;

/**
 *
 * @author Júnior
 */
public class ControleDePonto {
    public void registraEntrada(Funcionario f) {
    SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yy HH:mm:ss");
    Date agora = new Date();
    
    System.out.println("ENTRADA: " + sdf.format(agora));
    System.out.println("FUNCIONARIO: " + f.getNome());
    }
    
    public void registraSaida(Funcionario f) {
    SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yy HH:mm:ss");
    Date agora = new Date();
    
    System.out.println("SAÍDA: " + sdf.format(agora));
    System.out.println("FUNCIONARIO: " + f.getNome());
    }
}
