//
//  main.cpp
//  5.28(“The_Twelve_Days_of_Christmas”_Song)
//
//  Created by Ibrahimov Sabuhi on 10/24/20.
//  Copyright © 2020 Ibrahimov Sabuhi. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;



int main(int argc, const char *argv[]) {
     
    for (int i = 1; i <= 12; i++) {
         cout << "\nOn the ";
        switch (i) {
            case 1:
                 cout << "First";
                break;
            case 2:
                 cout << "Second";
                break;
            case 3:
                 cout << "Third";
                break;
            case 4:
                 cout << "Fourth";
                break;
            case 5:
                 cout << "Fifth";
                break;
            case 6:
                 cout << "Sixth";
                break;
            case 7:
                 cout << "Seventh";
                break;
            case 8:
                 cout << "Eighth";
                break;
            case 9:
                 cout << "Nineth";
                break;
            case 10:
                 cout << "Tenth";
                break;
            case 11:
                 cout << "Eleventh";
                break;
            case 12:
                 cout << "Twelveth";
                
            default:
                 cout << "";
        }
         cout << " day of Christmas my true love sent to me\n";
        
        string preStr;
        
        switch (i) {
            case 12:
                 cout << "Twelve Drummers Drumming" <<  endl;
            case 11:
                 cout << "Eleven Pipers Piping" <<  endl;
            case 10:
                 cout << "Ten Lords a-Leaping" <<  endl;
            case 9:
                 cout << "Nine Ladies Dancing" <<  endl;
            case 8:
                 cout << "Eight Maids a-Milking" <<  endl;
            case 7:
                 cout << "Seven Swans a-Swimming" <<  endl;
            case 6:
                 cout << "Six Geese a-Laying" <<  endl;
            case 5:
                 cout << "Five Gold Rings" <<  endl;
            case 4:
                 cout << "Four Calling Birds" <<  endl;
            case 3:
                 cout << "Three French Hens" <<  endl;
            case 2:
                 cout << "Two Turtle Doves" <<  endl;
            case 1:
                cout << ((i > 1) ? preStr = "and a" : preStr = "a") + " Partridge in a Pear Tree\n" ;
            default:
                break;
        }
    }
    return 0;
}


