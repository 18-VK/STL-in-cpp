#include<bits/stdc++.h>
using namespace std;
/* Templates is used to implement "Generic programming".
   Templates can be represented in two ways- funtion and class template
*/
// Function template example

template <typename T> 
// T is like variable which will replace parameter variable of any  data type
T maximum(T x,T y)
{
   if(x>y)
      return x;
   else
   return y;
}
int main()
{
   cout <<"maxmium :- "<<maximum(189,99)<<endl;
   cout<<"maximum :- "<<maximum(3.4,9.8)<<endl;
   cout<<"maximum :- "<<maximum('A','a')<<endl;

}