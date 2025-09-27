#include <stdio.h>
int main () {
    int choices,subchoices;



    printf("----university course registeration system--- \n");
    printf("enter the department: \n");
    printf("1. CS \n");
    printf("2. EE \n");
    printf("3. BBA \n");
    scanf("%d",&choices);


    switch(choices){
        case 3:
          printf("the offered courses is : \n");
          printf("1. Psychology \n");
          printf("2. Fundamental Of Accounting \n");
          printf("3. Fundamental Of Management \n");
          printf("4. Islamic Studies \n");
          scanf("%d",&subchoices);
              
            switch(subchoices){
                case 1:
                  printf( " you registered for Pyschology");
                  break; 

                case 2:
                  printf(" you registered for Fundamental Of Accounting");
                  break; 
                
                case 3:
                  printf(" you registered for Fundamental Of Management");
                  break; 

                case 4:
                  printf(" you registered for Islamic Studies ");
                  break; 

                default:
                  printf("Invalid Subject");

            }
            break;

        case 2:
          printf("the offered courses is : \n");
          printf("1. Calculus And Analytical Geometry \n");
          printf("2. Fundamental of Programming \n");
          printf("3. Linear Circuit \n");
          printf("4. Islamic Studies \n");
          scanf("%d",&subchoices); 
            

            switch(subchoices){
                 
                case 1:
                  printf("  you registered for Calculus And Analytical Geometry");
                  break; 

                case 2:
                  printf(" you registered for Fundamental Of Programming");
                  break; 
                
                case 3:
                  printf(" you registered for Linear Circuit");
                  break; 

                case 4:
                  printf(" you registered for Islamic Studies ");
                  break; 

                default:
                  printf("Invalid Subject");

            }
            break;

        case 1:
          printf("the offered courses is : \n");
          printf("1. Calculus Aand Analytical Geometry \n");
          printf("2. Fundamental Of Programming \n");
          printf("3. Applied Physics \n");
          printf("4. Islamic Studies \n");
          scanf("%d",&subchoices); 
            

            switch(subchoices){
                 
                case 1:
                  printf(" you registered for Calculus And Analytical Geometry");
                  break; 

                case 2:
                  printf(" you registered for Fundamental Of Programming");
                  break; 
                
                case 3:
                  printf(" you registered for Applied Physics");
                  break; 

                case 4:
                  printf(" you registered for Islamic Studies ");
                  break; 

                default:
                  printf("Invalid Subject");

            }
            break;
        default:
             printf("Invalid Department");
            }
        
         return 0;
        }
        
        

