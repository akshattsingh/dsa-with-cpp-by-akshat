// NULL, void & dangling pointers

#include <iostream>
using namespace std;

int main() {
    // NULL pointer -> doesn't point to any memory location
    int *p1 = NULL;

    // Void pointer -> doesn't have a return type
    int a = 10;
    void *p2 = &a;
    cout << "Value using void pointer: " << *(int *)p2 << endl;

    // Dangling pointer -> still points to the same memory location even after the pointer variable has been deleted
    int *p3 = new int(50);
    delete p3;
    p3 = NULL;

    return 0;
}
