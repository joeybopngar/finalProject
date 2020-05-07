//
// Created by Joey B on 5/6/20.
//

#ifndef FINALPROJECT_WORD_H
#define FINALPROJECT_WORD_H

#include <iostream>
#include <vector>

using namespace std;

class word {

private:
    vector<string>store; //vector to store all trigrams of each word obj
    string ID; //string to represent what the word is
public:
    void setID(string);  //sets ID
    string getID();     //Returns ID
    void pushBack(string); //acesses vector in word obj and pushes back strings
    vector<string> getVec(); //returns vector in a word obj
};


#endif //FINALPROJECT_WORD_H
