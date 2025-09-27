#include <stdio.h>
int main(){
    int age;
    int movie;
    int tickettype;

    printf("enter your age : \n");
    scanf("%d",&age);

    if(age<12){
        printf("the type of ticket is for child \n");
        tickettype=1;
    }
    else if(age>=12 && age<=60){
        printf("the type of ticket is for adult \n");
        tickettype=2;
    }
    else if(age>60){
        printf("the type of ticket is for senior citizen \n");
        tickettype=3;
    }
    
    printf("---select the type of movie---\n");
    printf("1. action \n");
    printf("2. horror \n");
    printf("3. comedy \n");
    scanf("%d",&movie);


    printf("\nFinal Booking\n");

    if(tickettype==1){
        printf(" Child Ticket+");
    }
    else if(tickettype==2){
        printf(" Adult Ticket +");
    }
    else {
         printf(" Senior Citizen Ticket +");
    }

    switch(movie){

        case 1:
          printf(" Action \n");
          break;

         case 2:
          printf("Horror \n");
          break;

        case 3:
          printf("Comedy \n");
          break;

        default:
        printf("invalid movie number \n");
    }
    
    return 0;
}
