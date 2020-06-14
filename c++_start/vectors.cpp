#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int))((v).size()))

typedef vector<int> vi;


// void printVec(vi vec, string keyword)
// {
//   vec::iterator it = vec.begin();
//   cout << keyword << "\t";
//   while(it != vec.end()){
//     cout << (*it) << " ";
//   }
//   cout << "\n";
// }


void vectorBasicTest() {
  vi v(10); // init 10 elements with zero
  vi v1(10, 7); // init 10 elements with value 7

  // create vector from array
  const int length = 6;
  int array[length] = {1,4,2,3,4,5};
  vi v2(array, array+length);

  cout << "Front: " << v2.front() << " last element: " << v2.back()<<"\n";
  swap(v2.front(), v2.back()); // back by reference
  cout << "After swapping\n";
  cout << "Front: " << v2.front() << " last element: " << v2.back()<<"\n";

  // create vector from another vector
  vi v3(v1.begin(), v1.end());
  v.resize(15); // resize array from 10 to 15

  // loop through vector
  for(int i=0; i< (int) v2.size(); i++){
    cout << v2[i]<<"\n";
  }
  cout << "\n";
  // another way for iterate through vector
  vi::iterator it = v2.begin();
  while (it != v2.end()) {
    /* code */
    cout << (*it) << " ";
    it++;
  }
  cout << "\n";
  // sorting vector
  sort(v2.begin(), v2.end());
  //printVec(v1, "after swapping: ");

  // sort decreasing order
  sort(v2.begin(), v2.end(), greater<int>());
  sort(v2.rbegin(), v2.rend());

  // create a 2d vector for boolean
  vector<vector<bool>> vbs(10, vector<bool>(20,true)); // create array 10 * 20 filled with trues

  // comparing vectors
  if(v1 < v2){
    cout << "v1 smaller than v2\n";
  }else{
    cout << "v2 is greater than v2\n";
  }

  // removing 2rd element
  v2.erase(v2.begin() + 1); // O(n)

  // insert at index 4 element 7
  v2.insert(v2.begin()+3, 7); // O(n)
  // insert at the end of the vector
  v2.push_back(20); // O(1)

  // check if element in array
  // algorithm in vector if element not exist it will return the v.end()
  vi::iterator it1 = v2.begin();
  while(it1 != v2.end()){
    cout << (*it1) << " ";
    it1++;
  }
  cout << "\n";

  if(find(all(v2), 7) != v2.end()){
    cout << "7 is in v2\n";
  }

  if(find(all(v), 9) == v2.end()){
    cout << "9 is not in v2\n";
  }

  // remove value if it's 7 you need to make sure first the element already exist if calling function without element exist return error
  v2.erase(find(all(v2), 7));
  // reverse vector
  reverse(all(v));
  // shuffle randomly array numbers
  random_shuffle(all(v));
  // remove last element in O(1)
  v2.pop_back();
  // empty vector
  v2.clear();


}

bool isOdd(int n)
{
  return n % 2 != 0;
}

void vectorMainpulation()
{
  const int length = 10;
  int array[length] = {10,10,10,3,1,2,4,5,6,3};
  vi v2(array, array+length);
  vi v1(v2.begin(), v2.begin()+5);

  // distance between 2 iterator
  cout << "distance: " << distance(v2.begin(), v2.begin()+3) << "\n";
  cout << "distance: " << distance(v2.begin()+4, v2.begin()) << "\n";

  vector<int>::iterator it;
  vector<int> v3= v2; // copy
  replace(all(v2), 2, 7); // replace all values 2 with 7
  replace_if(all(v3), isOdd, 15);

  // search for 3 consecutive elements with value 20
  it = search_n(all(v2), 3, 10);
  if(it !=v2.end()){
    cout << "sub-vector from index: " << it-v2.begin()<<"\n";
  }
  // unique / binarysearch/ lower_bound / upper_bounad must applied on sorted array
  sort(all(v2));
  vi::iterator iter = v2.begin();
  while(iter != v2.end()){
    cout << (*iter) << " ";
    iter++;
  }
  cout << "\n";

  bool ans = binary_search(all(v2), 10); // o(log n)
  cout << "search for 10: " << ans<<"\n";
  // find the first element greater than or equal to given value
  it = upper_bound(all(v2), 2);
  if(it != v2.end()){
    cout << "first element > 2 " << *it << "\n";
  }
  // return iterator to last element of unique sorted array
  v2.resize(unique(all(v2)) - v2.begin());
  while(it != v2.end()){
    cout << (*it) << " ";
    it++;
  }
  cout << "\n";
  // set_intersection / set_difference / set_union/ set_symmetric_difference must applied on sorted array
  v1 = v2;
  v1.push_back(v1.back());
  v1.push_back(v1.back()+20);
  v1.push_back(v1.back()+7);
  vector<int> v;
  set_intersection(all(v1), all(v2), back_inserter(v));
  v.clear();
  // you can check vector includes sub-vector without consutive
  set_difference(all(v1), all(v2), back_inserter(v));

  v.clear();
  set_union(all(v1), all(v2), back_inserter(v));
  // max elements
  int mx = *max_element(v2.begin(), v2.end());
  int mn = *min_element(v2.begin(), v2.end());
  cout << "max element " << mx << " min element " << mn << "\n";

  swap_ranges(v2.end()-2, v2.end(), v1.begin()); // you can swap different vectors

  int vecSum = accumulate(all(v2), 0); // return array sum
  int vecMul = accumulate(all(v2),1, multiplies<int>());

  int sumOfProducts = inner_product(all(v2), v2.begin(), 0); // innter product v2[0] * v2[0]

  // accumulate array from current index
  partial_sum(all(v2), v1.begin());
  // rotate
  rotate(v2.begin(), v2.begin()+1, v2.end());

}




int main()
{
  vectorBasicTest();
  vectorMainpulation();
  return 0;
}
