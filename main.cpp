#include <iostream>
using namespace std;

//Movie data type
class Movie {
    //Only code inside Movie class can access private section
    private:
        string rating;

    //Any other code can access a public category
    public:
        string title;
        string director;
        
        //Constructor
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }

};

int main() {

    //Getters and Setters allow you to control the attributes inside of Classes. So that you can't give a movie a rating of "Dog"

    //Object
    Movie avengers("The Avengers", "Joss Whedon", "PG-15");

    //avengers.setRating("Dog");
    cout << avengers.getRating();
 
    return 0;
}