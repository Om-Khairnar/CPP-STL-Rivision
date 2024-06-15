// Array implementation 

//std::array<int,5>arrayname;

//1)it is container that hase fixed size array
//2)array size is need at compiler time 
//3)Assing by value is actual value  
//4) Accessing Element 
   //operation in array
   //1. at() :- This function is used to access the elements of array. 
   //2. get() :- This function is also used to access the elements of array. 
                 //This function is not the member of array class but overloaded function from class tuple. 
   //3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.
   //4. front() :- This returns the first element of array. 
   //5. back() :- This returns the last element of array.
   //6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack. 
   //7. max_size() :- It returns the maximum number of elements array can hold i.e, the size with which array is declared. 
                   // The size() and max_size() return the same value.
   //8. swap() :- The swap() swaps all elements of one array with other.
   //9. empty() :- This function returns true when the array size is zero else returns false. 
   //10. fill() :- This function is used to fill the entire array with a particular value.

#include<iostream>
#include<array>
#include<tuple>

using namespace std;
int main()
{
   //initialize array element 
   array<int,6> ar={1,2,3,4,5,6};
   
   //print the element using at()
   cout<<"\nThe Array element are using at()";
   for(int i=0;i<6;i++)
   cout<<ar.at(i)<<" ";
   

   //print array using get()
   cout<<"\nThe array is printed using get()";
   cout<<get<0>(ar)<<" "<<get<1>(ar)<<" ";
   cout<<get<2>(ar)<<" "<<get<3>(ar)<<" ";
   cout<<get<4>(ar)<<" "<<get<5>(ar)<<" ";
   

   //printing array using operator[]
   cout<<"\nThe array element are using operator[] ";
   for(int i=0;i<6;i++)
   cout<<ar[i]<<" ";
   

   //print first element of array
   cout<<"\nFirst element of array is :";
   cout<<ar.front();

   //print last element of array
   cout<<"\nLast element of array is :";
   cout<<ar.back();

   //print print size of array
   cout<<"\nSize of array element is :";
   cout<<ar.size();

   //print maximum element in array 
   cout<<"\nmaximum element :";
   cout<<ar.max_size();

   return 0; 
}
