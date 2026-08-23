class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ptr1 =0,ptr2 = n-1;
        int m=0;
        while( ptr1 < ptr2){
            int curr =min(height[ptr1],height[ptr2])* (ptr2-ptr1);
            if(m<curr)
                m=curr;
            
            height[ptr1]<height[ptr2]? ptr1++ :ptr2--;
        }
        return m;
    }
};