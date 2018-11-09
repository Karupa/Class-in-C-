#include<iostream>
main()
{
    int a[n],i=0,j,k,p=-1;
   cout<<"enter size of stack=";
   cin>>n;
   push(int x)
   {
     if(p==-1)
        p=p++;
        a[i]=x;
        i=i++;
     if(p>n)
        cout<<"stack over flow";
     else
         a[i]=x;
         i=i++;
   }
   pop(int y)
    {
       if(p==-1)
          cout<<"underflow";
       if(p>n)
          cout<<"stack over flow";
       else
          i=i-1;
          cout<<a[i];
   }
  cout<<"==========THE PROGRAM FOR STACK==========";
  push(10);
  push(23);
  push(77);
  pop(77);
 for(i=0;i<n;i++)
   cout<<a[i];
}

