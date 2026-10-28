class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0,r= n-1,max = 0;
    
        while(l<r){
            int result = (r-l)*min(height[l],height[r]);
            if(result>max){
                max = result;
                if(height[l]<height[r]){
                    l++;
                }else{
                    r--;
                }
                
            }else if(result<max){
                if(height[l]<height[r]){
                    l++;
                }else{
                    r--;
                }
            }else{
                if(height[l]<height[r]){
                    l++;
                }else{
                    r--;
                }
            }
    }
        return max;
    }

};