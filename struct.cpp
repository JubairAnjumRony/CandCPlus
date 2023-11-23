#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct student{
    int age;
    char name[25];
};

int main(){
    struct student s1={1,"varun"};
    printf("Name of the Student1: %s\n",s1.name);
    printf("Age of the Student1:%d\n",s1.age);
    return 0;
}
