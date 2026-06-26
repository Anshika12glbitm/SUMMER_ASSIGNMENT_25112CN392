//Write a program to Create number guessing game.

#include<iostream>
using namespace std;

void play_number_guessing_game()
{
    int choose,max,min=1,chances,attempts,number,level,guess;
    cout<<"==================================="<<endl;
    cout<<"Welcome to the number guessing game"<<endl;
    cout<<"==================================="<<endl;

    cout<<"Choose the difficulty level:"<<endl;
    cout<<" 1 for easy     ( {1-50} , 7 chances)"<<endl;
    cout<<" 2 for moderate ( {1-100} , 5 chances)"<<endl;
    cout<<" 3 for difficult ( {1-200} , 3 chances)"<<endl;
    cout<<" 4 for exit "<<endl;

    cout<<"Enter the desired level to proceed the game = ";
    cin>>choose;

    switch(choose)
    {
        case 1 :
        max =50,chances=7,level=1;
        break;

        case 2 :
        max=100,chances=5,level=2;
        break;

        case 3 :
        max=200,chances=3,level=3;
        break;

        case 4:
        cout<<"Exiting the game . see you again!! "<<endl;
        return;

        default:
        cout<<"Invalid choice "<<endl;
        return;

    }
    number = (rand()%max)+1;
    attempts=0;

    cout<<"You have chosen level "<<level<<" hence you have to guess the number between 1 and "<<max<<" and you have "<<chances<<" chances"<<endl;
    cout<<"Lets begin -----> "<<endl;

    while(attempts<chances)
    {
        cout<<"Enter your guess number (or enter -1 to quit the game ) : ";
        cin>>guess;

        if(guess==-1)
        {
            cout<<"You are quitting the game ! Your number was "<<number;
        }
        attempts++;

        if(guess==number)
        {
            cout<<"Correct ! you have guessed the number. The Guessing number is "<< number;
        }
        else if(guess>number)
        {
            cout<<"Too high ! Try again "<<endl;
        }
        else if(guess<number)
        {
            cout<<"Too low ! Try again "<<endl;
        }

        if(chances==attempts)
        {
            cout<<"Game over ! Your number was "<<number;
        }

    }

}
int main()
{
    play_number_guessing_game();
    return 0;
}