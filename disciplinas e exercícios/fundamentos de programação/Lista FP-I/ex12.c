ex12() {
    int i, n[900], lim=999;
    float qtdp = 0, qtdi = 0, somp = 0, somt = 0, nlidos = 0;

    for (i=0; i<lim; i++){
        printf("Leia o valor '%d': ", i+1);
        scanf("%d", &n[i]);

        if (n[i] <= 0) {
            break;
        } else {
            if (n[i]%2 == 0){
                somp += n[i];
                qtdp++;
            } else {
                qtdi++;
            }
        }
        somt += n[i];
        nlidos++;
    }
    printf("\nNúmeros pares: %.f.\n", qtdp);
    printf("Números ímpares: %.f.\n", qtdi);
    printf("Média dos pares: %.2f.\n", somp/qtdp);
    printf("Média geral: %.2f.\n", somt/nlidos);
}
