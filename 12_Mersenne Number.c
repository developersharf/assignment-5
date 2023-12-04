write the output: 

#include <stdio.h>
#include <math.h>

int main()
{
   int count=0;
   int a,j;
   for(int i=2;i<14;i++){
     a = pow(2,i) - 1;
     for(j=2;j<a;j++){
     if(a%j == 0){
     count++;
   }
   }
     if(count==0){
       printf("%d\n",a);
   }
   count=0;
   }
return 0;
}
