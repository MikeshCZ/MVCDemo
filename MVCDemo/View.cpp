#include "View.h"

View::View() {}

int View::AskForNumber()
{
    int number = 0;
    cout << endl << "Set intiger: ";
    cin >> number;
    if (cin.fail()) cout << "Error: Not an intiger input." << endl;
    return number;
}

void View::DisplayNumber(int number) const { cout << "Number: " << number << endl; }
void View::DisplayText(string text) const { cout << text << endl; }