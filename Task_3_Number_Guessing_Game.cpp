#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1; // rand function generate random number 
    cout << "----------------------------Number Guessing Game Task------------------------- \n";
    cout<<endl;
    cout<<endl;
    do
    {
        cout << "Enter a guess between 1 to 100 : ";
        cin >> guess;
        tries++;
        if (guess > num)
            cout << "Too high!\n\n";
        else if (guess < num)
            cout << "Too low!\n\n";
        else
            cout << "\nCorrect! You got it in " << tries << " guesses!\n";
    } while (guess != num);
    return 0;
}
