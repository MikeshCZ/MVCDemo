#include "Model.h"

Model::Model() 
{
	_number = 0;
}

void Model::SetNumber(int data) { _number = data; }
int Model::GetNumber() const { return _number; }