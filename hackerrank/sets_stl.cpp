#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set<int> s;
    for(int i=0; i<q; i++){
        int op;
        int val;
        cin >> op;
        cin >> val;
        if(op==1){
            s.insert(val);
        }else if(op==2){
            s.erase(val);
        }else if(op==3){
            set<int>::iterator it = s.lower_bound(val);
            it = s.find(val);
            if(it != s.end()){
                cout << "Yes"<<endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
