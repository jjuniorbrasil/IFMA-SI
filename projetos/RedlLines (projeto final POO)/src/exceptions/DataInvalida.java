package exceptions;

import java.util.Date;

public class DataInvalida extends Exception {
  private int indexdia;
  private int indexMes;
  private int indexano;
  private String erro="";
  boolean menorIdade;
  
 
 public int getIndexano() {
	return indexano;
}

public void setIndexano(int indexano) {
	this.indexano = indexano;
}

public DataInvalida(int indexdia, int indexMes, int indexano) {
	super();
	this.indexdia = indexdia;
	this.indexMes = indexMes;
	this.indexano = indexano;
}




public DataInvalida(int indexdia, int indexMes, int indexano, boolean menorIdade) {
	super();
	this.indexdia = indexdia;
	this.indexMes = indexMes;
	this.indexano = indexano;
	this.menorIdade = menorIdade;
}

public void mensagemErro() {
	 if(indexdia==0)
		 erro+="O dia da data de nascimento não foi selecionado\n";
	 if(indexMes==0)
		 erro+="O mês da data de nascimento não foi selecionado\n";
	 if(indexano==0)
		 erro+="O ano da data de nascimento não foi selecionado\n";
 }
   
public void menorIdade() {
	if(menorIdade==true)
		erro+="O cliente é menor de Idade";
}

@Override
public String toString() {
	mensagemErro();
	menorIdade();
	return erro;
}


}
