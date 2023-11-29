/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package collections;
import java.util.Collections;
import java.util.List;
import java.util.ArrayList;

/**
 *
 * @author 20231SI0003
 */
public class Ex1 {
    public static void main(String[] args) {
        List<String> myList = new ArrayList<>();
        
        myList.add("AWS");
        myList.add("Java");
        myList.add("Python");
        myList.add("Blockchain");
        
        System.out.println("Lista: " + myList.toString());
        
        Collections.sort(myList);
        
        System.out.println("Lista ordenada (alfabética): " + myList.toString());
        
        System.out.println("Maior da lista: " + Collections.min(myList));
        System.out.println("Menor da lista: " + Collections.max(myList));
    }
}
