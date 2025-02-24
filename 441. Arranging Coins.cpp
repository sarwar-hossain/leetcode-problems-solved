class Solution {
public:
    int arrangeCoins(int n) {
        if(n<2){
            return 1;
        }
        
        int count=1;

        while(n>0){
            n-=count;
            count++;
        }

        if(n==0){
            return count-1;
        }
        
        return count-2;
    }
};




/*

Example 1:

$
$ $
$ $ 0


Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.
Example 2:

$
$ $
$ $ $
$ $ 0 0


Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.


*/