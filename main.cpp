#include <iostream>
using namespace std;



int main() {

    bool isMale = false;
    bool isTall = false;
    if(isMale && isTall) {
        cout << "you are a tall male";
    } else if(isMale && !isTall) {
        cout << "You are a short male";
    } else if (!isMale && isTall) {
        cout << "You are a tall female";
    } else {
        cout << "You are a short female";
    }

    return 0;
}