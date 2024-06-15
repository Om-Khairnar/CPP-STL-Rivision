// Topic : std::Unordered_multimap in c++ STL!

//NOTE :
   // it ias unordered associative container in that support equivalent keys and that associates value of another type with thw key 

   //


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	std::unordered_multimap<int,char>umm={{5,'d'}};
	umm.insert({1,'a'});
	umm.insert(std::pair<int,char>(2,'b'));
	umm.insert(std::make_pair(3,'c'));
	umm.insert(std::make_pair(3,'c'));

	for(auto& elm: umm) { cout<< elm.first<< " " << elm.second << endl;}

		return 0;
}