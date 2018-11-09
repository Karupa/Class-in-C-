#include<iostream>
using namespace std;
int a,b,s,c,ci,z,d,su,cu;
void add(int a,int b,int ci);
main()
{
  add(1,1,0);cout<<"\n";
  add(0,0,0);
}
void add(int a,int b,int ci)
   {
     s=a xor b;
     su=ci xor s;
     cu=su and ci;
     c=a and b;
     d=c and su;
      z=su or cu;
    cout<<z;
    cout<<su;
   }
