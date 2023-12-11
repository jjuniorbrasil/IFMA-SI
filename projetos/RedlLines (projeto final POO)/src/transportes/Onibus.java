package transportes;

public class Onibus extends Transporte {
    String idaviao = "ONI";
    int capacidade;
    
    public Onibus(int capacidade) {
        super("Ônibus");
        this.idaviao += "-" + super.getNserie();
    }
}
