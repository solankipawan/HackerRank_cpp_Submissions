/*

*-----------------------------------------------------------*
|                                                           |
|                                                           |
|               AUTHOR: Pawan Solanki                       |
|              Website: pawansolanki.me                     |
|                                                           |
|                                                           |
*-----------------------------------------------------------*

*/

#define JaiShreeRam _/\_
#include<bits/stdc++.h>
#define moduli 9460700327
#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define um unordered_map
#define endl "\n"
#define fo(i,a,b) for (size_t i = a; i <= b; ++i)
typedef long long ll;
typedef  __intptr_t llint;
const long double eps = (long double)1e-9;

using namespace std;

int32_t main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while (t--){
        int h,p; cin>>h>>p;
        
        while (true) {
             if(p<=0){
            cout<<"0"<<endl;
            break;
        }
        if(h<=0){
            cout<<"1"<<endl;
            break;
        }
            h = h-p;
            p = p/2;
        }
    }
}