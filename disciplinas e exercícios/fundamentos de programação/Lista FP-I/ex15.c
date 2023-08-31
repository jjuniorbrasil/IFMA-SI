ex15() {
    int val[10], i, maiv = 0, menv = 9999999;

    for (i=0;i<10;i++) {
        printf("Leia o valor '%d': ", i+1);
        scanf("%d", &val[i]);

        if (val[i] > maiv) {
            maiv = val[i];
        } else
        if (val[i] < menv) {
            menv = val[i];
        }
    }
    printf("\nMaior valor: %d", maiv);
    printf("\nMenor valor: %d", menv);
}
