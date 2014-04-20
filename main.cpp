#include <iostream>
#include <stdio.h>
#include <assert.h>
#include "strcpy.h"
#include "strlen.h"
#include "define_type.h"




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
    }
    return countx;
}






int main()
{
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




