//int n=*max_element(piles.begin(), piles.end())...for highest element

//WHEN WE SEE PATERN..IT is binary search
//xxxxxxxxxxxxxxxxxxxxxxxxxxxx000000000000000000000000000000000
//not possible                minimulpossible         allpossible 
//low                             mid                     high


//so binary search
//whenever i get 3parts...i can replace 
//linear search....... to.........binary search
//O(n).................to..........O(logN)
//range matters...for time complexity
//so try to minimize the range

//if you could bring sort term,then bs
//int n=*max_element(piles.begin(), piles.end())...for highest element
#include <vector>
#include <math.h>
class Solution {
private:
    long long totalHourCount(vector<int>& piles, int r) {  // Use long long here
        int v = piles.size();
        long long totalhour = 0;  // Use long long here
        for (int i = 0; i < v; i++) {
            totalhour += ceil((double)piles[i] / (double)r);
        }
        return totalhour;
    }
    //int n=*max_element(piles.begin(), piles.end())...for highest element
    //custom one-
    long long maxi(vector<int>& piles){
        long long maxi=INT_MIN;
        int v = piles.size();
        for (int i = 0; i < v; i++) {
            if (piles[i]>maxi) maxi=piles[i];
            
        }
        return maxi;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // int n=*max_element(piles.begin(), piles.end()),low=0,high=n-1,mid=0,ans=INT_MAX;
        // int n=*max_element(piles.begin(), piles.end()),low=1,high=n,mid=0,ans=INT_MAX;
        int n=maxi(piles),low=1,high=n,mid=0,ans=INT_MAX;
        while (low<=high){
            mid=(low+((high-low)/2));
            long long totalHour=totalHourCount(piles,mid);
            if (totalHour<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }

        return ans;

        
    }
};