class Solution {
public:
    int passThePillow(int n, int time) {
        int rot = time/(n-1);
        if(rot%2==0){
            return time%(n-1)+1;
        }
        else{
            return n - time%(n-1) ;
        }
        
    }
};