#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name = "张佳预";

    int age = 23;

    int score = 90;
};

struct Teacher
{
    string name = "贾同";
    int age = 45;
    Student stu;
};

struct Coder
{
    const string name = "zjy";
    int age = 20;
    int salary = 10000;
};

void definestruct();

void structarray();

void structpointer();

void structinstruct();

void structinfunc(Teacher tea);

void structinfunc1(Teacher *tea);

void conststruct();

void conststruct1(const Student *stu);