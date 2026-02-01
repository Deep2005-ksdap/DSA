#include<iostream>
#include<vector>  //stl container 
using namespace std;

// inverse a array using two pointe approach
void inverseVector(vector<int> &vec){
  int start = 0;
  int end = vec.size()-1;
  while(start < end) {
    swap(vec.at(start), vec.at(end));
    start++;
    end--;
  }
}

int main() {
  // vector<int> vec;
  vector<int> vec = {1, 3, 4};
  // vector<int> vec (5,1);

  cout << "Size: " << vec.size() <<endl;  // to get the size of vectors (no. of elements)
  cout << "Capacity: " << vec.capacity() <<endl; //to get no. of cells   
  vec.push_back(25); // push at the back
  vec.push_back(26);
  cout << "Size after push back: " << vec.size();
  vec.pop_back(); //delete at the end

  // cout << vec.front() << endl;
  // cout << vec.back() << endl;
  // cout << vec.at(1) << endl;  
  
  //linear search
  int target = 1;
   for( int i = 0 ; i < vec.size(); i++) {
     if(vec[i] == target) {
      cout << i << endl;
      break;
     }
     else{
      return -1;
     }
   }

   // inversing the array
   inverseVector(vec);
   cout << "Reversed vector: ";
   for(int val: vec) {
    cout << val << " " ;
   }
   cout <<endl;

  return 0;
}

