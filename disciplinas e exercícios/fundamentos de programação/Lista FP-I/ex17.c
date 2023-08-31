ex17() {

    int mat[3][3], i, test = 0, j;

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Leia o termo '%d' da matriz: ", i+1);
            scanf("%d", &mat[i][j]);
                if (i != j) {
                    if (mat[i][j] != 0) {
                        test = 1;
                    }
                }
        }
    }

    if (test > 0) {
        printf("\nN„o È diagonal!");
    } else {
        printf("\n… diagonal!");
    }
}
