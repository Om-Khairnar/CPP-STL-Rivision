//3. Sort using a function object

#include<iostream>
#include<algorithm>
#include<vector>
#include<execution>
using namespace std;

struct{
	bool operator()(int a, int b) const
	{
		return a<b;
	}
} customLess;

int main()
{
	std::vector<int>Vec{5,4,6,7,3,2,8,9,1};
	std::sort(Vec.begin(),Vec.end(),customLess);
	for(auto elm: Vec){
		cout<< elm << " ";
	}
	return 0;
}

