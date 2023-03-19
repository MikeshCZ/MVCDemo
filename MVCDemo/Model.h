#ifndef __MODEL_H__
#define __MODEL_H__

class Model
{
public:
    Model();
    void SetNumber(int data);
    int GetNumber() const;
private:
    int _number;
};

#endif