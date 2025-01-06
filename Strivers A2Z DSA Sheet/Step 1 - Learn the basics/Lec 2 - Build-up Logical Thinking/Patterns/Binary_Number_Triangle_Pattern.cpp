#include <iostream>
using namespace std;

// Link - https://www.naukri.com/code360/problems/binary-number-triangle_6581890?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

// solution
void nBinaryTriangle(int n) {
    // Write your code here.
    for(int i = 0; i<=n; i++){
        if(i%2==0){
            int flag = 0;
            for(int j = 0; j<i; j++){
                cout<<flag<<" ";
                if(flag==1) flag=0;
                else flag=1;
            }
            cout<<endl;
        }
        else{
            int flag = 1;
            for(int j = 0; j<i; j++){
                cout<<flag<<" ";
                if(flag==1) flag=0;
                else flag=1;
            }
            cout<<endl;
        }
    }
}
// solution end

int main()
{
    nBinaryTriangle(5);
    return 0;
}



