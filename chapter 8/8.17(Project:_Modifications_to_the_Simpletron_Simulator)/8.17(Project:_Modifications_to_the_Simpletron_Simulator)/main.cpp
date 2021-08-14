//
//  main.cpp
//  8.17(Project:_Modifications_to_the_Simpletron_Simulator)
//
//  Created by Sabuhi Ibrahimov on 08.06.21.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int memory[1000] = {};
    int instructionRegister = 0;
    int instructionCounter = 0;
    int accumulator = 0;
    int operationCode = 0;
    int operand =0;
    
    while (instructionRegister !=-99999){
        cout << setfill( '0' ) <<setw(2) << instructionCounter << " ? ";
        while(true){
            cin >> instructionRegister;
            if (instructionRegister == -99999)
                break;
            else if(-9999 <= instructionRegister && instructionRegister <= 9999){
                memory[instructionCounter] = instructionRegister;
                ++instructionCounter;
                break;
            }
            cout << "Reenter register" << endl;
            cout << setfill( '0' ) <<setw(2) << instructionCounter << " ? ";
        }
        
    }
    instructionCounter = 0;
    bool flag = true;
    while(flag){
        instructionRegister = memory[instructionCounter];
        operationCode = instructionRegister / 100;
        operand = instructionRegister % 100;
        switch (operationCode) {
            case 10:
                cout << "Enter value: ";
                cin >> memory[ operand ];
                break;
            case 11:
                cout << memory[ operand ];
                break;
            case 12:
                cout << "\n";
                break;
            case 20:
                accumulator = memory[ operand ];
                break;
            case 21:
                memory[ operand ] = accumulator;
                break;
            case 30:
                accumulator += memory[ operand ];
                break;
            case 31:
                accumulator -= memory[ operand ];
                break;
            case 32:
                accumulator /= memory[ operand ];
                break;
            case 33:
                accumulator *= memory[ operand ];
                break;
            case 34:
                accumulator %= memory[ operand ];
                break;
            case 35:
                accumulator = pow(accumulator,memory[ operand ]);
                break;
            case 40:{
                instructionCounter =  operand;
                --instructionCounter;
            }
                break;
            case 41:
                if ( 0 > accumulator ){
                    instructionCounter = operand;
                --instructionCounter;
                }
                break;
            case 42:
                if ( 0 == accumulator ){
                    instructionCounter = operand;
                --instructionCounter;
                }
                break;
            case 43:
                flag = false;
                break;
                
            default:
                break;
        }
        ++instructionCounter;
    }
    cout << endl;
}

