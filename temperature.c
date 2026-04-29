#include <stdio.h>

int main(void)
{
    int minutes, hour, startMin;
    int time, fhour;

    printf("Movie running time (in minutes): ");
    scanf("%d", &minutes);

    printf("Start hour: ");
    scanf("%d", &hour);

    printf("Start minutes: ");
    scanf("%d", &startMin);

    // Convert minutes to hours and minutes
    time = minutes / 60;        // horas de la película
    int remainingMin = minutes % 60; // minutos restantes

    printf("\nThe movie will last %d hr and %d min\n", time, remainingMin);

    // Calcular tiempo final
    fhour = hour + time;
    int finalMin = startMin + remainingMin;

    // Ajustar si minutos pasan de 60
    if (finalMin >= 60)
    {
        fhour += finalMin / 60;
        finalMin = finalMin % 60;
    }

    printf("End time: %d:%02d\n", fhour, finalMin);

}
