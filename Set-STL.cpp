/*x : Add an element x to the set.
 x : Delete an element x from the set. (If the number x is not present in the set, then do nothing).
 x : If the number x is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).

Input Format

The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each. 
Each query consists of two integers y and x where  is the type of the query and x is an integer.

Output Format

For queries of type 3 print "Yes"(without quotes) 
if the number x is present in the set and if the number is not present, then print "No"(without quotes).
Each query of type 3 should be printed in a new line.

Sample Input

8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
Sample Output

Yes
No
No
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    set<int> s;
    while (t>0)
    {   int y ,x;
        cin >> y >> x;
        if(y == 1){
            s.insert(x);
        }
        if( y == 2){
            s.erase(x);

        }
        if(y ==3){
            if(s.find(x) == s.end()){
                cout << "No" << endl;
            }
            else {
                cout << "Yes" <<endl;
            }

        }

      
        t--;
    }

    
}