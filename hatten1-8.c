//方針
//新たに挿入したいリストの番号をiとすると
//まずは追加したいリストのアドレス、ポインタを用意する
//i-1の後続のノードを示すポインタnextにiのアドレスを代入し
//iの後続ノードを示すポインタnextにi+1のアドレスを代入する

#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    char name[50];
    char email[80];
    struct node* next;
} node;

int main(){
    node *a, *head;

    head = (node*)malloc(sizeof(node));
    a = head;

    int d=0;
    while (d<4){
        scanf("%s %s", a->name, a->email);
        a->next = (node*)malloc(sizeof(node));
        a = a->next;
        a->next = NULL;
        d++;
    }

    a = head;

    while(a->next !=NULL){
        printf("name; %s\n", a->name);
        printf("email; %s\n", a->email);
        printf("後続のノードへのポインタは; %p\n\n",a->next);
        a = a->next;
    }

    a = head;

    node *b, *heada;
    int x=0;
    int i=2;
    heada = (node*)malloc(sizeof(node));
    b = heada;
    printf("追加したい名前、メールと番号を入力して下さい");
    scanf("%s %s %d",b->name,b->email,&x);
    //printf("name; %s\n", b->name);
    //printf("email; %s\n", b->email);
   
    if(x>1){

        while(i < x){
            if(a->next == NULL){
                break;
            }
            a = a->next;
            i ++;
        }
        printf("%p %p\n\n",a,a->next);

        //printf("name; %s\n", a->name);
        //printf("email; %s\n", a->email);
        //printf("後続のノードへのポインタは; %p\n",a->next);
        if(a->next == NULL){
            a->next=b;
            printf("%p",a->next);
            a=head;
        }else{
        node *u;
        u=a->next;
        a->next = b;
        b->next=u;
        a = head;
        }
   }else{//x=1の時
       b->next=a;
       a = heada;
   }

    

    while(a->next !=NULL){
        printf("name; %s\n", a->name);
        printf("email; %s\n", a->email);
        printf("後続のノードへのポインタは; %p\n\n",a->next);
        a = a->next;
    }

    
    

}




