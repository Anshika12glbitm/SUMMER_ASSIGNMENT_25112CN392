//
#include<iostream>
using namespace std;

const int Max_size=100;

void add_element(int arr[Max_size],int &size)
{
    int pos,element;
    if(size>=Max_size)
    {
        cout<<"Sorry !! Array size is full cannot add more elements . "<<endl;
    }

    cout<<"Enter the position at which element is to be added (0 to "<<size<<")= ";
    cin>>pos;

    if(pos<0 || pos>size)
    {
        cout<<"Invalid Poisition . "<<endl;
    }

    cout<<"enter the element to be added = ";
    cin>>element ;

    for(int i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }

    arr[pos]=element;
    size++;
    cout<<"Element added successfully !! "<<endl;//1
}

void dlt_element(int arr[Max_size],int &size)
{
    int pos;

    if(size==0)
    {
        cout<<"The array is empty ... Cannot delete anything ."<<endl;
    }

    cout<<"Enter the position of the element to be deleted = ";
    cin>>pos; //0

    if(pos>=size || pos<0)
    {
        cout<<"Invalid Position !!"<<endl;
    }

    int temp_deleted = arr[pos];

    cout<<"Deleting the element "<<arr[pos]<<"from the position "<<pos<<endl;

    for(int i=pos;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }

    cout<<temp_deleted<<" deleted successfully from the array ."<<endl;
    size--;

}

void search_element(int arr[Max_size],int &size)
{
    int element,pos,found=0;

    if(size==0)
    {
        cout<<"the array is empty ...Cannnot search anything"<<endl;
    }

    cout<<"Enter the element to be searched = ";
    cin>>element;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            pos=i;
            found=1;
        }
    }

    if(found==1)
    {
        cout<<"Element found at "<<pos+1<<" position in the array ."<<endl;
    }
    else
    {
        cout<<"Element not found ."<<endl;
    }
}

void display_array(int arr[Max_size],int &size)
{
    cout<<"Displaying the array ........"<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int choice ;
    int arr[Max_size],size=0;
    do
    {
        cout<<"\n------------------------------------------------"<<endl;
        cout<<"            Array management system"<<endl;
        cout<<"------------------------------------------------"<<endl;

        cout<<"Main Menu : "<<endl;
        cout<<"1. Add an element ."<<endl;
        cout<<"2. Delete an element ."<<endl;
        cout<<"3. Search an element ."<<endl;
        cout<<"4. Display the array ."<<endl;
        cout<<"5. Exit "<<endl;

        cout<<"Enter your choice (1-5)";
        cin>>choice;

        switch(choice)
        {
            case 1 :
            {
                add_element(arr,size);
                break;
            }
            case 2 :
            {
                dlt_element(arr,size);
                break;
            }
            case 3 :
            {
                search_element(arr,size);
                break;
            }
            case 4:
            {
                display_array(arr,size);
                break;
            }
            case 5 :
            {
                cout<<"Exiting ....."<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid option !! Please choose between 1 to 5 only ."<<endl;
            }
        }
    } while (choice!=5);
    return 0;
}