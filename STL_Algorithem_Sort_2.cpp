//2. sortin g user defined data type


#include<iostream>
#include<algorithm>
#include<vector>
#include<execution>
using namespace std;


class Point{
	public:
		int x;
		int y;
	    Point(int x=0,int y=0):x{x},y{y} {}
	    bool operator < (const Point & p1)
	    {
	    	return (x+y)<(p1.x+p1.y);
	    }
	};

int main(){
	std::vector<Point> Vec{{1,2},{3,1},{0,1}};
	std:: sort(Vec.begin(),Vec.begin());
	for(auto e:Vec)
	{
		cout<< e.x << " "<< e.y<< endl; 
	}
	return 0;
}

// sowing in increasing order 