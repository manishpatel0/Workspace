// abcd = a^n + b^n + c^n + ...
// 153 = 1^3 + 5^3 + 3^3 
#include <iostream.h>

void main(){
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: " << endl;
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        cout << num << "is an Armstrong number." << endl;
    else
        cout << num << "is not an Armstrong number." << endl;
 
}
