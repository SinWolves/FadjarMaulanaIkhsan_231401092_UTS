#include <iostream>

int main()
{
    int x;
    std::cout<<"Masukkan angka dari 2-10: ";
    std::cin >> x;
    
    if (x < 2 ^ x > 10)
    std::cout << "Inputan tidak memenuhi batas" << std::endl;
    
    else
    {
        for (int i = 0; i < x; ++i) 
        {
            for (int j = 0; j <= i; ++j)
            {
                std::cout << "X ";
            }
            std::cout << std::endl;
        }
        
        int y;
        y=x;
        for (int i = x; i > 0; --i) 
        {
            for (int j = 0; j < y; j++)
            {
                std::cout << "  ";
            }
            
            for (int k = 1; k <= i ; ++k)
            {
                std::cout << " X";
            }
            std::cout << std::endl;
            y++;
        }
    }
    return 0;
}

