/*
nếu nhập n là số chẵn thì sẽ có công thức: n/2
         n là số lẻ thì sẽ có công thức: -(n/2 + 1)
         --> result
*/

#include <stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);

    long long result;
    if( n % 2 == 0){            // Xác nhân n có phải số chẵn?
        result = n / 2;
    }else{
        result = -( n / 2 + 1);
    }
    printf("%lld", result);

    return 0;
}
