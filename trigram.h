//
// Created by Joey B on 5/6/20.
//

#ifndef FINALPROJECT_TRIGRAM_H
#define FINALPROJECT_TRIGRAM_H


#include <iostream>
#include <vector>
#include <fstream>
#include "word.h"

using namespace std;



class trigram {
private:
    vector<word>index; //vector of word objs
public:
    void CreateIndex(string); //creates an index of trigrams for every word read in
    void FindSimilar(string); //breaks down user input into a trigram and finds matches. if words match at 40% or higher it will display them
};


#endif //FINALPROJECT_TRIGRAM_H
