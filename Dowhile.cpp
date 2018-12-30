#include <iostream>
#include <vector>
#include <string>
#include <fstream>

//DO WHILE LOOP PRPGRAM USING C++

using namespace std;

int main() {

    string numberofGuessed;

    int intNumberGuessed = 0;

    do {
        cout << "Guess between 1 and 10 : ";
        getline(cin , numberofGuessed);

        intNumberGuessed = stoi(numberofGuessed);
        cout <<intNumberGuessed <<endl;


    } while (intNumberGuessed !=4 );

    cout <<"you won !" <<endl;

    //system('pause');
    return 0;
}
