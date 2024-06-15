//Example : User Defined
#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;

class Person
{
   public:
   	     float age;
   	     string name;
   	bool operator < (const Person& rhs) const { return age<rhs.age; }
   	bool operator > (const Person& rhs) const { return age<rhs.age; }
};

int main()
{
	std::multiset<Person,std::greater<>> multiSet= {(25,"Rupesh"),(20,"Hitesh")};

	for(const auto& e: multiSet)
	{
		cout<< e.age << " " <<e.name<<endl;

	}
	return 0;
}