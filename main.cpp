//
//  main.cpp
//  Program #1
//
//  Created by Llendel Reyes on 1/31/17.
//  Copyright © 2017 Llendel Reyes. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    
    float *sum = new float;                 // Declaration of variables
    float *difference = new float;
    float *product = new float;
    float *quotient = new float;
    float operand1;
    float operand2;
    
    char userOperation, userAnswer;
    
    
    // Prompts user to perform a calculation
    cout<<"Do you want to perform a calculation? Enter 'Y' or 'N'." <<endl;
    cin>> userAnswer;
    
    
    // Enters loop if user inputs 'Y'
    while ((userAnswer == 'Y') || (userAnswer == 'y')) {
        
        
    // Prompts user which operator to use
        
        cout<<"What operation do you want to perform? Enter '+', '-', '*', or '/'. Enter '0' to quit." <<endl;
        cin>> userOperation;
        
        //Determines which operator to use based off of user input
        
        switch ((userOperation)) {
                
            case '+':      // if user uses addition operator
                
                *sum = 0;
                cout << "What number would you like to add first?" << endl;
                cin >> operand1;
                cout << "What number would you like to add second?" << endl;
                cin >> operand2;
                
                *sum = operand1 + operand2;
                
                cout << operand1 << " + " << operand2 << " = " << *sum << endl;
                
                break;
                
            case '-':     // if user uses subtraction operator
    
                *difference = 0;
                cout << "What number would you like to subtract first?" << endl;
                cin >> operand1;
                cout << "What number would you like to subtract second?" << endl;
                cin >> operand2;
                
                *difference = operand1 - operand2;
                
                cout << operand1 << " - " << operand2 << " = " << *difference << endl;
                
                break;
                
            case '*':     // if user uses multiplication operator
                
                *product = 0;
                cout << "What number would you like to multiply first?" << endl;
                cin >> operand1;
                cout << "What number would you like to multiply second?" << endl;
                cin >> operand2;
                
                *product = operand1 * operand2;
                
                cout << operand1 << " * " << operand2 << " = " << *product << endl;
                
                break;
                
            case '/':     // if user uses divison operator
                
                *quotient = 0;
                cout << "What number would you like to divide first?" << endl;
                cin >> operand1;
                cout << "What number would you like to divide second?" << endl;
                cin >> operand2;
                
                if (operand2 != 0) {
                    
                    *quotient = operand1 / operand2;
                    cout << operand1 << " / " << operand2 << " = " << *quotient << endl;
                    
                }
                
                else {
                    
                    cout << "Answer is undefined." << endl;
                    
                }
                
                break;
                
            case '0':                   // Quits program
                
                return 0;
        }
            
        
    }
        return 0;
}
