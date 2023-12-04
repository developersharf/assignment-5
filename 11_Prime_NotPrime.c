#include <stdio.h>

int main(){

    int n, f = 0;
    scanf("%d", &n);

    for(int i = 2; i < n; i++){

        if(i%n == 0){
            f = 1;
            break;
        }
        else{
            f = 0;
            break;
        }
    }

    if(f == 1){
        printf("Not Prime\n");
    }
    else{
        printf("prime\n");
    }





    return 0;
}
