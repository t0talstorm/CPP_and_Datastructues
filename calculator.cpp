#include <iostream>
using namespace std;

// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1

int main() {
    float n1 , n2 , add , sub , multi , divi ;
    cout <<"Enter First number: ";
    cin >> n1;
    cout << "Enter Second Number: ";
    cin >> n2;
    add = n1 + n2;
    cout << "The addition is : " << add<<endl;  
    sub = n1 - n2;
    cout << "The substraction is : " << sub<<endl;  
    multi = n1 * n2;
    cout << "The multiplication is : " << multi<<endl;  
    if(n2 == 0){
        cout << "Division by 0 is not possible "<<endl;
    }else{
        divi = n1/n2;
        cout << "The division is : " << divi<<endl; 
    }
    
    return 0;
}

//output
/*
Enter First number: 24
Enter Second Number: 23
The addition is : 47
The substraction is : 1
The multiplication is : 552
The division is : 1.04348


=== Code Execution Successful ===
*/
