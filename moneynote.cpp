#include<iostream>
using namespace std;
int main()
{
    int a,c;
    cout<<"enter the total money you have:";
    cin>>a;
    int b;
    do
    { 
        cout<<"enter the no.of note you want to calculate:";
        cin>>b;
        cout<<endl;
       switch (b)
       {
         case 2000:
            cout<<"no.of 2000 note in it is:";
            c=a/2000;
            cout<<c<<endl;
            break;
         case 500:
            cout<<"no.of 500 note in it is:";
            c=a/500;
            cout<<c<<endl;
            break;   
         case 200:
            cout<<"no.of 200 note in it is:";
            c=a/200;
            cout<<c<<endl;
            break;      
         case 100:
            cout<<"no.of 100 note in it is:";
            c=a/100;
            cout<<c<<endl;
            break;
         case 50:
           cout<<"no. of 50 note in your total amount:";
           c=a/50;
           cout<<c<<endl;
           break; 
         case 20:
            cout<<"no.of 20 note in it is:";
            c=a/20;
            cout<<c<<endl;
            break;  
         case 10:
            cout<<"no.of 10 note in it is:";
            c=a/10;
            cout<<c<<endl;
            break;   
         case 5:
            cout<<"no.of 5 note in it is:";
            c=a/5;
            cout<<c<<endl;
            break; 
         case 1:
            cout<<"no.of 1 note in it is:";
            c=a/1;
            cout<<c<<endl;
            break;         
         default:cout<<"no. not found";
           break;
       }
    }while (b!=1);
    return 0;
}


