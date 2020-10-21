#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string,int> m;
    int n;
    cin>>n;
    int mark;
    int q;
    string name;
    for(int i=0;i<n;i++)
    {
         cin>>name;
         cin>>q;
        if(q==1)
        {   
            cin>>mark;
            map<string,int>::iterator itr;
            itr = m.find(name);
            if(itr==m.end())
            {
              m.insert(make_pair(name,mark)); 
            } 
             else
             {
               m[name]+=mark;
             }
        }
        else if(q==2)
        {
           m.erase(name);
        }   
        else if(q==3)
        {   
            map<string,int> :: iterator itr;
            itr=m.find(name);
            if(itr==m.end())
            {
              cout<<0<<endl;
            }
            else
            {
                cout<<m[name]<<endl;
            }
        } 
    } 
    return 0;
}




