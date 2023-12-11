package transportes;

public class Aviao extends Transporte {
    String idaviao = "AV";
    int capacidade;
    
    public Aviao(int capacidade) {
        super("Avião");
        this.idaviao += "-" + super.getNserie();
    }
}
