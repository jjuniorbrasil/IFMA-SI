#define E 40

ex16() {
    int mat[E][E], i, j, n, test = 1;

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
        }
    printf("\n");
    }

    printf("\n");
    printf("Matriz transposta: \n\n");

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%3d", mat[j][i]);
        }
    printf("\n");
    }

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (mat[i][j] != mat[j][i]) {
                test = 0;
            }
        } }

    if (test==1) {
        printf("\nÉ simétrica.");
    } else {
        printf("\nNão é simétricas.");
    }
}
