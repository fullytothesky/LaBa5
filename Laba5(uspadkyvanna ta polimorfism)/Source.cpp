#include "Header.h"

TMatrix::TMatrix() {
    n = 0;
    b = 0;
    matrix = nullptr;

}

TMatrix::TMatrix(int a, int c) {
    this->n = a;
    this->b = c;
    matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[b];
    }


}

TMatrix::~TMatrix() {
    for (int i = 0; i < n; i++) {
        delete[]  matrix[i];

    }
    delete[] matrix;

}

void TMatrix:: SetElement() {
    std::cout << "\nenter all elements of current matrix" << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            std::cout << "enter element" << "[" << i << "]" << "[" << j << "]:";
            std::cin >> matrix[i][j];
        }
    }
}
    void TMatrix:: GetMatrix() {
    std::cout << "\nyour matrix" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}
int TMatrix:: FindAverage() {
    int min_average;
    int sumofelements = 0;


    int allelements = n * b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            sumofelements += matrix[i][j];
        }

    }

    min_average = sumofelements / allelements;

    std::cout << "\nthe average of matrix is: " << min_average << std::endl;
    return min_average;
}

void TMatrix:: IncriminateMatrix(int a) {

    int add = a;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            matrix[i][j] = matrix[i][j] + add;
        }
    }
}
void TMatrix:: DecreaseMatrix(int a) {
    int decr = a;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            matrix[i][j] = matrix[i][j] - decr;

        }
    }
}












Inheritated1::Inheritated1() : TMatrix() {

    matr = nullptr;
    n = 0;
    b = 0;
}


Inheritated1::Inheritated1(int a, int c) : TMatrix(a, c) {
    this->n = a;
    this->b = c;
    matr = new float* [n];
    for (int i = 0; i < n; i++) {
        matr[i] = new float[b];
    }

}
Inheritated1::~Inheritated1() {
    for (int i = 0; i < n; i++) {
        delete[]  matr[i];

    }
    delete[] matr;


}


void Inheritated1::frandom() {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            matr[i][j] = ((float)rand() / RAND_MAX) * 25.0 + 1.0;
        }
    }
}

void Inheritated1::IncriminateMatrix(float a) {

    float add = a;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            matr[i][j] = matr[i][j] + add;
        }
    }
}
float Inheritated1::FindAverage() {
    float min_average1 = 0;
    float sumofelements = 0;


    int allelements = n * b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            sumofelements += matr[i][j];
        }

    }

    min_average1 = sumofelements / allelements;


    std::cout << "\nthe average of matrix is: " << min_average1 << std::endl;
    return min_average1;
}
void Inheritated1::GetMatrix()  {
    std::cout << "\nyour matrix" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < b; j++) {
            std::cout << matr[i][j] << " ";
        }
        std::cout << "\n";
    }
}












intInheritated::intInheritated() : TMatrix()
    {

    };

    intInheritated::intInheritated(int a, int c) : TMatrix(a, c)
    {

    };

    void intInheritated::random() {
        srand(time(NULL));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < b; j++) {
                matrix[i][j] = rand() % 25 + 1;

            }
        }
    }

   intInheritated:: ~intInheritated() {


    }


