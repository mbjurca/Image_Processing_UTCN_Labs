#include <iostream>
#include <opencv2/opencv.hpp>
#include "lab11.h"
#include <fstream>
using namespace std;
using namespace cv;

int* compute_histogram_naive(Mat source){

    // TODO: Compute the naive histogram of an image

    int* histogram = (int*)calloc(256, sizeof(int));

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return histogram;

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



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;

}

gradients_structure compute_gradients(Mat source, const int* filter_x, const int* filter_y, const int* di, const int* dj) {
    // This function computes the gradients, magnitude and direction of the image using the given filter for both x and y directions

    gradients_structure gradients;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return gradients;
}

Mat non_maxima_gradient_supression(gradients_structure gradient){
    // This function should apply non-maxima suppression to the gradient magnitude image
    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;

}


filter_structure get_filter(string filter_type){
//    return the corresponding filter for the given filter_type
    filter_structure filter;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return filter;
}

Mat normalize_supression(Mat supression, string filter_type){
    // This function should normalize the non-maxima suppression result
    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;
}

int adaptive_threshold(Mat magnitude, float p, bool verbose){
    // This function should apply adaptive thresholding to the gradient magnitude image

    int th;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return th;
}

Mat histeresis_thresholding(Mat source, int th){
    // This function should apply hysteresis thresholding to the gradient magnitude image
    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;
}

Mat histeresis(Mat source){

    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;

}

Mat apply_Canny(Mat source, int low_threshold, int high_threshold, string filter_type, bool verbose){
    // This function applies the Canny edge detection algorithm to the source image

    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

    // Apply Gaussian filtering


    // Compute gradients


    // Non-maxima suppression


    // Apply adaptive thresholding



    // Apply hysteresis thresholding


    // Apply hysteresis

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;
}