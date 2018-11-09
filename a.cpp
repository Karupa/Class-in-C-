#include<iostream>
using namespace std;
main()
{int i=0;char *a,*b;
int g=0,v=1,s;
  a=new char[20];
  b=new char[20];
 // for(i=0;i<20;i++)
   //  {
       cout<<"b=";
       cin>>b;
      //(b);cout<<s;
     //}
  // for(i=0;i<20;i++)
    //  {
	//a[i]=b[i];
        //cout<<"a[";cout<<i;cout<<"]=";
        cout<<b;cout<<endl;
       
     //for(i=0;i<5;i++)
     // {
	
        //cout<<"a=";cout<<a;cout<<endl;
       // }
   /* for(i=0;i<5;i++)
      {
	//a[0]=b[i];
        cout<<"a[";cout<<v;cout<<"]=";cout<<a[v];cout<<endl;
       }*/
  
	cout<<"a=";
        cin>>a;
	for(i=0;i<20;i++)
           {
               if(b[i]==a[i])
                 {
			cout<<b[i];cout<<"=";
                        cout<<a[i];cout<<endl;
                   }

               if(b[i]!=a[i])
                  {
                    cout<<b[i];cout<<"!=";cout<<a[i];cout<<endl;
                    //ccout<<"pattern not matched";
                   }
              }                     //<<"YES b=a";
                 if(b==a)
                  {
                       cout<<"b==a";
                  }
                 else
                  {
                     cout<<"b!=a";
                      }

}



