#include <iostream>

int main()
{
    double num[1000000];
    int i;
    float total=0.0, rata2;
    
    y:
    std::cout << "Masukkan -1 jika anda sudah selesai menginput data " << std::endl;
    std::cout << " " << std::endl;
    
    for (i=1;i>0;++i)
    {
        std::cout <<i<< ". Masukkan nilai ke-" << i<< ": ";
        std::cin >> num[i];
        
        if (num[i]==-1)
        {
            goto x;
        }
        
        else if (num[i]<-1)
        {
            std::cout << "Angkanya harus positif" << std::endl;
            std::cout << "************************** " << std::endl;
            std::cout << " " << std::endl;
            goto y;
        }
        
        else if (num[i]!= static_cast<int>(num[i]))
        {
            std::cout << "Angkanya harus bulat" << std::endl;
            std::cout << "************************** " << std::endl;
            std::cout << " " << std::endl;
            goto y;
        }
        
        total+=num[i];
    }
    
    x:
    rata2=total/(i - 1);
    std::cout << "Rata-ratanya adalah " <<rata2<< std::endl;

    return 0;
}

