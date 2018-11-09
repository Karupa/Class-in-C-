#include<iostream>
using namespace std;
int main()
{
  int n;
  int f=1;
 int i;
 cout<<"enter the no=";
 cin>>n;
  try
    {
       if(n==0)
           throw n;
       for(i=1;i<=n;i++)
           f=f*i;
     }
   catch(int ex)
    {
       cout<<"Exception: zero factorial ERROR"<<endl;
       cout<<"0!=1"<<endl;
    }
     cout<<"factorial of ";
     cout<<n;
     cout<<"="<<f<<endl;
     return 0;
}
