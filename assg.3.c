#include<stdio.h>

// int main(){                         //que.1
//     char ch;
//     int n;
//     printf("Enter the charter no : ");
//     scanf("%c",&ch);
//     printf("Enter  the num : \n");
//     scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//     printf("%c ",ch);
//    }
    
// }

// int main(){                            //que.2
//     int n;
//     printf("Enter the table no : ");
//     scanf("%d",&n);
//     for(int i = 1;i<=10;i++){
//         int c= n*i;
//         printf("%d * %d = %d \n",n,i,c);
//     }
// }

int main(){                               //que.
    int n ;
    printf("Enter the value : ");
    scanf("%d",&n);
   
    int d1 = n%10;
    int d2 = (n%100)/10;
    int d3 = (n%1000)/100;
    int d4 = (n-d3)/1000;
   
int sum = d1+d2+d3+d4;
    printf("Digits: %d%d%d%d \n",d1,d2,d3,d4);
    printf("Sum: %d",sum);
    

}

