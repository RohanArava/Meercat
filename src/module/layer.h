#ifndef LAYER_H
#include "../tensor/tensor.h"
#include<stdlib.h>
#include <time.h>
class Layer{
    public:
    virtual float** forward(float **) = 0;
    virtual float*** forward(float ***) = 0;
};
class Linear :Layer{
    public:
    Linear(int input_size, int output_size): input_size(input_size), output_size(output_size){
        srand( (unsigned)time(NULL) );
        weights = (float**)malloc(output_size * sizeof(float*));
        for(int i=0; i<output_size; i++){
            weights[i] = (float*)malloc(input_size * sizeof(float));
            for(int j=0; j<input_size; j++){
                float r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
                r*=2;
                r-=1;
                weights[i][j] = r;
            }
        }
    }
    

    private:
    int input_size;
    int output_size;
    float **weights;
};

#endif