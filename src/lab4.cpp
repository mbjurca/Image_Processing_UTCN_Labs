#include <iostream>
#include <opencv2/opencv.hpp>
#include "lab4.h"

using namespace std;
using namespace cv;

#define PI 3.14

bool compare_pixels(Vec3b pixel_1, Vec3b pixel_2){
    //This method will compare if two pixels are the same or not(if it's the same color or not)
    //Return true if pixel_1 == pixel_2

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return false;

}

Mat get_object_instance(Mat source, Vec3b color){
    /*
     * This method will save in a different matrix in a binary format(0 and 255)
     * the selected object
     */
    Mat result;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return result;
}

perimeter naive_perimeter(Mat binary_object){

    /*
     * This method will compute the perimeter and save the contour in a perimeter structure
     * that will store the two components
     */

    perimeter object_perimeter;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****


    return object_perimeter;

}

int compute_area(Mat binary_object){
    /*
     * This method will compute the object area and return it
     */

    int area;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return area;
}

Point compute_center_of_mass(Mat binary_object){
    /*
     * This method will compute the center of the mass and return it in a Point structure
     * Hint: Pay attention at the x and y notation
     */
    int rows = binary_object.rows;
    int cols = binary_object.cols;

    Point center_mass;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return center_mass;

}

Mat display_center_of_mass(Point center_of_mass, Mat source){

    /*
     * This method will display on the source image the center_of_mass
     * Hint: Use the circle method from OpenCv, clone the source
     */

    Mat result;

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return result;

}

circumscribed_rectangle_coord compute_circumscribed_rectangle_coord(Mat binary_object){
    /*
     * This method will compute the points that form the circumscribed rectangle
     * Hint:
     * c -> column
     * r -> row
     */

    int rows = binary_object.rows;
    int cols = binary_object.cols;

    circumscribed_rectangle_coord coords;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return coords;
}

float compute_aspect_ratio(circumscribed_rectangle_coord coord){
    /*
     * This method will compute the aspect ratio and will return it
     */

    float ratio;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return ratio;
}

float compute_thinness_ratio(int area, int perimeter){
    /*
     * This method will compute the thinness ratio and will return it
     */

    float thinness_ratio;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return thinness_ratio;
}

float compute_axis_of_elongation_angle(Point center_of_mass, Mat binary_object){
    /*
     * This method will compute angle corresponding to the axis of elongation of a labeled object
     */

    float phi;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return phi;


}

elongation_axis compute_elongation_axis_points(float angle, Point center_of_mass, circumscribed_rectangle_coord coord){
    /*
     * This method will compute the two point that are required to draw the axis of elongation and return them using the
     * elongation_axis structure
     */
    Point A, B;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****


    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return {A, B};
}

void draw_elongation_axis(Mat source, elongation_axis axis){
    /*
     * This method will draw and display the elongation axis.
     * Hint: Use line from OpenCv
     */

    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****


}

Mat horizontal_projection(Mat binary_image, circumscribed_rectangle_coord coord){
    /*
     * This method will compute the matrix representing the horizontal projection and return it
     */
    Mat horizontal_projection;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****



    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return horizontal_projection;
}

Mat vertical_projection(Mat binary_image, circumscribed_rectangle_coord coord){
    /*
     * This method will compute the matrix representing the vertical projection and return it
     */
    Mat vertical_projection;
    //*****START OF YOUR CODE (DO NOT DELETE/MODIFY THIS LINE)*****

    //*****END OF YOUR CODE(DO NOT DELETE / MODIFY THIS LINE) ****

    return vertical_projection;
}


void geom_features(int event, int x, int y, int flags, void* param){
    Mat source = *(Mat*)param;
    Vec3b color_selected = {0, 0, 0};
    Mat binary_object;
    perimeter object_perimeter;
    Point center_of_mass;
    Mat center_of_mass_image;
    circumscribed_rectangle_coord circumscribed_coord;
    float thinness_ratio;
    float aspect_ratio;
    int area;
    float phi;
    elongation_axis axis_points;


    if (event == EVENT_LBUTTONDOWN){
        color_selected = source.at<Vec3b>(y, x);
        binary_object = get_object_instance(source, color_selected);
        imshow("Binary Object", binary_object);

        object_perimeter = naive_perimeter(binary_object);
        imshow("Contour", object_perimeter.contour);
        printf("The perimeter has length %d\n", object_perimeter.length);

        center_of_mass = compute_center_of_mass(binary_object);
        center_of_mass_image = display_center_of_mass(center_of_mass, source);
        imshow("Center of mass", center_of_mass_image);

        circumscribed_coord = compute_circumscribed_rectangle_coord(binary_object);
        thinness_ratio = compute_aspect_ratio(circumscribed_coord);
        printf("The aspect ratio is %.2f\n", thinness_ratio);

        area = compute_area(binary_object);
        printf("The area is %d\n", area);

        aspect_ratio = compute_thinness_ratio(area, object_perimeter.length);
        printf("The thinness ratio is %.2f \n", aspect_ratio);

        phi = compute_axis_of_elongation_angle(center_of_mass, binary_object);
        printf("The angle phi is %.2f", phi);
        axis_points = compute_elongation_axis_points(phi, center_of_mass, circumscribed_coord);
        draw_elongation_axis(source, axis_points);

        Mat horizontal_projection_mat = horizontal_projection(binary_object, circumscribed_coord);
        Mat vertical_projection_mat = vertical_projection(binary_object, circumscribed_coord);
        imshow("Horizontal projection", horizontal_projection_mat);
        imshow("Vertical projection", vertical_projection_mat);

    }
}