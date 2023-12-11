package passagem;

import pessoas.Cliente;

public class Passagem {
        private static int qtdpass = 0;
        private int passid;
	private int quantidade;
	private String transporte;
	private String origem="São Luís";
	private String destino;
	private double valor;
	private Cliente cliente;
        String embarque;
        String desembarque;
	
	public Passagem() {
            this.passid = ++qtdpass;
        }
        
        public int getPassId() {
            return this.passid;
        }
        
	public Cliente getCliente() {
		return cliente;
	}
	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}
        
        public void setEmbarque(String embarque) {
		this.embarque = embarque;
	}
        
        public void setDesembarque(String desembarque) {
		this.desembarque = desembarque;
	}
        
        public String getEmbarque() {
		return this.embarque;
	}
        
        public String getDesembarque() {
		return this.desembarque;
	}
        
	public int getQuantidade() {
		return quantidade;
	}
	public void setQuantidade(int quantidade) {
		this.quantidade = quantidade;
	}
	public String getTransporte() {
		return transporte;
	}
	public void setTransporte(String transporte) {
		this.transporte = transporte;
	}
	public String getOrigem() {
		return origem;
	}
	public String getDestino() {
		return destino;
	}
	public void setDestino(String destino) {
		this.destino = destino;
	}
	public double getValor() {
		return valor;
	}
	public void setValor(double valor) {
		this.valor = valor;
	}
	
   
}
