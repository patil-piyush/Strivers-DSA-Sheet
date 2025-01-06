#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

//link - https://www.geeksforgeeks.org/problems/java-switch-case-statement3529/1

class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%lf ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        cout<<setprecision(3)<<fixed;
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};

//solution

class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        double area = 0.0;
        double R;
        double L;
        double B;
        switch (choice) {
            case 1: // Area of circle
                R = arr[0];
                area = M_PI * R * R;
                break;

            case 2: // Area of rectangle
                L = arr[0];
                B = arr[1];
                area = L * B;
                break;
        }
        return area;
    }
};




int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int choice;
        scanf("%d",&choice);
        
        
        vector<double> arr(choice);
        Array::input(arr,choice);
        
        Solution obj;
        double res = obj.switchCase(choice, arr);
        // cout<<fixed<<endl;
        if(res == int(res)){
            cout<<int(res)<<endl;
            continue;
        }
        cout<<setprecision(2)<<fixed;
        // 
        // }else{
            cout<<res<<endl;
        // }
        
    }
}