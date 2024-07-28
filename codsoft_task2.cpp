#include<iostream>
using namespace std;
int main()
{
    float a,b,x;
    int op;
    char ch;
    do
    {
        cout<<"Enter the first number to perform arithmetic operation\n";
        cin>>a;
        cout<<"Enter the second number to perform arithmetic operation\n";
        cin>>b;
        cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
        cout<<"enter the choice to perform the arithemetic operation\n";
        cin>>op;
        switch(op)
        {
            case 1:
            x=a+b;
            cout<<"Addition:"<<a<<"+"<<b<<"="<<x;
            cout<<endl;
            cout<<"---------------\n";
            break;
            case 2:
            x=a-b;
            cout<<"Subtraction:"<<a<<"-"<<b<<"="<<x;
            cout<<endl;
            cout<<"---------------\n";
            break;
            case 3:
            x=a*b;
            cout<<"Multiplication:"<<a<<"*"<<b<<"="<<x;
            cout<<endl;
            cout<<"---------------\n";
            break;
            case 4:
            x=a/b;
            cout<<"Division:"<<a<<"/"<<b<<"="<<x;
            cout<<endl;
            cout<<"---------------\n";
            break;
            default:
            cout<<"invalid input \n";
            cout<<"---------------\n";
        }
        cout<<"Do you want to continue(Y/N)\n";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    cout<<"The arithmetic operations performed successfully\n";
    return 0;
}
