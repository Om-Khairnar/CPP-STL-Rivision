//TOPIC: is_sorted_until

//NOTES:
    // find how many element are sorted in given range (first, last).

// SUPPORT TYPES :
   // 1. Sorting intergral data types 
   // 2. Sorting user defined data type 
   // 3. Sort using a function object
   // 4. Sort using lambda expression 

#include<iostrem> 
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> Vec { 4,3,2,6,7,8,1};
	auto it = is_sorted_until(Vec.begin(),Vec.end());
	auto diff = distance(Vec.begin(), it);
	cout << diff << endl;
	return 0;
}


// for Vec 4,3,2,6,7,8,1
// our output is 1  because from starting it is not sorted

// if we want the decending sort it is 3 the just ADD  //greater <int>());// ending of Vec.end(), ______);

