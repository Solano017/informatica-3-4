#include <stdio.h>

int main(void)
{
    float celsius;
    float fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("%0.2f°C = %0.2f°F\n", celsius, fahrenheit);

    if (celsius < 0) {
        printf("❄️ Freezing Water\n");
    }
    else if (celsius < 10) {
        printf("🥶 Very cold water\n");
    }
    else if (celsius < 20) {
        printf("🧥 Chilly water\n");
    }
    else if (celsius < 30) {
        printf("🖼️ Normal water\n");
    }
    else if (celsius < 40) {
        printf("☀️ Hot water\n");
    }
    else {
        printf("🔥 Very hot water\n");
    }

}
