#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef vector<int> vi;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // input number
    int n;
    cin >> n;
    // push vector values x[i]
    vi v(n);
    for(int i=0; i<n; i++){
      cin >> v[i];
    }
    // number of queries
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int search;
        cin >> search;
        vi::iterator it;
        it = lower_bound(v.begin(), v.end(), search);
        if(*(it+1)==search || *it ==search){
          cout << "Yes " << it - v.begin() + 1<<endl;
        }else{
          cout << "No " << it - v.begin() + 1<<endl;
        }
      }



    return 0;
}
