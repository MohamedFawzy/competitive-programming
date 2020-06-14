#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

#define all(v) ((v).begin()), ((v).end())


bool sortPairsCmp(const pair<int, int> &a, const pair<int, int> &b)
{
  return a.first * b.second < a.second * b.second;
}


void setAndPairAndMapBasicTest()
{

  // pair
  pair<int, char> p1 = make_pair(10, 'z');
  pair<string, pair<int, char>> p2 = make_pair("mfz", p1);

  cout << p2.first << "\n";
  cout << p2.second.first << "\n";
  cout << p2.second.second << "\n";
  // sorting pairs
  vector<pair<int, int>> vp;
  vp.push_back(make_pair(1,2));
  vp.push_back(make_pair(4,4));
  sort(all(vp), sortPairsCmp);

  // set
  set<string> strSet;
  strSet.insert("mohamed");
  strSet.insert("lol");
  if(strSet.count("mohamed")){
    cout << "mohamed exist\n";
  }
  set<string>::iterator strIt = strSet.lower_bound("mohamed");
  strIt = strSet.find("mohamed");
  if(strIt != strSet.end()){
    cout << "User exist: " << (*strIt) << "\n";
  }

  // mapping
  map<string, int> mp;
  mp["mohamed"] = 10;
  mp["fawzy"] = 20;

  // another way for iteration of mapping like std::vector<int> v;
  vector<pair<string, int>> mptov(all(mp));
  for(int i=0; i< (int) mptov.size(); i++){
    cout << mptov[i].first << " " << mptov[i].second<<"\n";
  }


}


int main()
{
  setAndPairAndMapBasicTest();
  return 0;
}
