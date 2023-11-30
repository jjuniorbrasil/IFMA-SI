/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package collections;
import java.util.Collections;
import java.util.TreeSet;
import java.util.Set;
import java.util.Iterator;

/**
 *
 * @author 20231SI0003
 */
public class Ex4 {
    public static void main(String[] args) {
        Set<Integer> mySet = new TreeSet<>();
        
        mySet.add(3);
        mySet.add(1);
        mySet.add(2);
        mySet.add(4);
        mySet.add(3);
        
        Iterator<Integer> i = mySet.iterator();
        
        while (i.hasNext())
            System.out.println(i.next());
        
//        for (int z : mySet) {
//            System.out.println(z);
//        }
    }
}
