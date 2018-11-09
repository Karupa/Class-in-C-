#include<iostream>
using namespace std;
int word;
class A
{
   public:
     int a;
     int b;
     //char word;
   public:
      void value()
          {
                cout<<"a=";
               cin>>a;
                cout<<"b=";
               cin>>b;
               cout<<"what to do man";
                cin>>word;

          }
       
};
class B : public A
{
   public:
       int sum;
   public:
      void add()
         {
             value();
            if(word==1)
               sum=a+b;
               cout<<"sum=";
               cout<<sum;
      
           }
};
main()
{
      B b;
       b.add();
} 
