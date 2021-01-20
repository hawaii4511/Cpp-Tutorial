#include <iostream>

using namespace std;

int main() {

    string phrase = "Giraffe Academy";
    string phrasesub;
    phrase[0] = 'B';
    cout << phrase.find("ffe", 3) << endl;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub;

    return 0;
}