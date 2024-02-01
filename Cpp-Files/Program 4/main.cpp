#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int i,fact=1;
   for(i=1;i<=n;i++)
   fact*=i;
   cout<<fact;
}
