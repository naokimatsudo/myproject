//kadai1-7
#include <stdio.h>

int fact(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fact(n-1);
    }
}

int main(){
    int n = 10;
    int number;
    printf("階乗計算したい文字を入力してください。\n");
    scanf("%d", &number);
    int res = fact(number);
    printf("the factorial %d is %d \n", n, res);
}