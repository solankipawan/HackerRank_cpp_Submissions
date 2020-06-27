/*
Input Format

The first line of the input contains an integer N .
The next line contains N space separated integers(1-based index).
The third line contains a single integer x,denoting the position of an element that should 
be removed from the vector.
The fourth line contains two integers a and b denoting the range that should be erased from the vector 
inclusive of a and exclusive of b.
Sample Input

6
1 4 6 2 8 9
2
2 4

Sample Output

3
1 8 9
*/

#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> vi;
    int t;
    cin >> t;
    while (t>0)
    {
        int input;
        cin >> input;
        vi.push_back(input);
        t--;
    }
    int p,q,r;
    cin >> p >> q >>r;
    vi.erase(vi.begin()+(p-1)); // 
    vi.erase(vi.begin()+(q-1), vi.begin()+(r-1));
    // sort(vi.begin(), vi.end());
    cout << vi.size() <<endl;
    for(auto i = vi.begin(); i != vi.end(); i++){
        cout << *i << " ";
    }
return 0;
}
