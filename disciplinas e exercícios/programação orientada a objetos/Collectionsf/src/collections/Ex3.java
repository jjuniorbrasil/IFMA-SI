/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package collections;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/**
 *
 * @author 20231SI0003
 */
public class Ex3 {
        public static void main (String[] args) {
            Set<String> setCargos = new HashSet<>();
            
            setCargos.add("Diretor");
            setCargos.add("Gerente");
            setCargos.add("Secretário");
            setCargos.add("Presidente");
            //setCargos.add("Diretor");
            
            if (setCargos.contains("Funcionario"))
                System.out.println("'Funcionário' existe no conjunto.");
            else
                System.out.println("'Funcionário' não existe no conjunto.");
    }
}
