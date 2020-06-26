/*
One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56").

stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
You have to complete the function vector parseInts(string str). str will be a string consisting of comma-separated integers, and you have to return a vector of int representing the integers.

Note If you want to know how to push elements in a vector, solve the first problem in the STL chapter.

Input Format

The first and only line consists of n integers separated by commas.

Output Format

Print the integers after parsing it.

P.S.: I/O will be automatically handled. You need to complete the function only.

Sample Input

23,4,56
Sample Output

23
4
56 
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss;
    vector<int>s;
    ss << str;
    int a;
    char ch;
    while(ss >> a){
       s.push_back(a);
       ss >> ch; //for (,)
    }
   return s;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
