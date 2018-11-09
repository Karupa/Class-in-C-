#include<iostream>
//#include<conio.h>
//#include<string.h>
//using namespace std;
template <typename T>
const T& max(const T& a,const T& b)
{
  if(a>b)
    return a;
  else
    return b;
}
int main()
{
  /*int e,f;
   cout<<"enter e=";
   cin>>e;
   cout<<"enter f=";
   cin>>f;*/
  int m=max(5,7);
   std::cout<<"max is="<<m;
  char c=max('g','u');
   std::cout<<c;
  double d=max(78.8,99.0);
   std::cout<<d;
 // int a[4]={1,2,3,4};
 // int b[4]={9,8,7,6};
 // int mm[4]=max(a[4],b[4]);
  // std::cout<<mm;

  return 0;

}
