/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package usuarios;
import java.io.File;
import java.io.FileWriter;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.io.IOException;
import java.io.*;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.util.Objects;



/**
 *
 * @author Júnior
 */
public class CadastraUsuario {
    // Conta quantas contas existem cadastradas.
    private int id;
    private String username;
    private String password;
    boolean admin;
        
        public CadastraUsuario(String username, String password) {
                this.username = username;
                this.password = password;
                this.admin = false;
        }
        
public void CadastrarUsuario() {
    try {
        System.out.println("Função chamada!");
        String diretorioAtual = System.getProperty("user.dir");
        String caminhoUsuarios = diretorioAtual + File.separator + "Users";
        File pastaUsuarios = new File(caminhoUsuarios);
        if (!pastaUsuarios.exists()) {
            pastaUsuarios.mkdirs();
        }
        File usuarioFile = new File(pastaUsuarios, this.username + ".txt");
        usuarioFile.createNewFile();
        System.out.println("Arquivo criado" + pastaUsuarios);

        FileWriter writeuser = new FileWriter(usuarioFile);
        writeuser.write(this.username + "\n" + this.password);
        writeuser.close();
    } catch (IOException e) {
        System.out.println("Impossível cadastrar o usuário.");
        e.printStackTrace();
    }
}
}

