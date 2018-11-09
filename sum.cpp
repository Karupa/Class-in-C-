#include<iostream>
using namespace std;
main()
{
  long int i=0,n;
  long int sum=1,t=1;
  cout<<"enter the nth no.=";
  cin>>n;
  for(i=0;i<n;i++)
    {
     t=t+1;
      sum=sum+t;
      cout<<sum;
      cout<<"\t";
    }
}
