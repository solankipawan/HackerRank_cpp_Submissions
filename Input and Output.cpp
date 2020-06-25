/*In this challenge, we're practicing reading input from stdin and printing output to stdout.
Read 3 numbers from stdin and print their sum to stdout.

Note: If you plan on completing this challenge in C instead of C++, you'll need to use format specifiers with printf and scanf.

Input Format

A single line containing 3 space-separated integers: a,b ,and c.
Output Format

Print the sum of the three numbers on a single line.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c, sum =0;
    cin >> a >> b >> c;
     sum = a+b+c;
     cout << sum << endl;
    return 0;
}
