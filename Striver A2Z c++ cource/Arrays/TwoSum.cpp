#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
       
        for(int st=0;st<nums.size();st++){
            for(int end=st+1;end<nums.size();end++){
                if(nums[st]+nums[end]==target){
                    return {st,end};
                }
            }
         } return {};

    }

int main(){
    return 0;
}