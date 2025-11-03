#include <iostream>
using namespace std;

int *myfn(){
    int num = 100;
   // int *ptr = &num;
   int *ptr = new int;
   *ptr = num;
    cout << "in the function " << *ptr << endl;
    //return ptr; if int but swapped to void
    return ptr;
}

int main (){
    int *ptr;
    ptr = myfn();
    cout << "in main " << *ptr << endl;
    return 0;
}