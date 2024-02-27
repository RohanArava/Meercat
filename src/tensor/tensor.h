#ifndef TENSOR_H
#include<stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
template <int n, typename T>
class Tensor{
    public:
    std::string toString(){
        std::ostringstream str;
        for(int i = 0; i < n; i++){
            str << this->tensor[i].toString() << " ";
            str << std::endl;
        }
        
        return str.str();
    }
    int shape = n;
    T tensor[n];
};

template<int n> class Float1D : public Tensor<n, float>{
    public: 
    Float1D<n>(): Tensor<n, float>(){
        for(int i = 0; i < n; i++){
            this->tensor[i] = 0;
        }
    }
    std::string toString(){
        std::ostringstream str;
        for(int i = 0; i < n; i++){
            str << this->tensor[i] << " ";
        }
        return str.str();
    }
};

#endif