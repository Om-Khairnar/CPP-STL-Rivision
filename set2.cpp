//Set Example that they are palce in sorted order 

#include<iostream>
#include<functional>
#include<string>
#include<set>


using namespace std;
class Person()
{
public:
  float age;
  string name;
  bool operator<(const Person& rhs) const { return age>rhs.age; }
};

int main()
{
  set<Person>Set={(30,"ritesh"),(22,"Hitesh"),(25,"johany")};
  for(const auto& e:Set)
  {
    cout << e.age << " "<<e.name<<endl;    
  }
  return 0;
}

