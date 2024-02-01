#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,upper=0,lower=0;
    for(i=0;i<s.length();i++)
    {
    if(s[i]>='A' && s[i]<='Z')
    upper+=1;
    else
    lower+=1;
    }
    cout<<"UpperCase:"<<upper<<endl;
    cout<<"LowerCase:"<<lower;
}
