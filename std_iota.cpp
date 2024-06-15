//Topic : STL Algo std::iota


//NOTE :

    // Fills the range [ First to Last] with some sequentially increasing Value
    // starting with the value and repectively evaluating ++Value.

#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<numeric>

int main()
{

	std::list<int>lst(10);
	std::iota(lst.begin(), lst.end, -4);

	for(auto elm: lst) cout<< elm << endl;

	std::vector<std::list<int>::iterator> Vec(lst.size());
    std::iota(Vec.begin(), Ve.end(), lst.begin());

    for(auto elm: Vec) cout << *elm << endl;

    return 0; 
}