#include<iostream>
#include"./tensor/tensor.h"
int main(){
    Tensor<4,Tensor<2,Float1D<10>>> t;
    std::cout << t.toString() << std::endl;
    std::cout << "Hello, world!" << std::endl;
    return 0;
}