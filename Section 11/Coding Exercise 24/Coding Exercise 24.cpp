/*
 * Coding Exercise #24 - Overloading Functions - Calculating Area
 * In this exercise you will create a program that computes the area of two shapes, 
 * a square and a rectangle, by calling the overloaded function find_area.
 * 
 * Begin by declaring the function prototypes for the square find_area function and the rectangle find_area function.
 * The square find_area function is passed an integer value and returns an integer value.
 * The rectangle find_area function is passed two double values and returns a double value.
 * 
 * Remember that both function prototypes should have the same function name find_area.
 * Now that the function prototypes have been declared, at the bottom of the file define both functions.
 * 
 * The square find_area function will be passed the argument side_length and return the area of the square.
 * The formula for the area of a square is side_length * side_length.
 * You may use the <cmath> function pow to compute this value if you wish.
 * 
 * The rectangle find_area function will be passed the arguments length and width and return the area of the rectangle.
 * The formula for the area of a rectangle is length * width.
 * 
 * Now, from the function body of area_calc, declare and initialize the variables square_area and rectangle_area by calling
 * the find_area function and passing the appropriate arguments which are listed below.
 * 
 * The square has a side_length of 2.
 * The rectangle has a length of 4.5 and a width of 2.3.
 */
#include <iostream>
#include <cmath>
using namespace std;

int find_area(int side_length);
double find_area(double length, double width);

void area_calc() {
    int square_area = find_area(2);
    double rectangle_area = find_area(4.5, 2.3);

    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

int find_area(int side_length)
{
    return side_length * side_length;
}

double find_area(double length, double width)
{
    return length * width;
}

int main() 
{
    area_calc();
    return 0;
}