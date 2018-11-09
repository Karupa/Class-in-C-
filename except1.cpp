#include<iostream>
using namespace std;
int main()
{
  int a;
  int b,c;
  char x;
  cout<<"enter a=";
  cin>>a;cout<<endl;
  cout<<"enter b=";
  cin>>b;
  try
    { 
      if(b==0)
         throw b;
      else if(b<=39999 && b!=0 && b>=-39999)
       { c=a/b;
        cout<<a <<" Divided by "<< b << "=" <<c<<endl;
         }   
        
    }
    catch(int b)
      {
         cout<<"Exception: Zero Division ERROR"<<endl;
         cout<<"x/0=infinite"<<endl;
      }
    catch(char x)
      {
        cout<<"Exception: Character Division not allowed"<<endl;
      }
    
    return 0;
}
