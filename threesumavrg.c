#include<stdio.h>

int main(){
    int n1, n2, n3;
    // Inputing values
    printf("Enter first digit: ");
    scanf("%d", &n1);
    printf("Enter second digit: ");
    scanf("%d", &n2);
    printf("Enter third digit: ");
    scanf("%d", &n3);

    // Calulation
    printf("\nSUM : %d", n1+n2+n3);
    printf("\nAVRG : %.2f", (float)((n1+n2+n3) / 3));
    return(0);
}