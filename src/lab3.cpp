#include <iostream>
#include <opencv2/opencv.hpp>
#include "lab3.h"

using namespace std;
using namespace cv;


bool IsInside(Mat img, int i, int j){
    /*
    * Implement a function called isInside(img, i, j) which checks if the position indicated by
    * the pair (i,j) (row, column) is inside the image img.
    */

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****
    return false;

}

int* compute_histogram_naive(Mat source){

    /*
    * Compute  the  histogram  for  a  given  grayscale  image (in  an  array  of  integers  having dimension 256)
    */

    int rows = source.rows;
    int cols = source.cols;
    int* histogram = (int*)calloc(256, sizeof(int));

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return histogram;

}

int* compute_histogram_custom(Mat source, int histogram_bins){

    /*
     * Compute the histogram for a given number of bins m≤ 256.
     */

    int rows = source.rows;
    int cols = source.cols;
    int* histogram = (int*)calloc(histogram_bins, sizeof(int));

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return histogram;

}

float* compute_pdf(int* histogram, Mat source){
    /*
     *Compute the PDF (in an array of floats of dimension 256)
     */

    int rows = source.rows;
    int cols = source.cols;
    int no_grayscale_values = 256;
    float* pdf = (float*)calloc(no_grayscale_values, sizeof(float));

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return pdf;

}

void showHistogram(const string& name, int* hist, const int  hist_cols, const int hist_height){


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

}

grayscale_mapping multi_level_thresholding(Mat source, int wh, float th, float* pdf){
    /*
     * Implement the multilevel thresholding algorithm from section 3.3.
     * Return a grayscale_mapping structure:
     *        grayscale_values: an array padded with 0 and 255 and containing the grayscale values obtained after
     *                          applying the algorithm
     *        count_grayscale_values: the number of new grayscale values, don't forgot 0 and 255(size of grayscale_values)
     *
     */

    grayscale_mapping map;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return map;

}

uchar find_closest_histogram_maximum(uchar old_pixel, grayscale_mapping gray_map){

    /*
     * Find the corresponding quantized value to map a pixel
     * Hint: Look in the gray_map and find out the value that resides at index argmin of the distance between old_pixel
     *      and the values in gray_map
     */

    uchar new_grayscale_value;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****


    return new_grayscale_value;
}

Mat draw_multi_thresholding(Mat source, grayscale_mapping grayscale_map){

    /*
     * Draw the new multi level threshold image by mapping each pixel to the corresponding quantized values
     * Hint: Look in the grayscale_map structure for all the obtained grayscale values and for each pixel in the
     *      source image assign the correct value. You may use the find_closest_histogram_maximum function
     */

    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****


    return result;
}

uchar update_pixel_floyd_steinberg_dithering(uchar pixel_value, int value){
    /*
     * Update the value of a pixel in the floyd_steinberg alg.
     * Take care of the values bellow 0 or above 255. Clamp them.
     */

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

}

Mat floyd_steinberg_dithering(Mat source, grayscale_mapping grayscale_map){

    /*
     * Enhance  the  multilevel  thresholding  algorithm  using  the  Floyd-Steinberg  dithering from section 3.4.
     * Hint: Use the update_pixel_floyd_steinberg_dithering when spreading the error
     */

    int rows, cols;
    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;
}