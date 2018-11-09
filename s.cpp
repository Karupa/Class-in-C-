#include<iostream>
using namespace std;
class A
 { public:
       int a;
       int b;
       int c;
   public:
     void sum()
    {
     cout<<"enter a and b=";
     cin>>a;
     cin>>b;
     c=a+b;
     cout<<"sum="<<c;
   }
};
int main()
{
  A x;
  x.sum();
  return 0;
}
