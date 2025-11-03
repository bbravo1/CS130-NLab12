#include <iostream>
#include <memory>
using namespace std;

class MyClass{
    int size;
    shared_ptr<int []> numbers;
    public:
    MyClass(int s): size(s){
        numbers = make_unique<int []>(s);
        for(int i=0; i<size; i++)
            numbers[i]= i;
    }
    void printout(){
        for(int i=0; i<size; i++)
            cout << numbers[i] << "\t";
        cout << endl;
    }
};


int main()
{
    MyClass c1(5);
    c1.printout();
    MyClass c2(c1);
    c2.printout();


}