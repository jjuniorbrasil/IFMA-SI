package transportes;

class TipoTransporteInvalidoException extends Exception {
    protected TipoTransporteInvalidoException(String mensagem) {
        super(mensagem);
    }
}

abstract class Transporte {
    static int avioes = 1;
    static int onibus = 1;
    private int nserie;
        private String tipo;
    
    protected Transporte (String tipo) {
        try {
            if (tipo == "Avião") {
                this.nserie = avioes++;
                this.tipo = tipo;
            }
            else if (tipo == "Ônibus") {
                this.nserie = onibus++;
                this.tipo = tipo;
            }
            else
                throw new TipoTransporteInvalidoException("Tipo de transporte inválido.");
        } catch (TipoTransporteInvalidoException e) {
            System.out.println(e.getMessage());
        }
    }
    
    public int getNserie() {
        return nserie;
    }
}
