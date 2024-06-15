// Topic: STL_is_sort 

//NOTE : 
   // Checks if the element is range [first , last) are sorted in non-decending order.

   // TYPES :
    
    // 1.can check integral data type
    // 2.can check user defined data type
    // 3.can check using a function object
    // 4.can check using lambda expression 


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int> Vec{5, 4, 6, 7, 3, 2, 8, 9, 1,};

	sort(Vec.begin(),Vec.end(), greater<int>());

	for(auto elm : Vec)
	{
		cout<<elm<< " " ;
	}
	cout<<is_sorted(Vec.begin(),Vec.end());
	return 0;
}

// it will show us the decresing order Like 
// 9876543210
// so if the given vect6or is sorted then we will see 1 at last but if our vector is nit sorted the it will show us the 0
// and that will be the data that we get is default is in the increasing so id we just put 
// put greater<int>()  in the line 28 we get output as 1 because we also declear

