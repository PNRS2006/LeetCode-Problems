class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& a) {
        int t_sum=0;
        for(int i=0;i<a.size();i++){
            int sum=0;
	        for(int j=i;j<a.size();j++){
	            sum += a[j];
                if((j-i+1)%2!=0) t_sum+=sum;
	        }
	    }
        return t_sum;
    }
};