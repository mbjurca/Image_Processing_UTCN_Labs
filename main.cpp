#include <iostream>
#include <opencv2/opencv.hpp>
#include "src/lab11.h"
using namespace std;
using namespace cv;


int main() {

    Mat source = imread("/Users/mihneajurk/Desktop/IP/Labs_solved/images/saturn.bmp", IMREAD_GRAYSCALE);
    imshow("Original", source);

    Mat result = apply_Canny(source, 50, 150, "sobel", true);
    imshow("Canny Edge Detection", result);
    waitKey();

    return 0;
}