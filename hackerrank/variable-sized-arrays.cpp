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
    int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n);

    for(int i=0; i<n; i++){
      int k;
      cin >> k;
      a[i].resize(k);
      for(int j=0; j<k; j++){
        cin >> a[i][j];
      }
    }

    // answer the queries
    for(int q_num=0; q_num <q; q_num++){
      int i,j;
      cin >> i >> j;
      cout << a[i][j]<< endl;
    }

    return 0;
}
