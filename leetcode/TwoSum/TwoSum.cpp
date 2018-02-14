#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    vector<int> result(2);
    for(size_t i=0;i<nums.size();i++){
        for(size_t j=i+1;j<nums.size();j++){
            if((nums[i]+nums[j])==target){
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
    }
    return result;
}
int main(){
    vector<int> array(4);
    array[0]=2;
    array[1]=9;
    array[2]=11;
    array[3]=7;
    int target=9;
    vector<int> result(2);
    result=twoSum(array, target);
    cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;
    return 0;
}
