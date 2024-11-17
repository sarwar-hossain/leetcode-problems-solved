//2




class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();

        sort(deck.begin(), deck.end());

        queue<int>indexQueue;

        for(int i=0;i<n;i++){
            indexQueue.push(i);
        }

        vector<int> result(n);

        for(int i=0;i<n;i++){
            result[indexQueue.front()]=deck[i];
            indexQueue.pop();

            if(!indexQueue.empty()){
                 indexQueue.push(indexQueue.front());
                 indexQueue.pop();
            }
        }
        return result;
    }
};