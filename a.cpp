#include<iostream>
using namespace std;
int reverse_array(int arr[],int n,int m)
{
   if(m >= n)
  {
   cout<<"poistion is out of range";
   return arr[n];
  }
  int start=m;
  int end=n-1;
  while(start<end)
  {
   //swap(arr[start],arr[end]);
   int temp=arr[start];
   arr[start]=arr[end];
   arr[end]=temp;
    start++;
    end--;
  }
}
int main()
{
   int arr[6]={1,2,3,4,5,6};
   int n;
   n=sizeof arr/sizeof arr[0];
   //int arr[20];
   int m=4;
   cout<<"original array";
   for (int i=0;i<n;i++)
   {
    cout<<arr[i]<<endl;
   }
   reverse_array(arr,n,m);
   cout<<"reversed array:"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
}