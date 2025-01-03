#include<iostream>
using namespace std;

//Link to Problem Statement - https://www.geeksforgeeks.org/problems/square-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_1

//solution
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
};
//solution end


int main(){
    Solution s;
    s.printSquare(3);
    return 0;
}