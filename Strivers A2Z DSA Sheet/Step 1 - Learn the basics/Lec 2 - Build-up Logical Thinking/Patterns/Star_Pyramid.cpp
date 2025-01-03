#include<iostream>
using namespace std;

//Link - https://www.geeksforgeeks.org/problems/triangle-pattern-1661492263/1

//solution
class Solution {
  public:
    void printTriangle(int n) {
	    // code here
	    for(int i = 0; i<n; i++){
            for (int j =0; j<n-i-1; j++)
            {
                cout <<" ";
            }
           
            // For printing the stars in each row
            for(int j=0;j< 2*i+1;j++){
                
                cout<<"*";
            }
            
            // For printing the spaces after the stars in each row
             for (int j =0; j<n-i-1; j++)
            {
                cout <<" ";
            }
            
            // As soon as the stars for each iteration are printed, we move to the
            // next row and give a line break otherwise all stars
            // would get printed in 1 line.
            cout << endl;
        }
	}
};
//solution end 

int main(){
    Solution s;
    s.printTriangle(3);
    return 0;
}