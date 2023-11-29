/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package collections;
import java.util.Collections;
import java.util.List;
import java.util.Vector;

/**
 *
 * @author 20231SI0003
 */
public class Ex2 {
    public static void main (String[] args) {
        final int N = 5;
        Vector<Integer> v = new Vector<>(N);
        
        for (int i = 1; i <= 5; i++)
            v.add(i);
        
        System.out.println("Vetor: " + v.toString());
        
        v.setSize(7);
        
        v.set(5, 6);
        v.set(6, 7);
        
        System.out.println("Vetor: " + v.toString());
        
        v.clear();
        
        System.out.println("Vetor: " + v.toString());
    }
}
