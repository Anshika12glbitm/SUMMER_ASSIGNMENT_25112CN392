//Write a program to Create voting eligibility system.

#include<iostream>
using namespace std;
void check_voting_eligibility_system()
{
    int age;
    char citizen_choice;
    bool is_citizen= false;

    cout<<" =========================== "<<endl;
    cout<<"  Voting Eligibility System  "<<endl;
    cout<<" =========================== "<<endl;

    cout<<"Are you a citizen of a country (Y/N)"<<endl;
    cin>>citizen_choice;

    if(citizen_choice=='Y')
    {
        is_citizen=true;
    }
    else if(citizen_choice == 'N')
    {
        is_citizen=false;
    }
    else
    {
        cout << " Invalid input entry! Terminating application." << endl;
        return;
    }


    cout<<"Enter your age = ";
    cin>>age;

    if(age<=0 || age>120)
    {
        cout<<"Error: Invalid age value entered.";
    }
    cout<<"---- Processing report ----"<<endl;

    if (age >=18 && is_citizen)
    {
        cout<<"Status: ELIGIBLE TO VOTE!"<<endl;
        cout << "Please ensure you have registered your voter identification card." << endl;
    }

    else
    {
        cout << " Status: NOT ELIGIBLE TO VOTE." << endl;
    }
}
int main()
{
    check_voting_eligibility_system();
    return 0;
}