//

#include<iostream>
using namespace std;

double add(double num1,double num2)
{
    double result;
    result=num1+num2;
    return result;
}

double subtract(double num1,double num2)
{
    double result;
    result=num1-num2;
    return result;
}

double multiply(double num1,double num2)
{
    double result;
    result=num1*num2;
    return result;
}

double div(double num1,double num2)
{
    double result;
    result=num1/num2;
    return result;
}

int main()
{
    int choice ;
    double num_1,num_2,result;
    do
    {
        cout<<"--------------------------------------------"<<endl;
        cout<<"         WELCOME TO CALCULATOR"<<endl;
        cout<<"--------------------------------------------"<<endl;

        cout<<"Main menu : "<<endl;
        cout<<" 1. Addition"<<endl;
        cout<<"2. Subtraction "<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter the option (1-5) : ";
        cin>>choice;

        if(choice>=1 && choice<=4)
        {
            cout<<"Enter the first number = ";
            cin>>num_1;

            cout<<"Enter the second number = ";
            cin>>num_2;
        }
        switch(choice)
        {
            case 1:
            {
                result = add(num_1,num_2);
                cout<<num_1<<" + "<<num_2<<" = "<<result<<endl;
                break;
            }
            case 2:
            {
                result = subtract(num_1,num_2);
                cout<<num_1<<" - "<<num_2<<" = "<<result<<endl;
                break;
            }
            case 3:
            {
                result = multiply(num_1,num_2);
                cout<<num_1<<" * "<<num_2<<" = "<<result<<endl;
                break;
            }
            case 4:
            {
                result = div(num_1,num_2);
                cout<<num_1<<" / "<<num_2<<" = "<<result<<endl;
                break;
            }
            case 5 :
            {
                cout<<"Exiting...\nThankyou !!";
                break;
            }
            default:
            {
                cout<<"Invalid choice !! Enter the correct option to proceed .."<<endl;
            }
            
        }
    } while (choice!=5);
    
}