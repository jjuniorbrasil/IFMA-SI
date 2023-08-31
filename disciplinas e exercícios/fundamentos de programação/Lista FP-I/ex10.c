ex10() {
    printf("OBS: O programa para quando é apresentada uma nota negativa ou maior que '10'.\n\n");

    float nlid, somnot, mainot = 0;
    int i, lim = 500, nota[50];

    for(i=0;i<=lim;i++){
    printf("Leia a nota do aluno '%d': ", i+1);
    scanf("%d", &nota[i]);

        if (nota[i] < 0 || nota[i] > 10) {
            break;
        } else {
            somnot = somnot+nota[i];
            if (nota[i] > mainot) {
                mainot = nota[i];
            }
        }
    }

    nlid = i;
    printf("\nMaior nota: %.2f", mainot);
    printf(" - Média da turma: %.2f", somnot/(nlid));
}
