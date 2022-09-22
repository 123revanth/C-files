#include <stdio.h>

int main(){

    int number;
    printf("enter a number:");
    scanf("%d", &number);

    printf("factors are:");

    for(int i = 1; i <= number; i++ ){
        if(number % i == 0){
            printf("%d ", i);
        }

    }

    return 0;

}
