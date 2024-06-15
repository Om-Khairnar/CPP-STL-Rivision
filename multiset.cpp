//Topic:  std::multiset<T> 
  
  //Syntax: std::multiset<T>objectName;

     //1) It is associative Contained that contains a sorted set od duplicate object of type key
     //2) It is usually implment using red black Tree.
     //3) Insertion Removal search have logarithmic complexity .
     //4) If you want to Store user defined data type in  set then we will have to provide compare fuction so that set can stor that in sorted order 
     //5) We can pass the the order of sorting while constructing set object .

#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;

int main()
{
	std::multiset<int, std::less<int>> multiSet={5,2,4,3,2,5};
	for(const auto& e: multiSet)
	{
		cout << e <<endl;
	}
}