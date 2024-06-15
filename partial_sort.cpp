//TOPIC : STL Algorithm partial_sort

   //NOTE :
       //0. partial_sort rearrange element such a that the range [first, middle ) contain the sorted element 
       //1. the Order of equal element is not guranted to be preserved.
       //2. the order of remaining element is unspecified 

#include<algorithm>
#include<functional>
#include<vector>
#include<iostream>

using namespace std;

int main(){
	vector<int> Vec{5,7,4,2,8,6,1,9,0,3};

	std::partial_sort(Vec.begin(),Vec.begin()+4, Vec.end()-2);

	for(int val : Vec ){
	    std:: cout<< val << " ";
	}

	return 0;
}

// (+4) -18 Line so here we can say that it will only sort the first four line means that 
//        it will find corrct postion for only first 4 location so Thats it 

// (-2) - it will not consider the last 2 in that sorting we can also do that so 