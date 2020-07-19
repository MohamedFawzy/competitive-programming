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
    int q, type, mark;
    string name;
    map<string, int> mp;
    cin >> q;
    for(int i=0; i<q; i++){
      cin >> type >> name;
      if(type==1){
        cin >> mark;
        mp[name] += mark;
      }else if(type==2){
        mp.erase(name);
      }else{
        cout << mp[name] << "\n";
      }
    }

    return 0;
}
