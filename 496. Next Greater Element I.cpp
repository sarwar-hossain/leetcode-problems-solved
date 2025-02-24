class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int, int>um;
       stack<int>s;

       for(int num : nums2){
           while(!s.empty() && num>s.top()){
              um[s.top()]=num;
              s.pop();
           }
           s.push(num);
       }

       while(!s.empty()){
          um[s.top()]=-1;
          s.pop();
       }
       
       vector<int>r;

       for(int num : nums1){
        r.push_back(um[num]);
       }

       return r;

    }
};