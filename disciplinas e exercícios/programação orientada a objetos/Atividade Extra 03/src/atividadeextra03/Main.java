/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividadeextra03;

/**
 *
 * @author Júnior
 * Nota: optei por não dividir os exercícios em
 * diferentes classes por abordarem a mesma matriz.
 * 
 * 
 */

public class Main {
    public static void main(String[] args) {
        
        // MATRIZ UTILIZADA
        int matriz[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        
        System.out.println("Matriz utilizada nos exercícios: \n");
            for (int l = 0; l<matriz.length; l++) {
                System.out.print("            ");
                    for (int c = 0; c<matriz[l].length; c++) {
                            System.out.print(matriz[l][c] + "  ");
                    }
                System.out.println();
            }
        
        // EXERCÍCIO 1 - Faça um algoritmo que imprima todos os elementos da 
        // matriz proposta, no entanto, substituindo os elementos da diagonal 
        // principal por ZERO. (use o comando IF)
        
            System.out.println("\n==== EXERCÍCIO 1 ====\n"
                    + "Resultado: \n");

                for (int l = 0; l<matriz.length; l++) {
                    System.out.print("            ");
                    for (int c = 0; c<matriz[l].length; c++) {
                        if (l == c)
                            System.out.print(0 + "  ");
                        else
                            System.out.print(matriz[l][c] + "  ");
                    }
                System.out.println();
                }
            
        // EXERCÍCIO 2 - Faça um algoritmo que apresente os elementos da 
        // diagonal secundária e abaixo.
        
            System.out.println("\n==== EXERCÍCIO 2 ====\n"
                    + "Resultado: \n");

            for (int l = 0; l<matriz.length; l++) {
                System.out.print("            ");
                    for (int c = 0; c<matriz[l].length; c++) {
                        if (l + c >= matriz[l].length - 1)    
                        System.out.print(matriz[l][c] + "  ");
                        else
                        System.out.print("-  ");
                    }
                System.out.println();
            }
        
        // EXERCÍCIO 3 - Faça um algoritmo que apresente os 
        // elementos abaixo da diagonal secundária.
        
            System.out.println("\n==== EXERCÍCIO 3 ====\n"
                    + "Resultado: \n");

            for (int l = 0; l<matriz.length; l++) {
                System.out.print("            ");
                    for (int c = 0; c<matriz[l].length; c++) {
                        if (l + c > matriz[l].length - 1)    
                        System.out.print(matriz[l][c] + "  ");
                        else
                        System.out.print("-  ");
                    }
                System.out.println();
            }
        
        // EXERCÍCIO 4 - Faça um algoritmo que retorne o maior valor 
        // entre os elementos abaixo da diagonal secundária.
        // OBS: Com 'retorne o maior valor', é compreendido que se faça uma função que retorne
        // o maior valor a partir de uma matriz como parâmetro. Assim:
        
            System.out.println("\n==== EXERCÍCIO 4 ====\n"
                    + "Resultado: " + maiorAbaixoSecundaria(matriz) + "\n\n");
        
                // Método no final do código
                
        // EXERCÍCIO 5 - Faça um algoritmo que apresente os elementos
        // da diagonal secundária e acima.
        
            System.out.println("\n==== EXERCÍCIO 5 ====\n"
                    + "Resultado: \n");

            for (int l = 0; l<matriz.length; l++) {
                System.out.print("            ");
                    for (int c = 0; c<matriz[l].length; c++) {
                        if (l + c <= matriz[l].length - 1)    
                        System.out.print(matriz[l][c] + "  ");
                        else
                        System.out.print("-  ");
                    }
                System.out.println();
            }
        
        // EXERCÍCIO 6 - Faça um algoritmo que retorne o produto
        // dos elementos acima da diagonal secundária.
        // OBS: Com 'retorne o produto', é compreendido que se faça uma função que retorne
        // o maior valor a partir de uma matriz como parâmetro. Asim:
        
            System.out.println("\n==== EXERCÍCIO 6 ====\n"
                + "Resultado: " + produtoAcimaSecundaria(matriz) + "\n\n");
        
                // Método no final do código
                
        // EXERCÍCIO 7 - Faça um algoritmo que substitua 
        // os elementos da diagonal secundária por ZERO.
        
            System.out.println("\n==== EXERCÍCIO 7 ====\n"
                    + "Resultado: \n");

            for (int l = 0; l<matriz.length; l++) {
                System.out.print("            ");
                    for (int c = 0; c<matriz[l].length; c++) {
                        if (l + c == matriz[l].length - 1)    
                        System.out.print(0 + "  ");
                        else
                        System.out.print(matriz[l][c] + "  ");
                    }
                System.out.println();
            }
        
        // EXERCÍCIO 8 - Faça um algoritmo que retorne 
        // a soma dos elementos da diagonal secundária.
        
            System.out.println("\n==== EXERCÍCIO 8 ====\n"
                + "Resultado: " + somaSecundaria(matriz) + "\n\n");
        
                // Método no final do código
    }
    
        // MÉTODOS DE RETORNO
    
    // Retorna a soma da diagonal secundária.
    public static int somaSecundaria(int matriz[][]) {
        int somaSecundaria = 0;
        
        for (int l = 0; l<matriz.length; l++) {
                for (int c = 0; c<matriz[l].length; c++) {
                    if (l + c == matriz[l].length - 1)    
                    somaSecundaria += matriz[l][c];
                }
        }
        
        return somaSecundaria;
    }
    
    // Retorna o procuro dos elementos acima da diagonal secundária
    public static int produtoAcimaSecundaria(int matriz[][]) {
        int produtoAcimaSecundaria = 1;
        
        for (int l = 0; l<matriz.length; l++) {
                for (int c = 0; c<matriz[l].length; c++) {
                    if (l + c < matriz[l].length - 1)    
                    produtoAcimaSecundaria *= matriz[l][c];
                }
        }
        
        return produtoAcimaSecundaria;
    }
    
    // Retorna o maior valor abaixo da diagonal secundária
    public static int maiorAbaixoSecundaria(int matriz[][]) { 
        
        int maiorAbaixoSecundaria = 0;
              
        for (int l = 0; l<matriz.length; l++) {
                for (int c = 0; c<matriz[l].length; c++) {
                    if (l + c > matriz[l].length - 1)    
                        maiorAbaixoSecundaria = matriz[l][c];
                        break;
                }
        }
        
        for (int l = 0; l<matriz.length; l++) {
                for (int c = 0; c<matriz[l].length; c++) {
                    if (l + c > matriz[l].length - 1)    
                        if (matriz[l][c] > maiorAbaixoSecundaria) {
                            maiorAbaixoSecundaria = matriz[l][c];
                        }
                }
        }
        
        return maiorAbaixoSecundaria;
    }
}

