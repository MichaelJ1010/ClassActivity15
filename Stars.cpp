#include <iostream>

using namespace std;

int main(){

    int numberOfRows;
    cout << "how many rows of stars do you want?" << endl;
    cin >> numberOfRows;

    for(int i = 0; i < numberOfRows; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}