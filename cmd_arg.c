#include<stdio.h>
// int main(int argc, char **argv){
//     printf("Inside main()...argumentcount %d",argc);
//     int i;
//     for(i = 0;i< argc; i++) {
//             printf("%s \n", argv[i]);
//     }
// }



// calloc()  ====> ptr = (castType*)calloc(n,size);
int main(){ 
    int i,num, *ptr,sum = 0;


    printf("Specify the value -  ",);
    scanf("%d",&num);

    if(ptr === NULL){
        printf("Error! memory not allocated");
        exit(0);
    }
    printf("Enter the element - ");
    for(i = 0;i<n;i++){
        scanf("%d",ptr+i);
        sum += *(ptr +1);

    }
    printf("Sum = %d",sum);
    free(ptr);
    return 0;
}

