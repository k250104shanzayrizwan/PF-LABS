#include <stdio.h>
#include <math.h>

int main () {
   float a,b,c,root1,root2,D,realpart,imagpart;

   printf("enter a value for a : ");
   scanf("%f",&a);

   printf("enter a value for b : ");
   scanf("%f",&b);

   printf("enter a value for c : ");
   scanf("%f",&c);

   if (a == 0) {
        printf("This is not a quadratic equation (a cannot be 0).\n");
        return 0;
    }

  D=(b*b)-4*a*c;
  


  if(D>0){
   root1= (-b+sqrt(D))/(2*a);
   root2= (-b-sqrt(D))/(2*a);
   printf("the value of root 1 is %f and value of root 2 is %f \n",root1,root2);
   printf("the root is real and distinct");
  }
  else if(D<0){
    realpart=-b/(2*a);
    imagpart=sqrt(-D)/(2*a);
     
    printf("Root1 = %f + %fi\n", realpart, imagpart);
    printf("Root2 = %f - %fi\n", realpart, imagpart);
    printf("the roots are imaginary ");
  }
  else if(D==0){
   root1=root2= -b/(2*a);
   
   printf("the value of root 1 is %f and value of root 2 is %f  \n",root1,root2);
   printf("the root is real and equal");
  }
   return 0;
}
