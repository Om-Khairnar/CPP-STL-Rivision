// STL Library 
//Topic : Copy and Copy If 

  //NOTE:
      // 1)Copy copies the element in the range define by [first , last] to anoter range begining at d first 
      //  2) copy _if only copy if  predict return true.
      //  3) if source and destination range are overlaping the the behaviour is undefined .


#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<vector>
#include<numeric>
using namespace std;  

void print(vector<int>& vec)
{
	copy(vec.begin() , vec.end(), ostream_iterator<int>(cout," "));
	cout<< endl;
}

int main()
{
	vector<int> from_vector(10); 
	iota(from_vector.begin(), from_vector.end(), 0);
	
	vector<int> to_vector1(from_vector.size());    
	copy(from_vector.begin(), from_vector.end(), to_vector1.begin());
  print(to_vector1);

	//OR , alternative 
	vector<int> to_vector2;
	copy(from_vector.begin(), from_vector.end(), back_inserter(to_vector2));
	print(to_vector2);

  // either way is equivqlent to
  vector<int> to_vector = from_vector;
  // what is the benifit of copy fuction if we can do this.....
  // Actually you can partially copyt element using copy() fuction 

  cout<< "odd Number in to_vector are: ";
  vector<int> to_vector3(5);
  copy_if(from_vector.begin(), from_vector.end(),
  	      to_vector3.begin(),
          [](int x) {return (x % 2) == 1; });

  print(to_vector3);
  return 0;
}



