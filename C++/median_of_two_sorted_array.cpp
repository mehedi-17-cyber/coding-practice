#include<iostream>
#include<vector>
using namespace std;

double median(vector<int>& nums1, vector<int>& nums2) {

    int m = nums1.size(), n = nums2.size();
    int len = m + n;
    
    if(m > n) 
        return median(nums2,nums1);
        
    int left = (m + n + 1) / 2;
    int low = 0, high = m;
    
    while(low <= high) {
    
        int mid1 = (low + high) / 2;
        int mid2 = left - mid1;
        
        int l1 = INT_MIN, l2 = INT_MIN, r1 = INT_MAX, r2 = INT_MAX;
        
        if(mid1 - 1 >= 0)
            l1 = nums1[mid1 - 1];
        if(mid2 - 1 >= 0)
            l2 = nums2[mid2 - 1];
        if(mid1 < m) 
            r1 = nums1[mid1];        
        if(mid2 < n)
            r2 = nums2[mid2];
            
        if(l1 <= r2 && l2 <= r1) {
           if(len%2==1) {
               return max(l1,l2);
           }
           return (max(l1,l2) + min(r1,r2)) / 2.0;
        }
        else if(l1 > r2)
            high = mid1 - 1;
        else
            low = mid1 + 1;
    }
    return 0.0;
}                                   
 
int main()
{
    vector<int> nums1 = {0,1,3}, nums2 = {2,4,5};
    cout << "Median : " << median(nums1,nums2) << endl;
    
    return 0;
}