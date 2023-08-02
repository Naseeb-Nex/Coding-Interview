// Largest of three numbers
#include<stdio.h>

int main(){
    int n1, n2, n3;
    printf("Enter the first number : ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number : ");
    scanf("%d", &n3);

// With Else If
    if(n1 > n2 && n1 > n3){
        printf("%d is the largest number\n", n1);
    }
    else if(n2 > n3){
        printf("%d is the largest number\n", n2);
    }
    else{
        printf("%d is the largest number\n", n3);
    }

// With nested if else
    if(n1 > n2){
        if(n1 > n3){
            printf("%d is the largest number\n", n1);
        }
        else{
            printf("%d is the largest number\n", n3);
        }
    }
    else{
        if(n2 > n3){
            printf("%d is the largest number\n", n2);
        }
        else{
            printf("%d is the largest number\n", n3);
        }
    }
    return 0;
}