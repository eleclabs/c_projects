#include <stdio.h>

int main(void){
    int age=35;
    char name[50]="Somkiat Jaidee";
    char gender = 'M';
    float gpa=3.59;
    
    printf("My name  %s \n", name);   //แสดงข้อความ String
    printf("I'm %d \n", age);         // เลขจำนวนเต็ม %d Decimal  
    printf("Grade %f \n", gpa);       // เลขทศนิยม%f float,
    printf("Gender %c \n", gender);   // %c = char
    return 0;
}


