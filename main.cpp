//
// Created by Joey B on 5/6/20.
//

#include <iostream>
#include "trivial.h"
#include "trigram.h"
#include <chrono>

int main() {
     char * yew = "data.txt";
    trivial obj;
    obj.ReadIn(yew);
    auto startTime = chrono::high_resolution_clock::now();
    obj.search("scince"); //INSERT WORD TO SEARCH FOR THE TRIVIAL SOLUTION
    auto elapsed = chrono::high_resolution_clock::now() - startTime; //endtime
    long long timeTotal = chrono::duration_cast<chrono::microseconds>(elapsed).count();
    double time = timeTotal; // 1000000.00;
    cout<< "Algorithim took: "<< time<< " Microseconds. Results displayed above^" <<endl<<endl;
    trigram obj2;
    obj2.CreateIndex(yew);
    auto startTime2 = chrono::high_resolution_clock::now();
    obj2.FindSimilar("scince"); //INPUT WORD TO SEARCH FOR TRIGRAM SOLUTION
    auto elapsed2 = chrono::high_resolution_clock::now() - startTime2; //endtime
    long long timeTotal2 = chrono::duration_cast<chrono::microseconds>(elapsed2).count();
    double time2 = timeTotal2 ;// 1000000.00;
    cout<< "ALgorithim took: " << time2 << " Microseconds. Results displayed above^" <<endl;

    return 0;
}
