#include<iostream>
using namespace std;
int main()
{
    int n; 
    int i=1;
    int a=rand()%100;
    cout<<"Guess the random number generated\n";
    cin>>n;
    do
    {
        if(n>a)
        {
            cout<<"The guessed number is too high.please guess the other number\n";
            cin>>n;
            
        }
        else if(n<a)
        {
            cout<<"The guessed number is too low.please guess the other number\n";
            cin>>n;
        }
        else
        {
            cout<<"The guessed number is correct. \n"<<"The random number generated is "<<a;
            cout<<endl;
            break;
        }
    }while(i=1);
    return 0;
}
