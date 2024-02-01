#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s="hello everyone welcome to this world";
    int n,word=1,i;
    n=s.length();
    for(i=0;i<=n;i++)
    {
        if(s[i]==' ')
        word+=1;
        else
        continue;
    }
    cout<<"No of Words:"<<word;
}
