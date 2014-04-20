#include <iostream>
#include <stdio.h>
#include <assert.h>
#include "strcpy.h"
#include "strlen.h"
#include "define_type.h"

#include "timer.h"//[n]timer test

using namespace std;


union
{
    int i;
    char x[2];
}a;

int func(int x)
{
    int countx =0;
    while(x)
    {
        countx ++;
        x = x&(x-1);
        printf("x:%d\n",x);
    }
    return countx;
}




int main()
{

    Timer planning;
    Timer coding(2,40);
    Timer fixing(5,55);
    Timer total;

    cout<<"planning timer = ";
    planning.Show();
    cout<<endl;

    cout<<"coding timer = ";
    coding.Show();
    cout<<endl;

    cout<<"fixing timer = ";
    fixing.Show();
    cout<<endl;

    total = coding.Sum(fixing);
    cout<<"codeing.sum(fixing) = ";
    total.Show();
    cout<<endl;



    a.x[0]=10;
    a.x[1]=1;
    printf("%d\n",a.i);

    char buf[128];
    strcpy(buf,"nihoamaa");
    printf("%s\n",buf);



    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "func(999)"<<func(99999)<<endl;
    while(1);
    return 0;
}




