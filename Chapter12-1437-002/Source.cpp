#include <iostream>

using namespace std;

void demoPassByReference(int& a)
{
    cout << a << endl; 
}


int main()
{
    int a = 51; 


    cout << &a << endl; 

    int* pointerToA = &a; 
    cout << pointerToA << endl; 
    //cout << a * a << endl; 

    //if (a > 0 & a < 100)
    //cout << a << endl; 

    cout << *pointerToA << endl; //* acts as the DEREFERENCING operator here 

    return 0;
}