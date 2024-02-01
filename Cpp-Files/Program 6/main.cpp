#include <iostream>

using namespace std;

int main()
{
 int n,i,a[100],pos=0,neg=0,zero=0;
 cout<<"Enter No of Elements:";
 cin>>n;
 cout<<"Enter "<<n<<" Numbers"<<endl;
 for(i=0;i<n;i++)
 cin>>a[i];
 for(i=0;i<n;i++)
 {
 if(a[i]<0)
 neg+=1;
 else if(a[i]>0)
 pos+=1;
 else
 zero+=1;
 }
 cout<<"No of Positives:"<<pos<<endl;
 cout<<"No of Negatives:"<<neg<<endl;
 cout<<"No of Zeroes:"<<zero<<endl;
}
