//Write a program to Create ATM simulation

#include<iostream>
using namespace std;
int main()
{
    double balance = 50000;
    int pin = 1206,entered_pin,choose;
    double deposit_amount,withdraw_amount;
    cout<<"----- WELCOME TO THE CITIZEN BANK ATM -----"<<endl;

    cout<< "Enter your 4 digit pin = ";
    cin>>entered_pin;

    if(pin!=entered_pin)
    {
        cout<<"Sorry , incorrect pin . Try again ."<<endl;
        return 0 ;
    }

    do
    {
        cout<<" ================================= "<<endl;
        cout<<"         ATM Main Menu             "<<endl;
        cout<<" ================================= "<<endl;


        cout<<" 1. Check balance "<<endl;
        cout<<" 2. Deposit Money "<<endl;
        cout<<" 3. Withdraw cash "<<endl;
        cout<<" 4 Exit the main menu "<<endl;

        cout<<"Select an option (1-4)  ";
        cin>>choose;

        
        switch (choose)
        {
            case 1:
            {
                cout<<"Current balance is "<<balance <<endl;
                break;
            }
            case 2:
            {
                cout<<"Enter the deposit amount : ";
                cin>>deposit_amount;

                if(deposit_amount<=0)
                {
                    cout<<" sorry ! invalid amount . Deposit failed . "<<endl;
                }
                else
                {
                    cout<<"Success ! Your "<<deposit_amount<<" has been deposited successfully ."<<endl;
                    balance = balance + deposit_amount;
                    cout<<"Your New balance is : "<<balance;
                }
                break;
            }
            case 3 :
            {
                cout<<"Enter the amount you wish to withdraw : ";
                cin>>withdraw_amount;

                if(withdraw_amount>balance)
                {
                    cout<<"Insufficient funds ! YOur current balance is : "<<balance;
                }
                else if(withdraw_amount<=0)
                {
                    cout<<"Invalid amount ! Transaction failed .";
                }
                else
                {
                    cout<<"Please collect your cash ."<<endl;
                    balance = balance-withdraw_amount;
                    cout<<"Remaining balance is : "<<balance;
                }
                break;
            }
            case 4:
            {
                cout<<"Thankyou for using Citizen bank ATM . Goodbyee"<<endl;
                break;
            }
            default:
            
             cout<<"Invalid choice ! Please pick the option from the menu ."<<endl;
             break;
        }
    } while (choose!=4);
    
    return 0;
}