//
//  main.cpp
//  6.25(Calculating_Number_of_Seconds)
//
//  Created by Sabuhi Ibrahimov on 24.01.21.
//

#include <iostream>
int numberSeconds(int, int, int);

int main() {
    int time1= 0;
    int time2= 0;
    int hh = 0;
    int mm = 0;
    int ss = 0;
    std::cout << "Enter time like as hh mm ss sequence: ";
    std::cin >> hh >> mm >> ss;
    time1 = numberSeconds(hh, mm, ss);
    std::cout << "Enter second time like as hh mm ss sequence: ";
    std::cin >> hh >> mm >> ss;
    time2 = numberSeconds(hh, mm, ss);
    std::cout << "\nAmount of time in seconds between two times is: " << "|" << time1 << " - " << time2 << "| = " << abs(time1- time2) << std:: endl;
}


int numberSeconds(int hh, int mm, int ss){
    return 3600 * hh + mm * 60 + ss;
}
