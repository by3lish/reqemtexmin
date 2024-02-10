#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int max = 100;
    int min = 1;
    int texmin;
    int texminler = 0;
    int cavab;
    srand(time(0));
    cavab = (rand() % max) + min;
    do
    {
        printf("Reqem texminizi daxil edin : ");
        scanf("%d", &texmin);
        if (texmin > cavab)
        {
            printf("Texmininiz cavabdan boyukdur.\n");
        }
        else if (texmin < cavab)
        {
            printf("Texmininiz cavabdan kicikdir.\n");
        }
        else
        {
            printf("Dogur cavabi tapdiniz!\n");
        }
        texminler++;
    } while (texmin != cavab);
    printf("+******************+\n");
    printf("* Dogru cavab : %d\n", cavab);
    printf("* Texmin sayi : %d\n", texminler);
    printf("+******************+\n");
    return 0;
}