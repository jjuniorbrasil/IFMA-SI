ex1 () {

    int num;
    printf("Digite um número e verifique se ele é divisível por '7' ou não: ");
    scanf("%d", &num);

    if (num % 7 == 0) {
        printf("'%d' é divisível por '7'!\n", num);
    } else {
        printf("'%d' não é divisível por '7'.\n", num);
    }
}
