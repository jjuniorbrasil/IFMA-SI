ex9() {
    int n, check = 0;

    do {

    printf("Digite um n�mero de '1' a '10': ");
    scanf("%d", &n);

        if (n < 0 || n > 10) {
        printf("Por favor, um n�mero de '1' a '10', apenas.\n\n");
        } else {
        check = 1;
        }

    } while (check < 1);

    printf("Obrigado!");
}
