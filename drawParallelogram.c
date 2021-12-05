#include <stdio.h>
int main() {
    drawTriUp();
    drawSquare();
    drawTriDown();
    return 0;
}

int drawSquare(){
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("*");

        }
        printf("\n");
    }
}

int drawTriUp(){
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}

int drawTriDown(){
    int i,j;

    for(i=4;i>0;i--){
        for(j=0;j<4-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
