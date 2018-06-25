#include <iostream>
#include<limits.h>
using namespace std;


int main()
{
    float medianOfTwoSortedArrays(int *arr1,int *arr2);
    int a[] = {1, 3, 8, 9, 15};
    int b[] = {7, 11, 19, 21, 18, 25};
    cout<<medianOfTwoSortedArrays(a,b);
    return 0;
}
float medianOfTwoSortedArrays(int *arr1,int *arr2){
    int x= 5;//sizeof(arr1);
    int y= 6;//sizeof(arr2);
    /*
    if(x>y){
        return medianOfTwoSortedArrays(arr2,arr1);
    }
    */

    // doing binary search in array of lower length
    int low = 0,high=x;
    while(low<=high){
        // making the partitions
        int partitionX =(low+high)/2;
        int partitionY = (x+y+1)/2-partitionX;

        // Smaller array
        int maxLeftX = (partitionX==0)? INT_MIN:arr1[partitionX-1];
        int minRightX = (partitionX==x)? INT_MAX:arr1[partitionX];

        // Larger array
        int maxLeftY = (partitionY==0)? INT_MIN:arr2[partitionY-1];
        int minRightY = (partitionY==y)? INT_MAX:arr2[partitionY];

        if(maxLeftX<=minRightY && maxLeftY<=minRightX){
            // we have found the partition
            if((x+y)%2==0){
                return (max(maxLeftX,maxLeftY) + min(minRightX,minRightY))/2;
            }
            return max(maxLeftX,maxLeftY);
        }else if(maxLeftX>minRightY){
            high = partitionX-1;// too far on the right side, need to move left
        }else{
            low = partitionX+1;// too far on left side , need to move right
        }
    }

}
