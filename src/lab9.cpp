#include <iostream>
#include <opencv2/opencv.hpp>
#include "lab9.h"
using namespace std;
using namespace cv;

Mat apply_convolution(Mat source,const int* conv_weights, float additional_conv_term, bool normalization){

    // Given a source image and a convolution kernel, this function applies the convolution to the image.
    // The convolution kernel is represented as a 1D array of weights, and the additional_conv_term is added(multiplied) to the result of
    // the convolution is necessary.
    // Hint: Start from the second row and column of the image and iterate through the image, applying the convolution kernel to each pixel.
    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    // First pass: apply convolution and store float results


    // Second pass: normalize if needed and store into final result


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;
}

void centering_transform(Mat img){
    //expects floating point image
    for (int i = 0; i < img.rows; i++){
        for (int j = 0; j < img.cols; j++){
            img.at<float>(i, j) = ((i + j) & 1) ? -img.at<float>(i, j) : img.at<float>(i, j);
        }
    }
}

Mat generic_frequency_domain_filter(Mat src, string type, float cutoff){
//convert input image to float image
    Mat srcf;
    src.convertTo(srcf, CV_32FC1);
//centering transformation
    centering_transform(srcf);
//perform forward transform with complex image output
    Mat fourier;
    dft(srcf, fourier, DFT_COMPLEX_OUTPUT);
//split into real and imaginary channels
    Mat channels[] = { Mat::zeros(src.size(), CV_32F), Mat::zeros(src.size(), CV_32F) };
    split(fourier, channels); // channels[0] = Re(DFT(I)), channels[1] = Im(DFT(I))
//calculate magnitude and phase in floating point images mag and phi
    Mat mag, mag_norm, phi;
    magnitude(channels[0], channels[1], mag);
    phase(channels[0], channels[1], phi);
//display the phase and magnitude images here

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****


//insert filtering operations on Fourier coefficients here

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

//perform inverse transform and put results in dstf
    Mat dst, dstf;
    merge(channels, 2, fourier);
    dft(fourier, dstf, DFT_INVERSE | DFT_REAL_OUTPUT | DFT_SCALE);
//inverse centering transformation
    centering_transform(dstf);
//normalize the result and put in the destination image
    normalize(dstf, dst, 0, 255, NORM_MINMAX, CV_8UC1);
//Note: normalizing distorts the resut while enhancing the image display in the range [0,255].
//For exact results (see Practical work 3) the normalization should be replaced with convertion:
//dstf.convertTo(dst, CV_8UC1);
    return dst;
}

