//binary search basicO(logN)
//not only in array,but also in dictionary and everything
//overflow...if low,high..both become INT_MAx...
//either long long low ,high mid
//or mid=low+((high-low)/2)

//     //O(logN)
//             //recurrssive technic
//     private:int bs(vector<int>& nums, int target,int low ,int high){
//         if (low>high)return -1;
//         int mid=(low+high)/2;
//             if (nums[mid]==target)return mid;
//             else if (nums[mid]<target) return bs(nums,target,mid+1,high);
//             else{ return bs(nums,target,low,mid-1);}
//     }
// public:

    //     int low=0,high=nums.size()-1,mid=0;
    //     //recurrssive technic
    //         return bs(nums,target,low ,high);
            //while loop technic
    
            //mid=low+high/2..wrong
            //mid=(low+high)/2;
class Solution {
public:
int search(vector<int>& nums, int target) {
                int low=0,high=nums.size()-1,mid=0;
        while(low<=high){
            mid=low+((high-low)/2);
            if (nums[mid]==target)return mid;
            if (nums[low]<=nums[mid]){
                if ((nums[mid]>=target)&&(target>=nums[low])){ high=mid-1;
                 //imagine nums[mid]=target=nums[low]
                //imagine nums[mid]=target  only
                //imagine target=nums[low]
                }
                else{low=mid+1;}
            }
            else{ 
                if ((nums[high]>=target)&& (target>=nums[mid])){ low=mid+1;}
                else{ high=mid-1;}}
        }
       return -1;
    }
};