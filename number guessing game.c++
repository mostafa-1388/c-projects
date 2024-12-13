#include <iostream>

using namespace std;
int main() {

    int num;
    int guess;
    int tries;

    srand (time(nullptr));
    num = (rand() % 100) + 1;


    cout << "guess the number between 1 and 100: " "\n";

    do{
        cout << "Enter your guess BETWEEN (1-100): ";
        cin >> guess;
        tries++;

    if (guess > num){
        cout << "Too high! \n";
    } else if (guess < num){
    cout << "Too low! \n";
    } else {
        cout << "Correct guess! number of tries: " << tries << '\n';
        cout << "Thanks for playing! \n";
    }
    } while(guess != num);
    return 0;
}