#define F 20

ex5 () {
    int fun[F], temp[F], numf, i;
    float sal[F], newsal;

    printf("Quantos funcion�rios trabalham em sua empresa?\n");
    scanf("%d", &numf);
    system("cls");

    for (i=0; i<numf; i++) {
        printf("Leia o sal�rio do funcion�rio '%d' (R$): ", i+1);
        scanf("%f", &sal[i]);
        printf("Tempo de servi�o do funcion�rio '%d' (anos): ", i+1);
        scanf("%d", &temp[i]);
        printf("\n");
    }

    printf("Novos sal�rios: \n\n");

    for (i=0; i<numf; i++) {

         if (sal[i] < 500) {
            newsal = sal[i]*1.25;
         } else if (sal[i] >= 500 && sal[i] < 1000) {
            newsal = sal[i]*1.20;
         } else if (sal[i] >= 1000 && sal[i] < 1500) {
            newsal = sal[i]*1.15;
         } else if (sal[i] >= 1500 && sal[i] < 2000) {
            newsal = sal[i]*1.10;
         } else {
            newsal = sal[i];
         }

         if (temp[i] < 1) {
            newsal = newsal;
         }  else if (temp[i] >= 1 && temp[i] <= 3) {
            newsal = newsal+100;
         }  else if (temp[i] >= 4 && temp[i] <= 6) {
            newsal = newsal+200;
         }  else if (temp[i] >= 7 && temp[i] <= 10) {
            newsal = newsal+300;
         } else {
            newsal = newsal+500;
         }

         printf("Funcion�rio '%d' passar� a receber R$%.2f.\n", i+1, newsal);
         newsal = 0;

    }

}
