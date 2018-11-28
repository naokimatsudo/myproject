#include <stdio.h>
int main(){
    for(int i=0; i < 128; i++){
        char c = (char)i;
        //%xは整数を16進数表示する指定子
        printf("%d (%x) : %c\n", c, c, c);
    }
}