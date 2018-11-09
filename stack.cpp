#include<iostream>
using namespace std;
int a[4]={1,2,3,4},b[4]={6,7,8,9},x,y,k,i=4,j;
void display();
void push();
void pop(int c[4]);
main()
{  
  // cout<<"enter size of stack=";
   //cin>>n;
  cout<<"==========THE PROGRAM FOR STACK==========";cout<<endl;
  //pop(a);
  pop(b);
  pop(b);
  //pop(b);
  pop(b);

 // push();
 // push();
  display();
}
void push()
   { //int a[n];  
    cout<<"enter no=";
     cin>>x;
   if(i==-1)
        i=i++;
        a[i]=x;
     
     if(i>4)
        cout<<"stack over flow";
     else
         {i=4;
         a[i]=x;
         i=i-1;}
   }
  void pop(int c[4])
    {//int a[n];   
       cout<<"enter no=";
       cin>>y;
      if(i<=0)
         {
          cout<<"underflow";
          cout<<"\n";
          cout<<"stack is empty";
         }
       else
          i=i-1;
          //cout<<a[i];
    }
void display()
{
  if(j!=i && i>0)
   {

    cout<<"<<<<<<<<<<<<<THE STACK IS>>>>>>>>>>>>";cout<<"\n";
   }
  cout<<"a[4]->";
  while(j!=i)
    {//cout<<"'''";cout<<"\n";
     //cout<<"|";
     cout<<a[j];
     //cout<<"|";
      cout<<"  ";
     //cout<<"'''";
    // cout<<"\n";
       j=j+1;
    }

   cout<<"                                                  "; 
 cout<<"b[4]->";  
while(k!=i)
    {
     cout<<b[k];
     cout<<"  ";
     k=k+1;
    }
  
}
