#include <iostream>

using namespace std;

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

