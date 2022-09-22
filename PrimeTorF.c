#include <stdio.h>
#include <stdbool.h>

int main(){

    int number;
    printf("enter a number:");
    scanf("%d", &number);

    bool prime = true;

    for(int i = 2; i < number; i++ ){
        if(number%i == 0){
            prime = false;
        }

    }

    if(prime == false){
        printf("The entered value is not prime");
    }
    else{
        printf("The entered value is prime");
    }

    return 0;

}
