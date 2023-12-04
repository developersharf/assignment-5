#include <stdio.h>
int main(){

    int n, a, b, sum1 = 0, s, sum2 = 0, i, j;
    scanf("%d%d%d", &n, &a, &b);

    for(i = 1; i <= n; i++){
        sum1 = 0;
        j = i;
        while(j != 0){
            s = j % 10;
            sum1 = sum1 + s;
            j = j / 10;            
        }

        if(sum1 >= a && sum1 <= b){
            sum2 = sum2 + i;
        }
    }

    printf("%d", sum2);

    return 0;

}


