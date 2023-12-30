#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of first no. :";
    cin>>a;
    cout<<"enter thr value of second no. :";
    cin>>b;
    char op;
    cout<<"enter thr operation to be performed:";
    cin>>op;
    int c;
    switch(op)
    {
        case '+' :
               cout<<"addition of nos.";
               c=a+b;
               cout<<"is :"<<c;
               break;
        case '-':
                cout<<"subtraction of nos.";
                c=a-b;
                cout<<"is:"<<c;
                break;
        case '*':
                 cout<<"product of the nos.";
                 c=a*b;
                 cout<<"is:"<<c;
                 break;
        case '%':
                cout<<"remainder of the nos.:";
                c=a%b;
                cout<<"is:"<<c;
                break;                        
        case '/':
                cout<<"quotient of the nos.:";
                c=a/b;
                cout<<"is:"<<c;
                break;
        default:
                cout<<"operation not found";
                break;        
    }
    cout<<endl;
}