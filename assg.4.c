#include<stdio.h>
// int main()
// {
//     int n;
//     int fact=1;
//     printf("Enter the no : ");
//     scanf("%d",&n);
//  for(int i = 1;i<=n;i++)
//  {
//     fact *= i;
    
//  }printf("Factorial : %d \n",fact);
// }


// int main(){
//     int num1 = 5;
//     int num2 = 3;
//     int sum,prod;
//     sumprod(num1,num2,&sum,&prod);
//     printf("Sum = %d, Product = %d",sum,prod);
// }

// void sumprod(int n1,int n2,int *s,int *p){
//     *s = n1+n2;
//     *p = n1*n2;


// }

int main(){          //qur. to swap the values 

   int a=5;
   int b=4;
   int *pp=&b;
   int *p=&a;
   printf("Assigned address :%u,Assigned values : %d \n",p,*p);
  
      pp=p;
    printf("Assigned address :%u,Assigned values : %d \n",p,*p);
    printf("%d,%d,%d,%d",a,b,*p,*pp);
}

