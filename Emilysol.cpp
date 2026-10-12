#include <iostream>
using namespace std;

// Isaiah Perez
// Discussion 5 solution to Emily
// 10/11/26

int addNumbers(int a, int b) {
    //Error where the function was returning a + c instead of a + b, which is the correct sum of the two numbers.
    return a + b; 
}

int main() {

    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // Error where the function had a typo in the function name addNumbers.
    int result = addNumbers(num1, num2); 

    cout << "The sum is: " << result << endl;

    return 0;
}
