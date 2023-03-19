#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include "Model.h"
#include "View.h"

class Controller 
{
public:
    Controller(Model &model, View &view);
    void AskForNumber();
    void SetNumber(int data);
    int GetNumber();
    void UpdateView() const;
    void UpdateView(string text);
private:
    Model _model;
    View _view;
};

#endif