class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int current_sum = 0,count = 0;
        for(int i = 0;i<k;i++){
            current_sum+=arr[i];
        }
        if(current_sum/k>=(double)threshold){
            count++;
        }
        for(int i = k;i<arr.size();i++){
            current_sum += arr[i] - arr[i-k];
            if(current_sum/k>=(double)threshold){
                count++;
            }
        }

        return count;
    }
};