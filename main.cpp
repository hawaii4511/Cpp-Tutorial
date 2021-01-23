#include <iostream>
using namespace std;



int main() {

    int index = 1;
    while (index <=5) {
        cout << index << endl;
        index++;
    }

    int nums[]={10,20,50,70,30};
    for(int i=0; i < 5; i++){
        cout << nums[i] << endl;
    }
    
    return 0;
}