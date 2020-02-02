#include<stdio.h>
typedef struct person {
    char name[100];
    int age;
} person;

person read(person p){
    printf("enter the name :");
    scanf("%s", p.name);
    printf("enter the age: ");
    scanf("%d", &p.age);
    return p;
}

void dis(person p){
    printf("name: %s", p.name);
    printf("\nage: %d", p.age);
}

int main (){
    person p;
    printf("enter detail of a person ");
    p = read(p);
    printf("the details of person is : \n");
    dis(p);

}