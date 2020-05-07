//
// Created by Joey B on 5/6/20.
//

#ifndef FINALPROJECT_TRIVIAL_H
#define FINALPROJECT_TRIVIAL_H


#include <iostream>
#include <vector>
#include <fstream>

using namespace std;



class trivial {
private:
    vector<string>storage; //vector of all words from file read in
public:
    void ReadIn(char*); //reads in the file and creates a vector of strings containing all words
    void search(string); //searches to see if user input is in any of the words (must be exact)

};


#endif //FINALPROJECT_TRIVIAL_H
