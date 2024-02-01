#include <iostream>

using namespace std;

int main()
{
    string s;
    int i,vow=0,con=0;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
    vow+=1;
    else
    con+=1;
    }
    cout<<"Vowels:"<<vow<<endl;
    cout<<"Constants:"<<con<<endl;
}
