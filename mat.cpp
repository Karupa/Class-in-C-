#include<iostream>
using namespace std;
main()
{
  int i=0,j=0,k=0,a[10][10][10],b[10][10],c[10][10],n,m,l;
  cout<<"rows in a[i][j][k]=";
  cin>>n;
  cout<<"columns in a[i][j][k]=";
  cin>>m;
  cout<<"back a[i][j][k]=";
  cin>>l;
 while(i<n)
 {j=0;
   while(j<m)
     {  k=0;
        while(k<l)
         {
                         cout<<"a";cout<<"[";cout<<i;cout<<"]";cout<<"[";cout<<j;cout<<"]";cout<<"[";cout<<k;cout<<"]";
           cin>>a[i][j][k];
           k=k+1;
          } 
      j=j+1;
     }  
    i=i+1;
 }
cout<<"the matrix a is";
cout<<"\n";
 for(k=0;k<l;k++)
  {
    for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
       {
 
        cout<<a[i][j][k];
        cout<<"\t";
        }cout<<"\n";
     }cout<<"\n";
     cout<<"\n";
  }





 while(i<n)
  {  j=0;
    while(j<m)
     {
       cout<<a[i][j];
       cout<<"\t";
        j=j++;
     }
     cout<<"\n";
    i=i++;
   }
}
     

