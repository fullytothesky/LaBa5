#include "Header.h"


    int main()
    {
        
        int choice = 1, choice1;
        int a, b;
        std::cout << "enter rows of matrix:";
        std::cin >> a;
        std::cout << "enter size of each row:";
        std::cin >> b;
        float aver;
        float aver1 = 10000;
        int averagee1;
        TMatrix M1(a, b);
        M1.SetElement();
        M1.GetMatrix();
        
        while (choice == 1) {

            std::cout << "\ndo you want to find average of matrix / change elements?\n 1-average\n 2-incraese elements\n 3-decrease elements\n enter your choice:" << std::endl;
            std::cin >> choice1;
            if (choice1 == 1) {
                averagee1=M1.FindAverage();
                M1.GetMatrix();
            }
            if (choice1 == 2) {
                int ask;
                std::cout << "how much to increase?" << std::endl;
                std::cin >> ask;
                M1.IncriminateMatrix(ask);
                M1.GetMatrix();
            }
            if (choice1 == 3) {
                int ask;
                std::cout << "How much to decrease?" << std::endl;
                std::cin >> ask;
                M1.DecreaseMatrix(ask);
                M1.GetMatrix();
            }
            std::cout << "Continue work with matrix?\n 1-Yes / 2-No\n Your choice:";
            std::cin >> choice;

        }
        int m;
        int num;
        std::cout << "How many matrix of M2 (1.x) you want to create?" << std::endl;
        std::cin >> m;
        Inheritated1* inheritated1arr = new Inheritated1[m];
        int c, d;
        int find_min = 0;
        for (int i = 0; i < m; i++) {
            std::cout << "enter rows of matrix 1." << i + 1 << ":" << std::endl;
            std::cin >> c;
            std::cout << "enter size of each row:";
            std::cin >> d;
            Inheritated1 M2(c, d);
            M2.frandom();
            M2.GetMatrix();
            M2.IncriminateMatrix(9);
            M2.GetMatrix();
           aver= M2.FindAverage();
           
           if (aver1 > aver) {
               aver1 = aver;

               num = i;
           }





        }
        delete[] inheritated1arr;
        
        int amount;

        std::cout << "Enter how many matrix M3 (2.x)  do you want to create:" << std::endl;
        std::cin >> amount;

        int aver2=0;
        int aver3 = 10000;
        int num1;
        intInheritated* intinharray = new intInheritated[amount];

        for (int i = 0; i < amount; i++) {
            std::cout << "How many rows of matrix number 2."<<i+1<<":"<<std::endl;
            std::cin >> c;
            std::cout << " How many element in each row?" << std::endl;
            std::cin >> d;

            intInheritated M3(c, d);
            M3.random();
            M3.GetMatrix();
            M3.DecreaseMatrix(5);
            M3.GetMatrix();
            aver2=M3.FindAverage();

            if (aver3 > aver2) {
                aver3 = aver2;
                num1 = i;
            }





        }
        delete[] intinharray;
          

        if (aver3 > aver1) {
            std::cout << "The smallest average among matrices:" << aver1 << " of matrix number 1." << num+1;

            
        }
        else {
            std::cout << "The smallest average among matrices : " << aver3 << " of matrix number 2." << num1+1;
        }

    }
