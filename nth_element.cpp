// TOPIC : nth_element

//NOTE:
     //  nth element is sorting algorithm that rearrenge the element in  [first , last] such that :
         
     // for default it is smallest to find but you can add the std::greater<int> for greater number 
     
// Support Types:
   // 1.Sorting integral data type 
   // 2.Sorting user defined data type
   // 3.Sort using a function object
   // 4.Sort using lambda expression


#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>


int main()
{
	std::vector<int> v{5,6,4,3,2,6,7,9,3};

	std::nth_element(v.begin(), v.begin()+v.size()/2, v.end()); 
    std::cout << " The media is " << v[v.size()/2] << '\n';

    std::nth_element(v.begin(), v.begin()+1, v.end(), std::greater<int>()); //+1 is means second higest so
    std::cout << " The Second largest element is " << v[1] << '\n';

    return 0;
}

//median we is 5 just because we have 9 element and if we divde 9 with 2 we got something 4
// so we have five in pace if we arrange the element in increasing order so
// it is like 233456679  start couting with 0  