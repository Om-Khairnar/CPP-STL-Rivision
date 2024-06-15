//Topic : Map in C++

//note 
   
   //key should not be repeted but value is allow to be repeted like 
        //key    //value
  //1)    1        2
  //2)    5        2     here we can take but 


  //        1        3   not possible so         


#include<iostream>
#include<map>
#include<functional>
#include<vector>

using namespace std;

int main(){
	std::map<string , int> Map;
	Map["Chotu"] = 94222864;
	Map["karan"] = 76662763;
	Map.insert(std::make_pair("Bot",88560589));

	//Loop through map
	for(auto &el1:Map){
		cout<<el1.first<<" "<<el1.second << endl;
	}

	//Access using [] operator 
	cout << Map ["Chotu"] << endl;
	return 0;
}
