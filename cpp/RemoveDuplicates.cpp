//
// Created by 29443 on 2021/4/28.
//

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int len = nums.size();
    if(len==0||len==1) { return len;}
    int p=1,q=1;
    while(q<len) {
        if(nums[q]!=nums[q-1]){
            nums[p]=nums[q];
            p++;
        }
        q++;
    }
    return p;
}
//    Testing data:
//    i1:1,1,2;
//    i2:0,0,1,1,1,2,2,3,3,4

int main() {
    vector<int> i1,i2;

    i1={1,1,2};
    i2={0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(i1)<<endl;
    cout << removeDuplicates(i2);

}

