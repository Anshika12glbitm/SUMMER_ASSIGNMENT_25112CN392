//write a code to make a student record program using strings and arrays

#include<iostream>
#include<string>

using namespace std;

const int max_size=100;

void add_record(int rollno[max_size],string name[max_size],double cgpa[max_size],int &size)
{
    int roll;

    if(size>=max_size)
    {
        cout<<"Sorry ! Size is full cannot add more records ."<<endl;
    }


    cout<<"Enter the roll number of the student =  ";
    cin>>roll;
    cin.ignore();

    for(int i=0;i<size;i++)
    {
        if(rollno[i]==roll)
        {
            cout<<"Records of student with this rollno already exists ."<<endl;
        }
    }
    rollno[size]=roll;
    
    cout<<"Enter the name of the student = ";
    getline(cin, name[size]);

    cout<<"Enter the CGPA of the student = ";
    cin>>cgpa[size];

    if(cgpa[size]<0 || cgpa[size]>10)
    {
        cout<<"Invalid cgpa (cgpa can not excced 10 and cannot preceed 0)"<<endl;
    }

    cout<<"Record of student with rollno "<<roll<<" is added successfully . "<<endl;

    size++;

}

void view_record(int rollno[max_size],string name[max_size],double cgpa[max_size],int size)
{
    if(size==0)
    {
        cout<<"The record system is empty...there is no record of any student ."<<endl;
    }

    cout<<"Student Record List "<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"Roll Number : "<<rollno[i]<<endl;
        cout<<"Name        : "<<name[i]<<endl;
        cout<<"CGPA        : "<<cgpa[i]<<endl;
        cout<<"---------------------------------------------"<<endl;

    }
}

void update_cgpa(int rollno[max_size],string name[max_size],double cgpa[max_size],int size)
{
    int roll;
    double new_cgpa;
    if(size==0)
    {
        cout<<"There is no record ..."<<endl;
    }

    cout<<"Enter the rollno fo the student whose cgpa is to be updated = ";
    cin>>roll;

    for(int i=0;i<size;i++)
    {
        if(roll!=rollno[i])
        {
            cout<<"Record with this rollno does not exist ."<<endl;
        }
        else if(roll==rollno[i])
        {
            cout<<"Current CGPA is : "<<cgpa[i]<<endl;
            cout<<"Enter the updated CGPA : ";
            cin>>new_cgpa;

            cgpa[i]=new_cgpa;

            cout<<"CGPA updated successfully!!"<<endl;
        }
    }
}

void search_record(int rollno[max_size],string name[max_size],double cgpa[max_size],int size)
{
    if(size==0)
    {
        cout<<"There is no record added yet...."<<endl;
    }

    int roll;
    cout<<"Enter the rollno = ";
    cin>>roll;

    for(int i=0;i<size;i++)
    {
        if(roll==rollno[i])
        {
            cout<<"Record found !!"<<endl;
            cout<<"--------------------------------"<<endl;
            cout<<"Name   | "<<name[i]<<endl;
            cout<<"Rollno | "<<rollno[i]<<endl;
            cout<<"CGPA   | "<<cgpa[i]<<endl;
            cout<<"--------------------------------"<<endl;
        }   
    }

    cout<<"record with this rollno not found !"<<endl;

}
int main()
{
    int choice,size=0 ;
    int rollno[max_size];
    double cgpa[max_size];
    string name[max_size];

    do
    {
       cout<<"\n------------------------------------------------"<<endl;
        cout<<"            Student Record System"<<endl;
        cout<<"------------------------------------------------"<<endl;

        cout<<"Main Menu : "<<endl;
        cout<<"1. Add a new record ."<<endl;
        cout<<"2. View all records ."<<endl;
        cout<<"3. Make changes in the recorded CGPA ."<<endl;
        cout<<"4. search a record by student's rolll number ."<<endl;
        cout<<"5. Exit "<<endl;

        cout<<"Enter your choice (1-5) = ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                add_record(rollno,name,cgpa,size);
                break;
            }
            case 2 :
            {
                view_record(rollno,name,cgpa,size);
                break;
            }
            case 3 :
            {
                update_cgpa(rollno,name,cgpa,size);
                break;
            }
            case 4 :
            {
                search_record(rollno,name,cgpa,size);
                break;
            }
            case 5 :
            {
                cout<<"Exiting....."<<endl;
                break;
            }
            default :
            {
                cout<<"Invalid option ."<<endl;
            }
        }
    } while (choice!=5);

    return 0;
    
}