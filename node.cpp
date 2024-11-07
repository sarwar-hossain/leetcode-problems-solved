#include <iostream>

int main(){
  // 1: Cont frequesy of arr element
  vector<int> arr = {1, 2, 3, 1, 2, 1, 4, 5, 3, 2, 5, 5};
    map<int, int> um;  // sorted map
   // unordered_map<int, int> um    // unsorted map
    
    for(int i: arr){
       um[i]++;
    }
    for(const auto& i: um){
        cout<<i.first<<"-"<<i.second<<endl;
    }


// 2: Vector pair with push oparation 
    vector<pair<int, int>> vp;

    vp.push_back({1, 2});
    vp.push_back({3, 4});
    vp.push_back({5, 6});

    for (const auto& pair : vp) {
        cout << "(" << pair.first << ", " << pair.second << ")" <<endl;
    }


// 3: Copy map data to vector
    map<int, string> myMap = {
        {1, "One"},    
        {2, "Two"},
        {3, "Three"}
    };

    vector<pair<int, string>> myVector;

    for (const auto& pair : myMap) {
        myVector.push_back(pair);
    }

    for (const auto& pair : myVector) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

   
// 4: Sort vector acording to second element :
    vector<pair<int, int>> vec = {
        {1, 4},
        {2, 3},
        {3, 2},
        {4, 1}
    };         

    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    for (const auto& pair : vec) {
        cout << "{" << pair.first << ", " << pair.second << "} ";
    }


// 5: take only alphabate to lower
string s = "A man, a plan, a canal: Panama";
   string r="";
   
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            r += tolower(s[i]);
        }
    }
    cout<<r<<endl;


// 6: String in loop
string s="sarwarhossain";
      
      for(char i : s){
          cout<<i<<" ";
      }

      



}