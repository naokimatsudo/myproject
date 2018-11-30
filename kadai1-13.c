//scanfはキーボードに入力された値を変数に格納する関数
//scanfには値を教えるのではなく、格納する場所（アドレス）を教えなければならない。つまりポインタを渡す。
//これをポインタ渡しという、対義語は値渡しという
//呼び出す関数は使用する前に記述しておく必要がある

#include<stdio.h>
#include<stdlib.h>

void exchange (int *x, int *y){
    int a = *x;

    *x = *y;
    *y = a;
    
    return;
}

int main(){
    //ポインタはアドレスを指定しなければならない。らしい。
    int a;
    int b;
    int *x = &a;
    int *y = &b;

    printf("二つの整数値を入力して下さい:");
    scanf("%d %d", x, y);

    printf("変数xの値は%d,変数yの値は%dです.\n",*x,*y);

    exchange (x, y);

    printf("exchange()を呼び出したあとの変数xの値は%d,変数yの値は%dです.\n",*x,*y);

}

