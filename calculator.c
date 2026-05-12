#include <stdio.h>
//1 Prototype
void add(void);
void substract(void);
void multiply(void);
void divide(void);

int main(void){
// 3 Call
printf("Welcome to terminal calculator 😀 \n");
printf("Options to calculate \n");
printf(" 1. Add + \n 2. Substract - \n 3. Multiply * \n 4. Divide / \n");
printf("Enter option: ");
int user_response;
scanf("%d", &user_response);
//ifs
if (user_response == 1){
    add();
} else if(user_response == 2){
    substract();
} else if (user_response == 3){
    multiply();
} else if (user_response == 4){
    divide();
}
}
// 2. Define

void add(void){
    float one;
    float two;
    printf("Enter first number: ");
    scanf("%f", one);
    printf("Enter second number: ");
    scanf("%f", &two);
    float answer = (one + two);
    printf("%.2f \n", answer);
}
void substract(void){
    float one;
    float two;
    printf("Enter first number: ");
    scanf("%f", &one, two);
        printf("Enter second number: ");
    scanf("%f", &two);
    float answer = (one - two);
    printf("%.2f \n", answer);
}
void multiply(void){
        float one;
    float two;
    printf("Enter first number: ");
    scanf("%f", &one, two);
        printf("Enter second number: ");
    scanf("%f", &two);
     float answer = (one * two);
    printf("%.2f \n", answer);
}
void divide(void){
        float one;
    float two;
    printf("⚠️ ⚠️ ⚠️ \tWARNING ⚠️ ⚠️ ⚠️ \n"); //idk why tho, im trying it HHAHAHA
printf("⚠️ ⚠️ ⚠️ \tDO NOT DIVIDE BY 0 ⚠️ ⚠️ ⚠️ \n");
    printf("Enter first number: ");
    scanf("%f", &one, two);
        printf("Enter second number: ");
    scanf("%f", &two);
    float answer = (one / two);
    printf("%.2f \n", answer);
}

