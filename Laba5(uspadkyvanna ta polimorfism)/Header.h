#pragma once
#include <iostream>
#include<cstdlib>
#include <ctime>


class TMatrix {
protected:
    int n;
    int b;
    int** matrix;

public:
    TMatrix();
    TMatrix(int a, int c);
    ~TMatrix();
    void SetElement();
    virtual void GetMatrix();
    int FindAverage();
    void IncriminateMatrix(int a);
    void DecreaseMatrix(int a);


};




class Inheritated1 : public TMatrix {
protected:
    float** matr;


public:
    Inheritated1()  ;
    Inheritated1(int a, int c)  ;
    ~Inheritated1();
    void frandom();
    void IncriminateMatrix(float a);
    float  FindAverage();
    void GetMatrix() override;
};



class intInheritated :public TMatrix {

public:
    intInheritated()  ;
    intInheritated(int a, int c)  ;
    void random();
    ~intInheritated();

};