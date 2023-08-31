#define E 40

ex18() {
    int mat[E][E], i, j, n, test = 1, soma = 0;

    printf("Matriz de ordem: ");
    scanf("%d", &n);
    printf("\n");

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("Leia o valor da linha '%d' e coluna '%d': ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    printf("Matriz apresentada: \n\n");

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%3d", mat[i][j]);
            soma = soma + mat[i][j];
        }
    printf(" - SOMA DA LINHA '%d': %3d", i+1, soma);
    printf("\n");
    soma = 0;
    }
}
