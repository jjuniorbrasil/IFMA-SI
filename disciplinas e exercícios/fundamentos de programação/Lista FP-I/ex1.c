ex1 () {

    int num;
    printf("Digite um n�mero e verifique se ele � divis�vel por '7' ou n�o: ");
    scanf("%d", &num);

    if (num % 7 == 0) {
        printf("'%d' � divis�vel por '7'!\n", num);
    } else {
        printf("'%d' n�o � divis�vel por '7'.\n", num);
    }
}
