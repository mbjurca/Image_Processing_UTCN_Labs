
#include <iostream>
#include <opencv2/opencv.hpp>
#include <fstream>
#include "lab6.h"

using namespace std;
using namespace cv;

Point find_P_0(Mat source){
    /*
     * Find the initial point of the contour and return it
     */
    Point P_0;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****






    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return P_0;
}

contour extract_contour(Mat source, Point P_0){

    /*Extract the contour for a neighborhood of 8. You should return a contour structure with a vector
     * containing the point and a vector containing the directions. */

    int dir;
    Point P_current;
    vector<Point> border;
    vector<int> dir_vector;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return {border, dir_vector};
}

Mat draw_contour(contour cnt, Mat source){

    /*
     * Draw the contour using the border variable from cnt structure
     */

    Mat dst;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****


    return dst;
}

void print_AC_DC_chain_codes(contour cnt){
    /*
     * Print the AC and DC chain codes
     * You have to compute the DC one. The AC is already computed :)
     */

    printf("The AC vector is: ");

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    printf("\nThe DC vector is: ");

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

}

Mat contour_reconstruction(FILE *pf, Mat background) {

    /*
     * from the file read the chain code and reconstruct the image
     */

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****




    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) *****

    return background;

}