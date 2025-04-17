#ifndef LAB10_H
#define LAB10_H
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

const int di[8] = { 0,-1,-1, -1, 0, 1, 1, 1 };
const int dj[8] = { 1, 1, 0, -1, -1,-1, 0, 1 };

Mat apply_Canny(Mat source, int low_threshold, int high_threshold, string filter_type, bool verbose);

typedef struct{
    Mat x;
    Mat y;
    Mat magnitude;
    Mat direction;
} gradients_structure;

vector<float> compute_kernel_1D(int kernel_size);

Mat apply_gaussian_filtering_1D(Mat source, int kernel_size);

typedef struct{
    int* filter_x;
    int* filter_y;
    int* di;
    int* dj;
}filter_structure;

filter_structure get_filter(string filter_type);

Mat non_maxima_gradient_supression(gradients_structure gradient);

gradients_structure compute_gradients(Mat source, const int* filter_x, const int* filter_y, const int* di, const int* dj);

#endif