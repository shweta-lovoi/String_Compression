//
// Created by Shweta on 1/13/2020.
//
#include <string>

#ifndef INC_1_6_STRING_COMPRESSION_COMPRESSION_H
#define INC_1_6_STRING_COMPRESSION_COMPRESSION_H
std::string compress(std::string input){
    //corner case of string being 1 character long
    int size = input.size();
    if(size < 2)
        return input;
    char comp;
    std::string output = "";
    //counter to count the number of characters.
    int num;
    //go over input string chars one at a time.
    for(int i = 0; i < size;){
        num = 1;
        //save the first character which needs to be compared with the rest
        comp = input[i];
        //increment to the next char in the string
        i++;
        //if the next character is the same as the one we are comparing it with increment the counter num by 1 and go to
        //the next char
        while(comp == input[i]) {
            num++;
            i++;
        }
        //create the new string using the character and the counter for it
        output += comp;
        output += std::to_string(num);
    }
    //if the new string is shorter than the one old return the new string otherwise return the original
    if(input.size() > output.size())
        return output;
    else
        return input;
}
#endif //INC_1_6_STRING_COMPRESSION_COMPRESSION_H
