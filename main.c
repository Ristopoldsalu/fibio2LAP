#include <stdio.h>
#include <stdlib.h>

int main()
{

    int s = 1000;
    //Listi algv22rtustamine??
    int fibi1[1000] = {0};
    int fibi2[1000] = {0};
    int fibi3[1000] = {0};
    int valik = 0;
    int jarjekorraNumber = 1;
    int listNum = 0;
    int numberToene = 0;
    fibi1[s-1] = 1;
    fibi2[s-1] = 1;
    int overcatch = 0;

    printf("palun sisesta number: \n");
    scanf("%d", &valik);

    for (jarjekorraNumber ; jarjekorraNumber < valik - 1; jarjekorraNumber++){
        for (listNum = s-1; listNum > 0; listNum--){

            if ((fibi1[listNum] + fibi2[listNum] + overcatch) >= 10){

                int over = fibi1[listNum] + fibi2[listNum] - 10 + overcatch;
                fibi3[listNum] = over;
                overcatch = 1;
            } else {

                fibi3[listNum] = fibi1[listNum] + fibi2[listNum] + overcatch;
                overcatch = 0;

            }
        }
        memcpy(fibi1, fibi2, sizeof (fibi1));
        memcpy(fibi2, fibi3, sizeof (fibi2));
    }
    printf("\nFibionacci number sellel kohal on: \n\n");

    for (listNum = 0; listNum < s; listNum++){

        if (fibi3[listNum] != 0 || numberToene == 1){

            numberToene = 1;
            printf("%d", fibi3[listNum]);
        }
    }
        printf("\n\n");

}
