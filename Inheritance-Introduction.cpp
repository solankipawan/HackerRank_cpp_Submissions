#include <iostream>
#include <bits/stdc++.h> 
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <ostream>
#include <cstdio>
#include <vector>
#include <cassert>


using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		void description(){
			cout << "In an isosceles triangle two sides are equal" << endl;
		}
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}