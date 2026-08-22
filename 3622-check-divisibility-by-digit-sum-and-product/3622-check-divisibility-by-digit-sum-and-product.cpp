class Solution {
public:
    bool checkDivisibility(int n) {
        long long prod = 1;
        int sum = 0;
        int x = n;
        while(n>0){
            prod*=(n%10);
            sum+=(n%10);
            n/=10;
        }
        if(x%(sum + prod)==0)return 1;
        else return 0;
        
    }
};