class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>v;
        while(x > 0){
            v.push_back(x%10);
            x /= 10;
        }
        vector<int>copy = v;
        reverse(copy.begin(),copy.end());
        return v == copy;
    }
};