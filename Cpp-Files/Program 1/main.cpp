#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%3==0 && n%5==0)
    cout<<n<<" is Divisible by 3 and 5";
    else
    cout<<n<<" is Not Divisible by 3 and 5";
}
