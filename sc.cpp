#include<iostream>
using namespace std;
class T
{
     public:
          int s,h,m,a,b,c;
      public:
          int se()
          {
             cout<<"enter second";
             cin >>s;
             cout<< s<<"seconds";
            return 0;
          }
         int ho()
          {
              cout<<"enter the hours";
              cin >>h;
                cout<<h<<"hour";
                          return 0;
          }
          int mi()
           {
             cout<<"enter minutes";
             cin>>m;
              cout<<m<<"minutes";
		            return 0;
            }

           void time()
              { a=ho();
                 b=mi();
                 c=se();
             cout<<a    << b     <<c;
            }
};
main()
   {
        T t1;
           
             t1.time();
   } 

