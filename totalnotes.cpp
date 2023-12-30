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
            cout<<"no.of 2000's note in it is:";
            c=a/2000;
            cout<<c<<endl;
            cout<<a%2000<<" "<<"is left"<<endl;
            break;
         case 500:
            cout<<"no.of 500's note in it is:";
            int d,x;
            x=(a-(2000*c));
            d=x/500;
            cout<<d<<endl;
            cout<<x%500<<" "<<"is left"<<endl;
            break;   
         case 200:
            cout<<"no.of 200's note in it is:";
            int e,y;
            y=(x-(500*d));
            e=y/200;
            cout<<e<<endl;
            cout<<y%200<<" "<<"is left"<<endl;
            break;      
         case 100:
            cout<<"no.of 100's note in it is:";
            int f,z;
            z=(y-(200*e));
            f=z/100;
            cout<<f<<endl;
            cout<<z%100<<" "<<"is left"<<endl;
            break;
          case 50:
           cout<<"no. of 50's note in it is:";
           int g,m;
           m=(z-(100*f));
           g=m/50;
           cout<<g<<endl;
           cout<<m%50<<" "<<"is left"<<endl;
           break;
         case 20:
            cout<<"no.of 20's note in it is:";
            int h,n;
            n=(m-(50*g));
            h=n/20;
            cout<<h<<endl;
            cout<<n%20<<" "<<"is left"<<endl;
            break;  
         case 10:
            cout<<"no.of 10's note in it is:";
            int i,o;
            o=(n-(h*20));
            i=o/10;
            cout<<i<<endl;
            cout<<o%10<<" "<<"is left"<<endl;
            break;   
         case 5:
            cout<<"no.of 5's note in it is:";
            int j,p;
            p=(o-(i*10));
            j=p/5;
            cout<<j<<endl;
            cout<<p%5<<" "<<"is left"<<endl;
            break; 
         case 1:
            cout<<"no.of 1's note in it is:";
            int k,q;
            q=(p-(j*5));
            k=q/1;
            cout<<k<<endl;
            cout<<q%1<<" "<<"is left"<<endl;
            break;         
         default:cout<<"no. not found";
           break;
       }
    }while (b!=1);
    
}


