//Topic: STL Algorithem copy_n copy_backword

//NOTE :
    
     //std::copy_n()  this fuction use to copy given number of element from source to destination 
     
     //std::copy_backward() function copies the elements from the range defined by first to last 

#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<vector>
#include<numeric>
using namespace std;     

void print(vector<int>& vec) {
	copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
	cout<< endl;
}

int main()
{
	vector<int> from_vector(10);
	iota(from_vector.begin(),from_vector.end(),0); //we filled the element from 0 to 10 from begin to end 

	//copy_N 
	vector<int> to_vector1;
	copy_n(from_vector.begin(), 4, back_inserter(to_vector1)); // here from begin we got the 4 element 0123 and insert to vector1
	print(to_vector1);

	//Copy_BACKWARD
	vector<int> to_vector2(15); //here we take the size as 15
	copy_backward(from_vector.begin(), from_vector.end(), to_vector2.end()); // he take the elemt by backword  
	print(to_vector2);

	return 0;
}



//copy backword output is be like the 

input :   1 2 3 4 5 6 7 8 9 
output :  0 0 0 0 0 0 1 2 3 4 5 6 7 8 9