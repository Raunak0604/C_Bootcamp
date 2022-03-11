#include <stdio.h>

int main(){
    
    int num1,num2,num3,num4;
   
   printf("Enter four number \n");
   scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

   if((num1>num2) && (num1>num3) && (num1>num4)){
       printf("Number1 is greatest \n");
   }
      
   else if((num2>num1) && (num2>num3) && (num2>num4)){
       printf("Number2 is greatest \n"); 
   }

    else if((num3>num1) && (num3>num2) && (num2>num4)){
       printf("Number3 is greatest \n"); 
   }
      
   else{
       printf("Number4 is greatest \n");
   }

    return 0;
}