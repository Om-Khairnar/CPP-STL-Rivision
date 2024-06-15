// 4. sort using lambda expression 

#include<iostream>
#include<algorithm>
#include<vector>
#include<execution>
using namespace std;


int main(){
	std::vector<int>Vec{5,4,6,7,3,2,8,9,1};
	std::sort(Vec.begin(),Vec.end(),[](int a,int b) {return a<b; });
	for(auto elm:Vec){
		cout<< elm <<" ";
	}
	return 0;
}