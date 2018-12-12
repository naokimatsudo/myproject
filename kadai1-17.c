#include<stdio.h>
#include<stdlib.h>

//コンピュータにおけるピリオドは「の」を表している
//typedef は型に他の名前をつけるコマンド
//scanfの戻り値はEOFファイルの終わりに来たらこれを返す

//構造体のポインタについて
//ピリオドと*（スター）だとピリオドを優先するつまり掛け算と足し算の関係の所の掛算がピリオドで足し算がスターに値する

typedef struct node{
    char name[50];
    char email[80];
    struct node* next;
} node;

int main(){
    node *a, *head;

    head = (node*)malloc(sizeof(node));
    a = head;

    while (scanf("%s %s", a->name, a->email)!=EOF){
        a->next = (node*)malloc(sizeof(node));
        a = a->next;
        a->next = NULL;
    }

    a = head;

    while(a->next->next !=NULL){
        printf("name; %s\n", a->name);
        printf("email; %s\n", a->email);
        printf("後続のノードへのポインタは; %p\n",a->next);
        a = a->next;
    }
}