#include<iostream>
#include"algorithm.h"

int main()
{
    for(int k = 0; k < 50 ; k++){
        std::cout<<"##############################################################"<<std::endl;
        if(k<10)
            std::cout<<"#################################"<<k<<"############################"<<std::endl;
        else
            std::cout<<"################################"<<k<<"############################"<<std::endl;
        std::cout<<"##############################################################"<<std::endl;
        int * arr = new int[k];
        int count = 1;
        std::cout<<"main arr " << std::endl;
        for(int i = 0;i < k; i++) {
            arr[i] = count;
            std::cout << count << " ";
            count += 2;
        }
        std::cout<<std::endl;
        for(int j = 0; j < (2*k); j++) {
            int * ptr = ALG::sort(arr, j, k);
            std::cout<<j<<" seria "<<std::endl;
            for(int i = 0; i < (k+1); i++)
                std::cout << ptr[i] << " ";
            std::cout<<std::endl;
        }
    }
    return 0;
}
