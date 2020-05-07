//
// Created by Joey B on 5/6/20.
//

#include "word.h"

void word::setID(string in) {
    ID = in;
}
string word::getID() {
    return ID;
}
void word::pushBack(string temp){
    store.push_back(temp);
}
vector<string> word:: getVec()
{
    return store;
}