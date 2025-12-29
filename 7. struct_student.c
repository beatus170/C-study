#include <stdio.h>

struct Student {

    char name[20];
    int age;
};

int main() {
    
    struct Student s1 = {"Yeojin", 6};

    
    printf("name: %s\n", s1.name);
    printf("age: %d\n", s1.age);

    return 0;
}