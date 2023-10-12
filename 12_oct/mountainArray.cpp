class Solution {
public:

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int len = mountainArr.length();
        int low=1, high=len-2, peak;
        while(low!=high)
        {
            int mid = (low+high)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                low = mid+1;
            }
            else{
                high=mid;
            }
        }
        peak = low;

        low = 0, high = peak;
        while(low!=high)
        {
            int mid = (low+high)/2;
            if(mountainArr.get(mid)<target){
                low = mid+1;
            }
            else{
                high=mid;
            }
        }
       if(mountainArr.get(low)==target)
        return low;
        low = peak+1, high = len-1;
        while(low!=high)
        {
            int mid = (low+high)/2;
            if(mountainArr.get(mid)>target){
                low = mid+1;
            }
            else{
                high=mid;
            }
        }
       if(mountainArr.get(low)==target)
        return low;

        return -1;
    }
};
