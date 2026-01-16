#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j, matris[99][99], min, max, sum, ort;

    srand(time(NULL));

    printf("n i giriniz ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matris[i][j] = rand() % 101;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d \t", matris[i][j]);
        }
        printf("\n");
    }

    min = matris[0][0];
    max = matris[0][0];
    sum = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matris[i][j] < min)
            {
                min = matris[i][j];
            }
            if (matris[i][j] > max)
            {
                max = matris[i][j];
            }
            sum += matris[i][j];
        }
    }

    ort = sum / (n * n);

    printf("\n");

    printf("min: %d \n", min);
    printf("max: %d \n", max);
    printf("ort: %d \n", ort);
}
