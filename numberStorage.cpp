//  numberStorage.cpp
//  ANhw2
//  Created by Roohan Butt on 1/8/22

#include "numberStorage.hpp"

numberStorage::numberStorage(int givenNum, string givenName) {              //:: allows access to things inside class
    
    // constructor is called whenever an object is created
    // givennum is stored in m_startNum
    //m_startNum changed (lefft side changes)
    m_StartNum = givenNum;                                                  // constructor allows object to be made. is method not
    //object
    m_name = givenName;
}

string numberStorage::getName() {
    
    return m_name ;
    
}

void numberStorage::setName(string givenName){
    
    m_name = givenName;
}

void numberStorage::setStartNum(int givenNum ) {
    
    m_StartNum = givenNum;
    
}

int numberStorage::getStartNum(){
    return m_StartNum;
}


void numberStorage::holdAnumber(int givenNum) {
    
    m_holdNum= givenNum;
}

int numberStorage:: multiplyNums() {
    
    return m_holdNum * m_StartNum;
    
}

int numberStorage::getHoldNum(){
    
    return m_holdNum;
    
}



