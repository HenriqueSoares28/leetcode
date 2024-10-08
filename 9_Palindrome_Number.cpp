
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        vector<int> arr;

        while(x > 0) {
            arr.push_back(x % 10);
            x = x/10;
        }

        int i=0;
        int j = arr.size() - 1;
        while(i < j) {
            if (arr[i] != arr[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};