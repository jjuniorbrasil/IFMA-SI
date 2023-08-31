ex6() {
    int i, qtd = 0, lim;
    lim = 2000;

    for (i = 1000; i<=lim; i++) {
        if (i%2 == 0 && i != lim){
            printf("%d, ", i);
            qtd++;
        } else if (i == lim) {
            printf("%d!", i);
            qtd++;
        }
    }
    printf("\n\nSão %d números pares!", qtd);
}
