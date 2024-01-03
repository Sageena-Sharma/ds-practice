#include<iostream>
using namespace std;
char uppercase(char CH)
{
    if (CH>='A'&&CH<='Z')
    {
       cout<<"already in upper case that is:";
       return CH;  
    }
    else
    {
      cout<<"it is in lower case that is :"<<CH<<endl;
      int TEMP;
      TEMP=CH-'a'+'A';
      cout<<"so in upper case the character is:";
      return TEMP;
    }
}
int main()
{
    char CH;
    cout<<"enter the character:";
    cin>>CH;
    cout<<uppercase(CH);
    return 0;
}