#include<bits/stdc++.h>
using namespace std;
/* example
  :- Assume you have to implement int type stack data structure and char type
    You will write separte code for this right?
    It is not effective way
    solution :- Class template
*/
// Let's create a short program to implement class template

// template <typename X> // instead of  typename you can use class X
// // method 1 :- declaration and initialisation in class
// class Print_array
// {
//   private:
//    X *arr;
//    int n;
//    public :
//    Print_array(X array[],int size)
//    {  
//         arr=new X [size];
//         n=size;
//         for(int i=0;i<n;i++)
//         {
//             arr[i]=array[i];
//         }
//    }
//    void print()
//    {
//        for(int i=0;i<n;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//    }
    
// };


//method 2 :- delclaration in class and definition in outside the class
template <typename T> 
class Print_array
{
  private:
   T *arr;
   int n;
   public :
   Print_array(T array[],int size);
   void print();
};
//definition of constructor 
template<typename T> 
Print_array<T>::Print_array(T array[],int size)
{
       arr=new T [size];
        n=size;
        for(int i=0;i<n;i++)
        {
            arr[i]=array[i];
        }
}
//defintion of function
template  <typename T>
void Print_array<T>:: print()
{
for(int i=0;i<n;i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<endl;
}
int main()
{
    // for int type
    int  arr[]={1,2,3,4,5};
    int size=5;
     Print_array <int>A1(arr,size);
    A1.print();
    // for char
    char arr1[]={'a','b','c','d'};
    Print_array<char> A2(arr1,size-1);
    A2.print();
}