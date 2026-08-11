class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int num=0;
        for (int i =0;i<arr.size();i++)
        num=num^arr[i];
        return num;
    }
};