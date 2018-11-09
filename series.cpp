#include<iostream>
using namespace std;
main()
{
 long double t=1,i,n;
  long double sum=0;
cout<<"enter the position";
cin>>n;
 for(i=0;i<n;i++)
   {
  		t=t*2;
 		sum=sum+(1/t);
 		cout<<sum;
                cout<<"\t";
   }
cout<<"sum is "<<sum;cout<<"\t";
cout<<"at"<<i;
//int c=(2)**2;
//cout<<c;
}

