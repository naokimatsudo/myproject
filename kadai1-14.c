#include<stdio.h>
#include<stdlib.h>

typedef struct mer {
    char code[10];
    char name[40];
    int price;
} mer;

int main(){
    int i;
    mer shouhin[100];

    for(i = 0; i < 3; i++){
        scanf("%s %s %d",shouhin[i].code,shouhin[i].name,&shouhin[i].price);
    }
    printf("\n");

    for(i = 0; i < 3; i++){
        printf("商品コード：%s\n",shouhin[i].code);
        printf("商品名：%s\n",shouhin[i].name);
        printf("値段：%d\n\n",shouhin[i].price);
    }
}