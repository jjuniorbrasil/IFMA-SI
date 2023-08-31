ex8 () {
    int i, id[10];

    for (i=0; i<10; i++) {
    printf("Idade da pessoa '%d': ", i+1);
    scanf("%d", &id[i]);
    }

    printf("\n Pessoas +18: ");
    for (i=0; i<10; i++) {
    if (id[i]>=18) {
        printf("%d, ", i+1);
    }
    }
}
