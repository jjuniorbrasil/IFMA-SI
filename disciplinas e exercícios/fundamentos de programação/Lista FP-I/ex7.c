ex7() {
    int i;
    for (i=50;i>=0;i--) {
        if (i > 0) {
        printf("%d, ", i);
        usleep(5000);
         } else {
        printf("0!");
        }
    }
}
