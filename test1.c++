#include<iostream>
using namespace std;
int c;
class A
{
   public:
     int a;
     int b;
     int word;
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
class C : public A
{
   public:
       int sub;
   public:
      void SUB()
         {
             value();
            if(word==2)
               sub=a-b;
               cout<<"SUB=";
               cout<<sub;
         //   return 0;
           }
};
class D : public A
{
   public:
       int mul;
   public:
      void Mul()
         {
             value();
            if(word==3)
               mul=a*b;
               cout<<"MUL=";
               cout<<mul;
           // return 0;
           }
};
class E : public A
{
   public:
       int div;
   public:
      void Div()
         {
             value();
            if(word==4)
               div=a/b;
               cout<<"DIV=";
               cout<<div;
            //return 0;
           }
};
main()
{
      B b;
       b.add();
     D d;
      d.Mul();
     E e;
      e.Div();
    C c;
      c.SUB();
}        
