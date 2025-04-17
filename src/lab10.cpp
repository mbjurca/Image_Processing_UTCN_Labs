#include <iostream>
#include <opencv2/opencv.hpp>
#include "lab10.h"
#include <fstream>
using namespace std;
using namespace cv;

Mat linear_filtering(Mat source, int kernel_size, string filter_type){
    // Implement the median, minimum and maximum filtering algorithm, using a kernel of size kernel_size and the corresponding filter_type.
    // The function should return the filtered image
    // Implementation Hint: You can use a vector to store the pixel values and sort them using sort.


    Mat result;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;
}

Mat compute_kernel_2D(int kernel_size){
    // This function should return a Gaussian kernel of size (kernel_size, kernel_size)
    // The std should be kernel_size/6.0
    Mat kernel;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return kernel;

}

Mat apply_gaussian_filtering_2D(Mat source, int kernel_size){
    // This function should apply a Gaussian filter to the source image using the kernel computed in compute_kernel function
    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;

}

vector<float> compute_kernel_1D(int kernel_size){
    // This function should return a Gaussian kernel of size (kernel_size, 1)
    // The std should be kernel_size/6.0
    vector<float> kernel;


    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return kernel;
}

Mat apply_gaussian_filtering_1D(Mat source, int kernel_size){

    // This function should apply a Gaussian filter to the source image using the kernel computed in compute_kernel_1D
    // by applying successive 1D convolutions in the x and y directions.

    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    // Apply 1D convolution in the x direction


    // Apply 1D convolution in the y direction


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;

}
