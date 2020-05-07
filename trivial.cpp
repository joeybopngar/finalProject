//
// Created by Joey B on 5/6/20.
//

#include "trivial.h"
void trivial::ReadIn(char* file) {
    char buffer[50];
    string compare; //temp string for read in words
    ifstream ifile;
    ifile.open(file);
    if (ifile.fail()) {
        cout << " file not open" << endl;
    }
    while(!ifile.eof()){
        ifile.getline(buffer, 50, ' ');
        compare = buffer;
        storage.push_back(compare); //creates vector of strings to represent words

    }
}
void trivial::search(string find) {
    for (int i = 0; i < storage.size(); i++) {
        int pos = 0;
        int index;
        while ((index = storage[i].find(find, pos)) != string::npos) { //uses the std lib find function to find exact matches to user input
            cout << "Match found at position: " << i << endl; //displays which index in array match is found in
            pos = index + 1;
        }
    }
}
