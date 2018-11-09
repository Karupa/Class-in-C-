#include <iostream>
//using namespace std;
template <typename T>
const T& max(const T& x, const T& y)
{
   if(x>y)
     return x;
   else
         return y;
    //return (x > y) ? x : y;
}
 
int main()
{
    int i = max(3, 7); // returns 7
     std::cout << i << '\n';
 
    double d = max(6.34, 18.523); // returns 18.523
    std::cout << d << '\n';
 
    char ch = max('v', 'b'); // returns 'a'
    std::cout << ch << '\n';
 
    return 0;
}
