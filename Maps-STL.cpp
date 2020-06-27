/*
You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.
Each student can have multiple answer sheets.So the teacher has Q queries:

X Y :Add the marks Y to the student whose name is X.

X: Erase the marks of the students whose name is X.

X: Print the marks of the students whose name is X. (If X didn't get any marks print 0.)

Input Format

The first line of the input contains Q where Q is the number of queries.
 The next Q lines contain 1 query each.The first integer,type of each query is the type of the query.
 If query is of type 1,it consists of one string and an integer X and Y where X is the name of the student and Y is the marks of the student.
 If query is of type 2 or 3,it consists of a single string X where X is the name of the student.

 */
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    map<string, int> m;
    while (t>0) {
        string x;
        int w;
        cin >> w >> x;
        switch (w)
        {
        case 1: int y;
            cin >>y; 
            m[x] += y ;
            break;
        case 2: m.erase(x);
            break;
        case 3:
            if(m.find(x) == m.end()){
                cout << 0 << endl;
            }
            else {
                cout << m[x] << endl;
            }
            break;
        }

        t--;
    }
    return 0;

    }