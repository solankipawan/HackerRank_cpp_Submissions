/* 
Input Format

The first line of the input contains N where N is the number of integers. 
The next line contains N integers.
Output Format

Print the integers in the sorted order one by one in a single line followed by a space.

Sample Input

5
1 6 10 8 4
Sample Output

1 4 6 8 10
*/

#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
// # define
using namespace std;

int main(){
    vector<int> vi; //creates an empty vector of integers
    int t;
    cin >> t;
    while (t>0)
    {
        int input;
        cin >> input;
        vi.push_back(input);
        t--;
    }
    sort(vi.begin(), vi.end());
    for(auto i = vi.begin(); i != vi.end(); i++){
        cout << *i << " ";
    }
return 0;
}
