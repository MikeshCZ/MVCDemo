#ifndef __VIEW_H__
#define __VIEW_H__

#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class View 
{
public:
    int AskForNumber();
    void DisplayNumber(int number) const;
    void DisplayText(string text) const;
};

#endif