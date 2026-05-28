// Sum of n natural numbers

// #include<iostream>
// using namespace std;

// int sum(int n)
// {
//     int sum=0;
//     for(int i =1; i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     return sum ;
// }
// int main()
// {
//     int n;
//     cout<<"Enter a positive integer = ";
//     cin>>n;

//     cout<<"Sum of first "<< n <<" natural numbers = "<< sum(n);

// }



// Multiplication table of a number

// #include<iostream>
// using namespace std;
// void table(int num)
// {
//     for(int i =1; i<=10; i++)
//     {
//         cout<< num << "*" << i<< "= " << num*i <<endl;
//     }
// }
// int main()
// {
//     int num,result;
//     cout<<"Enter a whole number = ";
//     cin>>num;
    
//     cout<<"Multiplication table of "<< num <<":"<<endl;
//     table(num);

//     return 0;
// }



// factorial of a number
// #include<iostream>
// using namespace std;
// int factorial (int num)
// {
//     int fact=1;
//     for(int i=1; i<=num ; i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }
// int main()
// {
//     int num;
//     cout<<"Enter a number : ";
//     cin>>num;

//     cout<< "Factorial of " << num<< " = "<< factorial(num);
// }



// Count digits in a number.

// #include<iostream>
// using namespace std;
// int count(int num)
// {
//     int count =0;

//     if (num==0)
//     {
//         return 1;
//     }

//     if (num <0)
//     {
//         num=-num;
//     }

//     while(num>0)
//     {
//         num=num/10;
//         count++;
//     }

//     return count;
// }
// int main()
// {
//     int num;
//     cout<<"Enter a number = ";
//     cin>>num;

//     cout<<num<<" has "<<count(num)<<  " digits .";
// }