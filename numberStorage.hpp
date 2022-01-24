//  numberStorage.hpp
//  ANhw2
//  Created by Roohan Butt on 1/8/22.
#ifndef numberStorage_hpp
#define numberStorage_hpp

#include <iostream>
#include <stdio.h>

using namespace std;

class numberStorage {
public:
    numberStorage(int givenNum, string givenName);
    //this is the constructor, it sets startNum and
    //name using the given parameters
    
    // input: int givenNum , stores a given number in m_startNum
    //        string givenName, stores a given name in m_name
    //        numberStorage* givenNext , stores the pointer to the next object in m_next
    //        numberStorage* givenPrev, stores the pointer to the previous object in m_prev
    numberStorage(int givenNum, string givenName, numberStorage* givenNext, numberStorage* givenPrev);
    
    string getName(); //this method is supposed to return the name of the object
    
    void setName(string givenName); //this method sets the name again
    
    void setStartNum(int givenNum); //this method sets the startNum again
    
    int getStartNum(); //this method returns the current startNum
    
    void holdAnumber(int givenNum); //this method stores the given number in holdNum
    
    int multiplyNums(); //this method multiplies holdNum and startNum then returns the result
    
    int getHoldNum(); //this method returns holdNum
    
    
private:
    int m_StartNum;
    int m_holdNum;
    string m_name;
    numberStorage* m_next;
    numberStorage* m_prev;
    
    
    
};
#endif /* numberStorage_hpp */

