#include <stdio.h>
#include <stdbool.h>

int main(){

    int first [3][3] = {{0, 0, 0}, {0, 0 , 0}, {0, 0, 0}};
    int second [3][3] = {{0, 0, 0}, {0, 0 , 0}, {0, 0, 0}};
    int third [3][3] = {{0, 0, 0}, {0, 0 , 0}, {0, 0, 0}};
    int fourth [3][3] = {{0, 0, 0}, {0, 0 , 0}, {0, 0, 0}};
    int fifth [3][3] = {{0, 0, 0}, {0, 0 , 0}, {0, 0, 0}};
    int sixth [3][3] = {{0, 0, 0}, {0, 0 , 0}, {0, 0, 0}};

    printf("include the first side");
    
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            scanf("%d", &first[i][j]);
        }
    }


    printf("include the second side");
    
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            scanf("%d", &second[i][j]);
        }
    }


    printf("include the third side");
    
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            scanf("%d", &third[i][j]);
        }
    }


    printf("include the fourth side");
    
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            scanf("%d", &fourth[i][j]);
        }
    }

    printf("include the fifth side");
    
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            scanf("%d", &fifth[i][j]);
        }
    }

    printf("include the sixth side");
    
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            scanf("%d", &sixth[i][j]);
        }
    }

     printf("The included first side \n");

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

        printf("The included second side \n");

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    printf("The included third side \n");

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            printf("%d ", third[i][j]);
        }
        printf("\n");
    }

    printf("The included fourth side \n");

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            printf("%d ", fourth[i][j]);
        }
        printf("\n");
    }

    printf("The included fifth side \n");

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            printf("%d ", fifth[i][j]);
        }
        printf("\n");
    }

    printf("The included sixth side \n");

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            printf("%d ", sixth[i][j]);
        }
        printf("\n");
    }

    return 0;

}
