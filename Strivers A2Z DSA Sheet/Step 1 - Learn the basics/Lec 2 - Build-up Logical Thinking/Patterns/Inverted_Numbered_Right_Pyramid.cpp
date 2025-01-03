#include<iostream>
using namespace std;

//Link - https://www.geeksforgeeks.org/problems/triangle-number-1661489840/1

//solution
class Solution {
  public:
    void printTriangle(int n) {
	    // code here
	    int count = 0;
	    for(int i = 0; i<n; i++){
            count = 0;
            for(int j = 0; j<n; j++){
                if(i<=j){
                    cout<<count+1<<" ";
                    count++;
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