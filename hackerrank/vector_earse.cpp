#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int))((v).size()))
typedef vector<int> vi;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vi v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int p, s, e;
    cin >> p;
    v.erase(v.begin()+ p-1);
    cin >> s >> e;
    v.erase(v.begin()+s-1,v.begin()+e-1);

    cout  <<  v.size()  <<endl;

    vi::iterator it = v.begin();
    while(it != v.end()){
      cout << (*it) << " ";
      it++;
    }

    return 0;
}
