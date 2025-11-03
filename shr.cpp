#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr1 = make_unique<int>(100);

    shared_ptr<int> ptr2;
    ptr2 = ptr1;
    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    int *ptr;
    ptr = ptr2.get();
    cout << " Reference count " << ptr1.use_count() << endl;
    cout << "ptr value " << *ptr << endl;
}