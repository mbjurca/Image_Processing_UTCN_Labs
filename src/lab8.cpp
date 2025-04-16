#include <iostream>
#include <opencv2/opencv.hpp>
#include "lab8.h"
#include <fstream>
using namespace std;
using namespace cv;

void showHistogram(const string& name, int* hist, const int  hist_cols, const int hist_height){

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

    Mat imgHist(hist_height, hist_cols, CV_8UC3, CV_RGB(255, 255, 255));// constructs a white image
    //computes histogram maximum
    int max_hist = 0;
    for(int i = 0; i<hist_cols; i++)
        if(hist[i]> max_hist)
            max_hist = hist[i];
    double scale = 1.0;
    scale = (double)hist_height / max_hist;
    int baseline = hist_height - 1;
    for(int x = 0; x < hist_cols; x++){
        Point p1 = Point(x, baseline);
        Point p2 = Point(x, baseline - cvRound(hist[x]* scale));
        line(imgHist, p1, p2, CV_RGB(255, 0, 255));// histogram bins
        // colored in magenta
    }
    imshow(name, imgHist);

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

}

int* convert_function2display(float* func){

    int* func_display = (int*) calloc(256, sizeof(int));

    for(int i=0; i<256; i++){
        func_display[i] = int(func[i] * 1000);
    }
    return func_display;
}

int* compute_histogram_naive(Mat source){

    // TODO: Compute the naive histogram of an image

    int* histogram = (int*)calloc(256, sizeof(int));

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****





    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return histogram;

}

float* compute_pdf(int* histogram, Mat source){

    // TODO: Compute the normalized histogram (pdf)

    float* pdf = (float*)calloc(256, sizeof(float));

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****





    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return pdf;

}

float* compute_cpdf(float* pdf){
    // TODO: Compute the cumulative probability density function (cpdf)


    float* cpdf = (float*)calloc(256, sizeof(float));

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****





    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return cpdf;
}

float compute_mean(int* histogram){

    // TODO: compute the mean given the histogram of the image
    float mean;
    int total_pixels;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****






    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return mean;
}

float compute_std(float* pdf, float mean){

    // TODO: compute standard deviation given the pdf and mean
    float std;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****





    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return std;
}

edge_image_values compute_edge_values(Mat source){

    // TODO: compute minimum and maximum value in an image and return in accordingly
    int min, max;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return {min, max};
}

int compute_bimodal_threshold(edge_image_values img_values, int* histogram, float err){

    // TODO : compute the bimodal threshold using the histogram of the image, return only the threshold value
    int min, max;
    float Tk, Tk_1;
    float mean_1, mean_2, no_pixels_mean_1, no_pixels_mean_2;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return Tk;

}

Mat apply_bimodal_thresholding(Mat source, int th){

    // TODO: apply the bimodal thresholding to the image, given the threshold value previously computed

    Mat dst;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return dst;
}

int compute_new_value_histogram_st_sh(int g_in, int g_in_min, int g_in_max, int g_out_min, int g_out_max){

    // TODO: compute the new value of the pixel using histogram stretching/shrinking returning the new value

    float g_out;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return int(g_out);
}

Mat apply_histogram_st_sh(Mat source, int g_out_min, int g_out_max){

    //TODO: apply histogram stretching/shrinking to the image using the function compute_new_value_histogram_st_sh and compute_edge_values

    Mat result;
    int g_in_min, g_in_max;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;
}

Mat apply_gamma_correction(Mat source, float gamma){

    // TODO: apply gamma correction to the image

    Mat result;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;
}

Mat apply_histogram_equalization(Mat source, int* histogram){

    // TODO: apply histogram equalization

    Mat result;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;
}
