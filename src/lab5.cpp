#include <iostream>
#include <opencv2/opencv.hpp>
#include "lab5.h"

using namespace std;
using namespace cv;

Mat color_labels(labels labels_str){

    /*
     * This method will generate a number of no_labels colors and
     * generate a color image containing each label displayed in a different color
     */

    int rows, cols, no_labels;
    Mat labels, result;
    Vec3b* colors;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return result;

}

labels BFS_labeling(Mat source){

    /*
     * This method will implement the BFS labeling algorithm
     * Hint:
     *  Use the Point structure(or a similar one) to store the coordinates in a queue
     *  You can use queue from C++ with its specific actions (push, pop, empty, front)
     */
    Mat labels;
    int rows, cols, no_labels;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return {labels, no_labels};
}

labels Two_pass_labeling(Mat source){
    Mat labels;
    int rows, cols, no_newlabels;

    /*
     * This method will implement the two pass labeling algorithm
     * Hint:
     *  Use the vector structure from C++(actually you need a vector of vectors and a simple one check out the lab works)
     *  You can use queue from C++ with its specific actions (push, pop, empty, front)
     */

    rows = source.rows;
    cols = source.cols;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****


    return {labels, no_newlabels};
}