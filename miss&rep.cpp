class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int x=0;
        for(int i=0; i<n; i++){
            x^=(i+1); x^=arr[i];
        }
        // x == missing^repeating... 
        int setbit = (~(x-1))&x;
        int miss=0,rep=0;
        for(int i=0; i<n; i++){
            if(arr[i]&setbit){
                miss^=arr[i];
            }else rep^=arr[i];
            if((i+1)&setbit) miss^=(i+1);
            else rep^=(i+1);
        }
        // now rep and miss we have something but not sure who is rep and miss...
        for(int i=0; i<n; i++){
            if(arr[i]==miss){
                miss = rep;
                rep = arr[i];
            }
        }
        vector<int> temp = {rep,miss};
        return temp;
    }
};
