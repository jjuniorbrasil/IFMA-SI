ex3 () {

    float area, B, b, a;

    printf("Base maior: ");
    scanf("%f", &B);
    printf("Base menor: ");
    scanf("%f", &b);
    printf("Altura: ");
    scanf("%f", &a);
    printf("\n");

    area = (B+b)*a/2;

    printf("%.2f metros quadrados de área.\n", area);
    if (area < 5) {
        printf("É um trapézio pequeno.");
    } else if (area >= 5 && area < 10) {
        printf("É um trapézio médio.");
    } else {
        printf("É um trapézio grande.");
    }
    printf("\n");
}
