/***********************************************************************
 * AUTHOR: KITE <KITE>
 *   FILE: shapes.cpp
 *   DATE: Mon Sep 01 09:41:27 2014
 *  DESCR: 
 ***********************************************************************/
#include "shapes.h"
#include <iostream>
using namespace std;

/***********************************************************************
 *  Method: Shape::Shape
 *  Params: int a, int b
 * Effects: 
 ***********************************************************************/
Shape::Shape(int a, int b)
{
    cerr << "Shape::Shape()" << endl;
}


/***********************************************************************
 *  Method: Shape::area
 *  Params: 
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
Shape::area()
{
    int dummy;

    cerr << "Shape::area()" << endl;
    return dummy;
}


/***********************************************************************
 *  Method: Shape::get_dimension1
 *  Params: 
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
Shape::get_dimension1()
{
    int dummy;

    cerr << "Shape::get_dimension1()" << endl;
    return dummy;
}


/***********************************************************************
 *  Method: Shape::getHeight
 *  Params: 
 * Returns: int *
 * Effects: 
 ***********************************************************************/
int *
Shape::getHeight() const
{
    cerr << "Shape::getHeight()" << endl;
    return NULL;
}


/***********************************************************************
 *  Method: Shape::setHeight
 *  Params: int *height
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Shape::setHeight(int *height)
{
    cerr << "Shape::setHeight()" << endl;
}


/***********************************************************************
 *  Method: Shape::getWidth
 *  Params: 
 * Returns: int *
 * Effects: 
 ***********************************************************************/
int *
Shape::getWidth() const
{
    cerr << "Shape::getWidth()" << endl;
    return NULL;
}


/***********************************************************************
 *  Method: Shape::setWidth
 *  Params: int *width
 * Returns: void
 * Effects: 
 ***********************************************************************/
void
Shape::setWidth(int *width)
{
    cerr << "Shape::setWidth()" << endl;
}


/***********************************************************************
 *  Method: Rectangle::Rectangle
 *  Params: int a, int b
 * Effects: 
 ***********************************************************************/
Rectangle::Rectangle(int a, int b)
{
    cerr << "Rectangle::Rectangle()" << endl;
}


/***********************************************************************
 *  Method: Rectangle::area
 *  Params: 
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
Rectangle::area()
{
    int dummy;

    cerr << "Rectangle::area()" << endl;
    return dummy;
}


/***********************************************************************
 *  Method: Triangle::Triangle
 *  Params: int a, int b
 * Effects: 
 ***********************************************************************/
Triangle::Triangle(int a, int b)
{
    cerr << "Triangle::Triangle()" << endl;
}


/***********************************************************************
 *  Method: Triangle::area
 *  Params: 
 * Returns: int
 * Effects: 
 ***********************************************************************/
int
Triangle::area()
{
    int dummy;

    cerr << "Triangle::area()" << endl;
    return dummy;
}


