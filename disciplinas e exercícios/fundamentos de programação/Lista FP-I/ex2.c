ex2 () {

    int i, j, gols[3];
    char nome[40][40];

    for (i=0;i<2;i++) {
    printf("Digite o nome do time '%d': ", i+1);
    scanf("%s", &nome[i][0]);
    printf("Quantos gols: ", i+1);
    scanf("%d", &gols[i]);
    }

    printf("\nResultado: ");

    if (gols[0] > gols[1]) {
        printf("%s ganhou de %s com %d gols a %d!", nome[0], nome[1], gols[0], gols[1]);
    } else if (gols[0] == gols[1]) {
        printf("%s e %s empataram!", nome[0], nome[1]);
    } else {
        printf("%s ganhou de %s com %d gols a %d!", nome[1], nome[0], gols[1], gols[0]);
    }
    printf("\n");

}
