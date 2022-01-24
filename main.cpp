//  ANhw2
//  Created by Roohan Butt on 1/8/22
#include <iostream>
#include "numberStorage.hpp"
using namespace std;


int main() {
    
    //anytime an object is created, it calls upon constructor
    //comment out lines that are giving you errors
    numberStorage bestBuy(10, "Harold"); //tests constructor
    cout << bestBuy.getName() << endl; //tests getName()
    bestBuy.setName("Mickey"); //tests setName()
    cout << bestBuy.getName() << endl;
    cout << "The current m_startNum is: " << bestBuy.getStartNum() << endl; //tests getStartNum()
    bestBuy.setStartNum(22); //tests setStartNum()
    cout << "The new m_startNum is: " << bestBuy.getStartNum() << endl;
    bestBuy.holdAnumber(4); //test holdAnumber()
    cout << "The current m_holdNum is: " << bestBuy.getHoldNum() << endl; //tests getHoldNum()
    cout << "m_holdNum x m_startNum is: " << bestBuy.multiplyNums() << endl; //tests multiplyNums()
    
    
   /* node *curr = h;
    while (curr) {
        cout<< curr-> data << " ->" ;
      */  //curr = curr -> next;
    
    
   
    return 0;
}
