#include <stdio.h>

int main() {
    int num;
    char letter;
    printf("enter the number between 65 and 90 : ");
    scanf("%d",&num);
    printf("the number you entered is %d \n",num);
    
    if (num>=65&&num<=90){
       printf(" the ASCII character of the number is %d=%c\n",num,(char)num);
	}
    else 
	{
		printf("you have entered an invalid number!");
	 } 
    
	 return 0;
}
