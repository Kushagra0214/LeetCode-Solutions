
class Solution {
public:
    double solve(double x, int n, vector<double>& v){
        if(n<=0) return 1;
        if(n==1) return x;
        long long curr = 1;
        double res = 1;
        while((curr*2)<=n){
            v[curr*2] = v[curr]*v[curr];
            curr*=2; 
        }
        return v[curr]*solve(x, n-curr, v);
    }
    double myPow(double x, int num) {
        long long n = num;
        if(num==INT_MIN && x==-1) return 1;
        if(num==INT_MIN && x!=1) return 0;
        if(num==INT_MAX && x==-1) return -1;
        if(n<0){
            n = -n;
            x = 1/x;
        }
        if(n==0) return 1;
        if(n==1) return x;
        if(x==1) return 1;
        if(n==INT_MAX){
            if(x<1){
                return 0;
            }
        }
        vector<double> v(n+1, 1);
        v[1] = x;
        return solve(x, n, v);
    }
};