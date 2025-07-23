//cpp code

//#include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // Input the number n

//     int i = 10; // Start from 10 for reverse order
//     while (i >= 1) {
//         cout << n * i << " "; // Print n * i
//         i--; // Decrement the counter
//     }

//     return 0;
// }


//java code
// link - https://www.geeksforgeeks.org/problems/while-loop-printtable-java/1

import java.util.*;

public class Main {
    public static void main(String args[]) {
        // Your Code Here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // Input the number n
        
        int i = 10; // Start from 10 for reverse order
        while (i >= 1) {
            System.out.print(n * i + " "); // Print n * i
            i--; // Decrement the counter
        }
    }
}