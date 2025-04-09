#include <iostream>
#include <opencv2/opencv.hpp>
#include "lab7.h"
#include <fstream>


using namespace std;
using namespace cv;

bool IsInside(int img_rows, int img_cols, int i, int j){
    /*
    * Implement a function called isInside(img, i, j) which checks if the position indicated by
    * the pair (i,j) (row, column) is inside the image img.
    */

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****
    return true;
}

Mat dilation(Mat source, neighborhood_structure neighborhood, int no_iter){

    //TODO: Implement the dilation operation for no_iter times using the structuring element defined by
    // the neighborhood argument
    Mat dst, aux;
    int rows, cols;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return dst;

}

Mat erosion(Mat source, neighborhood_structure neighborhood, int no_iter){

    //TODO: Implement the erosion operation for no_iter times using the structuring element defined by
    // the neighborhood argument

    Mat dst, aux;
    int rows, cols;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****


    return dst;
}

Mat opening(Mat source, neighborhood_structure neighborhood, int no_iter) {

    //TODO: Implement the opening operation for no_iter times using the structuring element defined by
    // the neighborhood argument

    Mat dst, aux;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****


    return dst;

}

Mat closing(Mat source, neighborhood_structure neighborhood, int no_iter) {

    //TODO: Implement the closing operation for no_iter times using the structuring element defined by
    // the neighborhood argument

    Mat dst, aux;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return dst;
}

Mat boundary_extraction(Mat source, neighborhood_structure neighborhood) {

    //TODO: Implement the boundary extraction algorithm for no_iter times using the structuring element defined by
    // the neighborhood argument

    int rows, cols;
    Mat erosion_mat, dst;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return dst;

}

bool equal_mat(Mat A, Mat B){
    //TODO: Implement a function that returns true is all elements from A are equal to all elements in B
    // assumption that A and B has the same size

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return true;

}
Mat region_filling(Mat source, neighborhood_structure neighborhood) {

    //TODO: Implement the region filling algorithm for no_iter times using the structuring element defined by
    // the neighborhood argument

    Mat dst;
    int rows, cols;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return dst;

}