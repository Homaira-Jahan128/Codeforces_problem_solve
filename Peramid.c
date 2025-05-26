#include <stdio.h>

int main() {
    long long int n, fact=1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
       fact=fact*i;
    }
    printf("%lld",fact);

    if(n<=6){
        long long int ans=fact%10000;
        printf("%lld",ans);
    }
    else{
        long long int x[4];
        for(int i = 3; i >=0; i--) {
            x[i]=fact%10;
            fact=fact/10;
        }
        // for (int i = 0; i <4; i++) {
        //     printf("%lld",x[i]);
        // }
    }
   

    return 0;
}