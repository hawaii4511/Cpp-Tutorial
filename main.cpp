#include <iostream>
using namespace std;


class Student {
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            } else {
                return false;
            }
        }
};

int main() {

    //Object functions aka instance functions. It's a function that we can put inside of one of our classes. 
    //Depending on the object that calls it, it's returning different things.

    Student student1("Jim","Business",2.4);
    Student student2("Pam","Art",3.6);

    cout << student2.hasHonors();
 
    return 0;
}