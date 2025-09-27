#include <stdio.h>
int main() {
   


  char username[20];
  int  password;
   
  printf("----LOGIN SYSTEM----- \n");

  printf("enter the username : \n");
  scanf("%s",username);

  printf("enter the password :  \n");
  scanf("%d",&password);

  if(username[0]=='a' && username[1]=='d' && username[2]=='m' && username[3]=='i' && username[4]=='n' && username[5]=='\0')  
    {
    if(password==1234){
        printf("LOGIN SUCCESSFUL! \n");
    }
    else{
        printf("the password is incorrect \n");
    }

  }
else{
    printf("INVALID USERNAME ");
}
  return 0;
}
