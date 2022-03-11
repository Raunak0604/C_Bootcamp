#include<stdio.h>
int main()
{
   int num1,num2,num3;
   
   printf("Enter three number \n");
   scanf("%d %d %d",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3)){
       printf("Number1 is greatest \n");
   }
      
   else if((num2>num3)&&(num2>num1)){
       printf("Number2 is greatest \n"); 
   }
      
   else{
       printf("Number3 is greatest \n");
   }
      
   return 0;
   
}
