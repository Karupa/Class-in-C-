#include<iostream>
using namespace std;
int g=10,s;
void extra()
{
 cout<<g;
}
main()
{
  extra();
  {
   
    int g=20;
     cout<<g;cout<<endl;
     cout<<::g;
   return 0;
}
}
    
