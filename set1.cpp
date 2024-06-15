
//Topic : 
           //Std::set<T>

 //Set: Accept all the element but not not repeat the element only take as a single like you input 1,2,1 they get only 1 and 2

  // 1.set is associative container 
  // 2.this has the sorted set of unique objects 
  // 3.It is uswally implemnt using better black tree 
  // 4.If you want to Store user defined data type in  set then we will have to provide compare fuction so that set can stor that in sorted order 
  // 5.we can pass order of sorting while constructing set object.
  #include<iostream>
  #include<set>
  #include<string>
  #include<functional>

 using namespace std;
  


  int main()
  { 
   set<int> Set=(1,2,3,5,4,1,2,3,4,5);
   for(const auto& e: Set)
   {
   	cout<< e <<endl;
   }
   return 0;
  }

