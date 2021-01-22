#include <iostream>

using namespace std;

void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;
}

int main() {

    cout << "Top" << endl;
    sayHi("Hannah", 50);
    sayHi("Mae", 30);
    sayHi("Dan", 10);
    cout << "Bottom";

    return 0;
}