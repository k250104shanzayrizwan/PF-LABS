#include <stdio.h>

int main() {
    int a,b,temporary;
    printf("enter the number a: ");
    scanf("%d",&a);
    
    printf("enter the number b: ");
    scanf("%d",&b);
    
    printf("enter the number temporary: ");
    scanf("%d",&temporary);
    
    //swapping 
    a=b;
    b=temporary;
 
     //after swapping 
     printf("the number a is %d \n ",a);
     printf("the number b is %d \n ",b);
    
    return 0;
}
