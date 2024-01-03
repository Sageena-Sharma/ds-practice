#include<iostream>
using namespace std;
char lowercase(char ch)
{
    if (ch>='a'&&ch<='z')
    {
      cout<<"already in lower case that is:";
      return ch;  
    }
    else
    {
      cout<<"it is in upper case that is :"<<ch<<endl;
      int temp;
      temp=ch-'A'+'a';
      cout<<"so in lower case the character is:";
      return temp;
    }
}
int main()
{
    char ch;
    cout<<"enter the character:";
    cin>>ch;
    cout<<lowercase(ch);
    return 0;
}