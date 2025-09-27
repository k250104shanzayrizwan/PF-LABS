#include <stdio.h>
int main() {
  
    int choices,subchoices;
    float areaoftriangle,areaofcircle,areaofrectangle;
    float radius,base,height;
    float c,A,B,C,P,w,l,R;
    

    printf("geomatry calculator \n");
    printf("select the shape first \n");
    printf("1. circle \n");
    printf("2. triangle \n");
    printf("3. rectangle \n");
    scanf("%d",&choices);

    switch(choices){
        
      case 1:
        printf("what you want to calculate \n");
        printf("1. perimeter of circle \n");
        printf("2. area of circle \n");
        scanf("%d",&subchoices);
          

            switch(subchoices){
            
                case 1:
                  printf("enter the value of radius : ");
                  scanf("%f",&radius); 

                  c=2*(3.142)*radius; //  c is the perimeter of the circle 
                  printf("the perimeter of circle is :  %f",c);
                  break;

                case 2:
                  printf("enter the value of radius : ");
                  scanf("%f",&radius); 

                  areaofcircle=(3.142)*(radius*radius);  
                  printf("the area of circle is : %f \n",areaofcircle);
                  break;

                default:
                  printf("invalid number");
                
            }
          break;

      case 2:

        printf("what you want to calculate \n");
        printf("1. perimeter of triangle \n");
        printf("2. area of triangle \n");   
        scanf("%d",&subchoices);
             
            switch(subchoices){
              case 1:
                printf("to calculate the perimeter of triangle \n");
                printf("enter the value of A : "); //A,B,C are the side of triangle
                scanf("%f",&A);
                  
                printf("enter the value of B : ");
                scanf("%f",&B);

                printf("enter the value of C : ");
                scanf("%f",&C);
          
                  

                P=A+B+C;
                printf("the perimeter of triangle is : %f",P); //P is the perimeter of the triangle
                break;

              case 2:
                printf("to calculate the area of the triangle");
                printf("enter the value of base and height : \n");
                scanf("%f %f",&base,&height); 

                areaoftriangle=(0.5)*(base*height);
                printf("the area of triangle is :  %f",areaoftriangle);
                break;

              default:
                printf("invalid number");

            }
          break;

      case 3: 
 
        printf("what you want to calculate \n");
        printf("1. perimeter of rectangle \n");
        printf("2. area of rectangle \n");
        scanf("%d",&subchoices); 
        
        
            switch(subchoices){

              case 1:
                printf("to calculate the perimeter of rectangle \n ");
                printf("enter the value of w: "); // w is width of rectangle
                scanf("%f",&w);

                printf("enter the value of l: "); //l is the length of rectangle
                scanf("%f",&l);

                R=2*(w+l);
                printf("the perimeter of the rectangle is : %f",R);
                break;

              case 2:
              printf("to calculate the area of rectangle");
                printf("enter the value of w: "); // w is width of rectangle
                scanf("%f",&w);

                printf("enter the value of l: "); //l is the length of rectangle
                scanf("%f",&l);

                areaofrectangle=(w*l);
                printf("the area of the rectangle is  : %f",areaofrectangle);
                break;
              }
              break;
       default:
       printf("enter invalid number"); 
    }
    return 0;

}
