//Write a program to Create quiz application.

#include<iostream>
using namespace std;
void play_quiz()
{

    char answer,start;
    int marks = 0;
    int passing_score = 11.25;

    cout<<" ========================================= "<<endl;
    cout<<"         WELCOME TO THE QUIZ GAME           "<<endl;
    cout<<" ========================================= "<<endl;

    cout<<"Please follow the following instructions : "<<endl;
    cout<<"Quiz contains 3 Questions ."<<endl;
    cout<<"Each question is of 5 marks."<<endl;
    cout<<"Choosing the correct answer gives you full 5 marks and incorrect answer gives you 0 marks ."<<endl;
    cout<<"There is no negative marking for choosing the wrong answer ."<<endl;
    cout<<"Please select option A,B,C,D"<<endl;
    cout<<"Press s to start "<<endl;
    cin>>start;
    if(start=='s' || start =='S')
    {
        cout<<"Lets begin ..... "<<endl;

        cout<<"Question 1 : "<<endl<<"Which planet is known as the Red Planet?"<<endl;
        cout<<" A : Saturn "<<endl<<" B : Mars "<<endl<<" C : Earth "<<endl<<" D : Jupiter"<<endl;
        cin>>answer;

        if(answer=='B')
        {
           cout<<"Correct Answer !"<<endl;
           marks+=5;
        }
        else
       {
          cout<<"Wrong Answer !"<<endl;
       }

       cout<<"Question 2: "<<endl<<"Which is the longest river on Earth?"<<endl;
       cout<<" A : nile"<<endl<<" B : Ganga "<<" C : Yamuna "<<" D : Amazon"<<endl;
       cin>>answer;

       if(answer=='A')
       {
         cout<<"Correct Answer !"<<endl;
         marks=marks+5;
       }
       else
       {
         cout<<"Wrong Answer !"<<endl;
       }

       cout<<"Question 3: "<<endl<<"Which country is known as the Land of the Rising Sun?"<<endl;
       cout<<" A : China"<<endl<<" B : Japan "<<" C : South Korea "<<" D : Thailand"<<endl;
       cin>>answer;

       if(answer=='B')
        {
          cout<<"Correct Answer !"<<endl;
          marks+=5;
        }
        else
        {
          cout<<"Wrong Answer !"<<endl;
        }

        cout<<"Your score is : "<<marks<<endl;

        if(marks==15)
        {
            cout<<"Congratulations ! You have scored 100 percent."<<endl;
        }
        else if(marks<passing_score)
        {
            cout<<"Sorry ! You have failed the exam . "<<endl;
        }
        else
        {
            cout<<"You have passed the exam ."<<endl;
        }
    
    }
    else
    {
        cout<<" You have entered the wrong value . Please press 'S' or 's to begin the quiz";
    }

}
int main()
{
    play_quiz();
    return 0;
}