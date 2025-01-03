#include<iostream>
using namespace std;

//Link - https://www.geeksforgeeks.org/problems/triangle-pattern/1

//solution
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i<=j){
                    cout<<"* ";
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