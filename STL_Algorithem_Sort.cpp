// TOPIC : STL_Algorithem_Sort

//NOTE :
   // 1. In C++ STL we have sort fuction which can sort in increasing and decreasing orde
   // 2.not only in ternal but user define data can be sorted using this fuction .
   // 3. internally it use Interosort which is conbination of Quicksort,heapsort and insertionsort
   // 4. By defoult it use Quick sort but if Quicksort is doing unfair partition and taking more than  N*logN time
   //    it switch to heapSort and when the array size become really small it switch to insertionSort
         // OUick >> HEap >> Insertion  i
   // 5. we can use parallel execution policy for better performance

//type :


//1. sorting integral data types
//2. sortin g user defined data type
//3. sort using a fuctional object
//4. sort using lambda expression 


#include<iostream>
#include<algorithm>
#include<vector>
#include<execution>

using namespace std;

// 1.Sort with internal data

int main()
{
  std::vector<int> Vec{ 5,4,6,7,3,2,8,9,1};
  std::sort(std::execution::par, Vec.begin(), Vec.end());
  for(auto elm:Vec){
  	cout<< elm << " ";
  }
  return 0;
}