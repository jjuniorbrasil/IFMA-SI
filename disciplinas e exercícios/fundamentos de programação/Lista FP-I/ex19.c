#define E 40

ex19() {
    int mat[E][E], mat2[E][E], mat3[E][E], i, j, n, test = 1, soma = 0;

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
    system("cls");
    printf("Segunda matriz: \n\n");

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("Leia o valor da linha '%d' e coluna '%d': ", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }

    system("cls");

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            mat3[i][j] += mat[i][j]+mat2[i][j];
            printf("%3d", mat3[i][j]);
        }
    printf("\n");
    }
}
