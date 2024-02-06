int main()
{
    int vect1[3];
    int vect2[3];
    int cross[3];
    int i, dot = 0;

    printf("Enter elements for vector A \nIn format(i, j, k):\n");
    for (i=0; i<3; i++){
        scanf("%d", &vect1[i]);
    }

    printf("Enter elements for vector B \nIn format(i, j, k):\n");
    for (i=0; i<3; i++){
        scanf("%d", &vect2[i]);
    }
    for (i=0; i<3; i++){
        dot = dot + vect1[i] * vect2[i];
    }

    cross[0] = vect1[1] * vect2[2] - vect1[2] * vect2[1];
    cross[1] = vect1[2] * vect2[0] - vect1[0] * vect2[2];
    cross[2] = vect1[0] * vect2[1] - vect1[1] * vect2[0];


    printf("\nDot Product: %d\n", dot);
    printf("Cross Product: %di %dj %dk\n", cross[0], cross[1], cross[2]);



return 0;

}
