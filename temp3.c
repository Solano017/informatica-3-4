#include <stdio.h>
//1.prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
// 3. Call
printf("Temperature Converter\n");
printf("1. Celsius to Fahrenheit\n");
printf("2. Fahrenheit to Celsius\n");
printf("Enter your option: ");
int user_response;
scanf("%d", &user_response);

if (user_response==1){
    // 3. Call
    c_to_f();
} else if (user_response == 2){
    f_to_c();
} else {
    printf("Invalid Option, READ AGAIN \n");
}

}
// 2. Define
void c_to_f(void){
    float celsius;
    float fahrenheit = (fahrenheit = (celsius * 1.8) + 32);
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
}
void f_to_c(void){
float f;
printf("Enter temperature in Fahrenheit: ");
scanf("%f", &f);
float c = (f-32) /1.8;
printf("%.2f°C = %.2f°F \n", f, c);
}
