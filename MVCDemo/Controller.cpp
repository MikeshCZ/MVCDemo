#include "Controller.h"

Controller::Controller(Model &model, View &view)
{
    _model = model;
    _view = view;
}

void Controller::AskForNumber()
{
    int number = _view.AskForNumber();
    _model.SetNumber(number);
}

void Controller::SetNumber(int number) { _model.SetNumber(number); }
int Controller::GetNumber() { return _model.GetNumber(); }
void Controller::UpdateView() const { _view.DisplayNumber(_model.GetNumber()); }
void Controller::UpdateView(string text) { _view.DisplayText(text); }