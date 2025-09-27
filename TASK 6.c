#include <stdio.h>
#include <math.h>

int main () {
                      //
  float emi,rate,interest,total;  //P = Principal loan amount, 𝑛 = Number of months, r = Monthly interest rate
  float principal;
  int year;
  int choices;
  float monthlyRate;


  printf("----monthly installment system-----\n");
  printf("enter the loan amount :  \n");
  scanf("%f",&principal);

  printf("enter the years : \n");
  scanf("%d",&year);

  printf("enter the annual interest rate : \n");
  scanf("%f",&rate);

  printf("enter the type of interest :  \n");
  printf("1. simple interest \n");
  printf("2. compound  interest   \n");
  scanf("%d",&choices) ;

  int months=year*12;

  switch(choices) {

    case 1:
       interest = (principal * rate * year) / 100.0;
            total = principal + interest;
            emi = total / months;

            printf("\nLoan Type: Simple Interest");
            printf("\nTotal Payable: %.2f", total);
            printf("\nMonthly Installment (EMI): %.2f\n", emi);
            break;

        case 2:
           monthlyRate = rate / (12 * 100.0); // annual rate → monthly decimal
            emi = (principal * monthlyRate * pow(1 + monthlyRate, months)) /
                  (pow(1 + monthlyRate, months) - 1);
            total = emi * months;

            printf("\nLoan Type: Compound Interest (EMI method)");
            printf("\nPrincipal: %.2f", principal);
            printf("\nTotal Payable: %.2f", total);
            printf("\nMonthly Installment (EMI): %.2f\n", emi);
            break;

        default:
            printf("\nInvalid choice! Please select 1 or 2.\n");
    }

       
   return 0;
  }
  
