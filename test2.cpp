#include<iostream>
#include<string.h>
using namespace std;
class A
{
      private:
         string s;
         int *p;
         string c;
      public:
          int F()
             {  cout<<"Ask\n";
                 getline(cin,s);
                  s=p;
                 cout<<s;
                 if(s=="what is your name")
                    {  cout<<"my name is dronser";}
                 else
                     if(s=="fuck")
                         {cout<<"*****FUCK U*******\n";}
                 
                 //     cout<<"not complete";
              }
};
main()
{
   A a;
    a.F();
}

