// Chaston Davis
// The Guessing Game

#include <iosstream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int number, guess, numberofguesses;
    number = 1 +rand()%100;
    number = 1 + rand()%n;
    srand(time(NULL));
    cout<<"***Welcome to the GUESSING GAME!! ***"<<endl;
    cout<<"I have selected a number between 1 and 100. Can you guess it?"<<endl;
    cout<<"Enter your guess:"<<endl;
    cin>>guess;

    while (guess != number)
    {
        if (guess < number)
            cout<<"Your guess is too low. Try again!"<<endl;
        else
            cout<<"Your guess is too high. Try again!"<<endl;
        cin>>guess;
    }
    if (guess == number)
        cout<<"You Win!"<<endl;
        cout<<"Would you like to play again? Type -1 to play again"<<endl;
        cin>>numberofguesses;
        if (numberofguesses == -1)
            main();

        
        return 0;
}

/* Sample Run
thomas% a.out
***Welcome to the GUESSING GAME!! ***
I have selected a number between 1 and 100. Can you guess it?
Enter your guess:
50
Your guess is too low. Try again!
75
Your guess is too high. Try again!
62
Your guess is too low. Try again!
68
Your guess is too high. Try again!
65
You Win!
Would you like to play again? Type -1 to play again
-1
***Welcome to the GUESSING GAME!! ***
I have selected a number between 1 and 100. Can you guess it?
*/