#include<iostream>
using namespace std;
class base
{
  public:
       virtual~base()
         {
           cout<<"base destoyed";
         }
};
class deri
{
   public:
      virtual~deri()
       {
         cout<<"derived destructor";
       }
};
main()
{
   base D;
    D.~deri();
    D.~base();
    delete D;
    cout<<"exit";
}
