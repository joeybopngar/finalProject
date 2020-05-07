//
// Created by Joey B on 5/6/20.
//

#include "trigram.h"

void trigram::CreateIndex(string file) {

    string temp; //temp string to store trigrams
    char buffer[50];
    ifstream ifile;
    ifile.open(file);
    if(ifile.fail()){
        cout << "unable to open file"<<endl;
    }
    while(!ifile.eof()){
        word word; //temp word obj
        int start = 0; // used for substring. start of the trigram
        int it = 1; //end of the trigram
        ifile.getline(buffer, 50, ' ');
        word.setID(buffer); //creates word obj and gives it an ID(the actual word)
        if(word.getID().size() <= 3){ //if word is less than three its already a trigram
            word.pushBack(buffer); //adds trigram to vector of trigrams associated w word
            index.push_back(word); //adds word obj to index
        }
        else {
            for(int i =0; i<word.getID().size(); i++){ //whole functions breaks down words into trigrams
                temp = word.getID().substr(start, it);
                start++;
                it++;
                if((temp.size() <=3)&&(it != word.getID().size())){
                    word.pushBack(temp);
                }
            }
            index.push_back(word); //then adds the word objs with their ID and vector of trigrams to the index
        }
    }

}
void trigram::FindSimilar(string input) {
    vector<string>storage;// temp vec to store trigram of user's input
    int start = 0;
    int it = 1;
    string temp;
    for (int i = 0; i < input.size(); i++) { //breaks down word into trigram
        temp = input.substr(start, it);
        start++;
        it++;
        if ((temp.size() <= 3) && (it != input.size())) {
            storage.push_back(temp); //now we have a vector of trigrams that coreespond to the user's input
        }

    }

    double counter = 0;

    for(int x =0; x<index.size(); x++){ //will traverse index
        counter = 0;
        vector<string> temp;
        temp = index[x].getVec();
        for(int y =0; y <temp.size(); y++){ //will traverse the vector of a word obj

            //   counter = 0;
            for(int z =0; z<storage.size(); z++){ //will traverse storage comparing every trigram of user input to every single trigram in the index
                if(storage[z] == temp[y]){

                    counter++;
                }

            }

        }
        double q = counter;
        double t = temp.size();
        double percent = ((counter/temp.size())*100); //percentage of shred trigrams and there similarity of words
        if ( percent >= 40){ //if they're 40% similar or higher it displays the words
            cout<< input << " is "<< percent<< "%" << " similar to the word: "<< " \"" <<  index[x].getID() << "\"" <<" at index: " << x << endl;
        }
        temp.erase(temp.begin(), temp.end()); //erases temp just to make sure it's deletes all used trigrams
    }

}

