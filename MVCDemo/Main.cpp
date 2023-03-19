// #include <iostream>

#include "Controller.h"
#include "View.h"
#include "Model.h"

// using std::string;
// using std::cin;
// using std::cout;
// using std::endl;

int main() {
    Model* model = new Model();
    View* view = new View();
    Controller* controller = new Controller(*model,*view);

    controller->UpdateView("Please set intiger number. If you want to exit se number to 0.");

    do
    {
        controller->AskForNumber();
        controller->UpdateView();
    } while (controller->GetNumber() != 0);
    
    delete model;
    delete view;
    delete controller;
    
    return 0;
}