#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
   
   string s;
   s="karupa created this file so thank him";
   
   ofstream outfile("college.zip");
   for(int i=0;i<s.size();i++)  
    outfile.put(s[i]);
   ifstream infile("college.zip");
   //for(int i=0;i<s.size();i++)
     infile.rdbuf();
   
}
