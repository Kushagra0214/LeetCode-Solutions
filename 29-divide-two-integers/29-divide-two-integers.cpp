class Solution {
public:
    int divide(int dividend, int divi) {
        if(dividend== INT_MIN && divi== 1) return INT_MIN;
        if(dividend== INT_MIN && divi== -1) return INT_MAX;
        
        if(divi==1){
            return dividend;
        }
        long long mxm = 2147483647;
        long long mnm = -2147483648;
        bool flag = false;
        long long divident = dividend;
        long long divisor = divi;
        if(divident<0){
            divident = -divident;
            flag = true;
        } 
        if(divisor<0){
            divisor = -divisor;
            if(flag){
                flag = false;
            } else {
                flag = true;
            }
        }
        int res = 0;
        while(divident>=divisor){
            divident -= divisor;
            res++;
            if(res==mxm-1 && flag==true){
                return mnm;
            } 
            if(res==mxm){
                return mxm;
            }
        }
        if(flag) res = -res;
        return res;
    }
};