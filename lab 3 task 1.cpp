#include <stdio.h>

int main() {
    int sub1, sub2, sub3,total;
    float percentage;
    
    printf("enter the marks of subject 1: ");
    scanf("%d",&sub1);
    printf("enter the marks of subject 2: ");
    scanf("%d",&sub2);
    printf("enter the marks of subject 3: ");
    scanf("%d",&sub3);
    
    total=sub1+sub2+sub3;
    printf("your totalmarks is %d \n",total);
    
    percentage=(total/300.0)*100;
    printf("your percentage is %.2f",percentage);
    
    
    return 0;
}
