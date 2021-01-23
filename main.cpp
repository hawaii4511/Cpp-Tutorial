#include <iostream>
using namespace std;


int main() {

    // Pointers are types of information we can work with. So far we've look at different data like char, int, etc. Pointers are memory addresses.
    //Pointers are just another type of data that we can work with. A pointer variable is just a container to store a variable.
    // RAM is the active memory that programs use to store information. The computer uses memory to store values. Computer physically stores 30, and 2.7 in the memory of the comp.
    // Each value is stored inside the container of the memory. Each container has an address.
    // A memory address is a pointer. So accessing pointer (aka memory address) of this data is by using &variable. A pointer is a type of data and is just a memory address.
    // A pointer is the physical location in the memory RAM.
    //Dereferencing a pointer is grabbing the value inside the memory address (to use in the program).

    int age = 30; //30 is being stored in this variable called age
    int *pAge = &age; // variable (aka container) to store the pointer (aka memory address)
    double gpa = 2.7;
    double *pGpa = &gpa; // storing inside of it a memory address (aka pointer)
    string name = "Mike";
    string *pName = &name;

    cout << pAge << endl; // pointer
    cout << *pAge << endl; //dereference pointer
    cout << *&gpa << endl; //dereference pointer

    // To access physical memory address that the value 30 is stored... It's a hexadecimal number. This is where the value 30 lives.
    cout << "age: " << &age << endl;
    cout << "gpa: " << &gpa << endl;
    cout << "name: " << &name << endl;
 
    return 0;
}