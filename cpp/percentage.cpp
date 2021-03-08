#include <iostream>
using namespace std;
int main()
{
    int marks [] ={ 25,65,46,69,98,78};
    int len = sizeof(marks) / sizeof(marks[0]);
    int max_marks = len *100;
    int total =0 ;
    char grades = ''