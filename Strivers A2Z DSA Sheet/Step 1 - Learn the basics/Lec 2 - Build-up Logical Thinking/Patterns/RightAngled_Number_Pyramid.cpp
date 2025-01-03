#include<iostream>
using namespace std;

//Link - https://www.geeksforgeeks.org/problems/triangle-number/1

//solution
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i>=j){
                    cout<<j+1<<" ";
                }
            }
            cout<<"\n";
        }
    }
};
//solution end

int main(){
    Solution s;
    s.printTriangle(3);
    return 0;
}