#include <stdio.h>

int main() {
    float w ;
    float h ;
    float bmi ;

    printf("heigh (m) : ");
    scanf("%f",&h);

    printf("้wight (kg):");
    scanf("%f",&w);

    bmi = w / (h*h) ;
    printf("bmi = %.2f", bmi);

    if(bmi >= 30){
       printf("Obese");
    }else if(bmi >=25 && bmi <= 29.0){
       printf("Overweight");
    }else if(bmi >=18.5 && bmi <= 24.9){
       printf("Healthy weight");
    }else if(bmi < 18.5 ){
       printf("Underweight");
    }

    return 0;
}