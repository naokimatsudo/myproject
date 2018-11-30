#include<stdio.h>
#include<stdlib.h>

typedef struct person {
    char name[30];
    char email[40];
} personData;

typedef struct company {
    personData ceo;
    personData employees[100];
} companyData;

int main(){
    int i;
    companyData c;

    scanf("%s %s",c.ceo.name ,c.ceo.email);
    scanf("%s %s",c.employees[1].name,c.employees[1].email);

    printf("ceo.name:  %s\n",c.ceo.name);
    printf("ceo.email; %s\n",c.ceo.email);

    printf("employee.name: %s\n",c.employees[1].name);
    printf("employee.email: %s\n",c.employees[1].email);

}