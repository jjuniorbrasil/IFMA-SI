ex4 () {

    float val;

    printf("O valor a ser lido sofrer� um aumento de acordo com a tabela abaixo: \n\n");
    printf(" ========================= \n");
    printf("At� R$50 - %5 5%% de aumento.\n");
    printf("Entre R$50 e R$100 - %5 10%% de aumento.\n");
    printf("Acima de R$100 - %5 15%% de aumento.\n");
    printf(" ========================= \n");
    printf("\nLeia o pre�o do produto (R$): ");

    scanf("%f", &val);
    printf("\n");

    if (val < 50) {
            printf("Novo pre�o: R$%.2f.", val*1.05);
    } else if (val >= 50 && val < 100) {
            printf("Novo pre�o: R$%.2f.", val*1.10);
    } else {
            printf("Novo pre�o: R$%.2f.", val*1.15);
    }
    printf("\n");
}
