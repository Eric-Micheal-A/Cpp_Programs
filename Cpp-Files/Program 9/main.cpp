#include <iostream>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string k;
    k=s;
    reverse(s.begin(),s.end());
    if(k==s)
    cout<<"Palindrome";
    else
    cout<<"Not a Plaindrome";
}
