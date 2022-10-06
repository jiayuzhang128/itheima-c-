#include "head.h"

void pointerspace()
{
    int *p;
    int a = 10;
    p = &a;

    cout << "sizeof int * = " << sizeof(int *) << endl;
    cout << "sizeof float * = " << sizeof(float *) << endl;
    cout << "sizeof double * = " << sizeof(double *) << endl;
    cout << "sizeof long long * = " << sizeof(long long *) << endl;
    cout << "sizeof char * = " << sizeof(char *) << endl;
}