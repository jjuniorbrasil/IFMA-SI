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

    printf("%.2f metros quadrados de �rea.\n", area);
    if (area < 5) {
        printf("� um trap�zio pequeno.");
    } else if (area >= 5 && area < 10) {
        printf("� um trap�zio m�dio.");
    } else {
        printf("� um trap�zio grande.");
    }
    printf("\n");
}
