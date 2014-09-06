/*
 * shape_test.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: lifebalance
 */

#include "gtest/gtest.h"
#include "shapes.h"

class ShapeTest: public ::testing::Test {
protected:
	Shape *shape;
};

// typical Main function
// int main( )

TEST_F(ShapeTest, ConstructOverLoad) {

	Rectangle rec;
	shape = &rec;
	ASSERT_EQ(0, shape->get_dimension1());

	Rectangle rec2(10);
	shape = &rec2;
	ASSERT_EQ(10, shape->get_dimension1());

	Triangle tri;
	shape = &tri;
	ASSERT_EQ(1, shape->get_dimension1());

	Triangle tri2(30);
	shape = &tri2;
	ASSERT_EQ(30, shape->get_dimension1());

}

TEST_F(ShapeTest, ShapeArea) {
	Rectangle rec(10, 7);
	Triangle tri(10, 5);

	// store the address of Rectangle
	shape = &rec;
	// call rectangle area.
	// ASSERT_EQ("Rectangle class area :", shape->area());
	ASSERT_EQ(70, shape->area());

	// store the address of Triangle
	shape = &tri;
	// call triangle area.
	// ASSERT_EQ("Triangle class area :", shape->area());
	ASSERT_EQ(25, shape->area());

	// return 0;
}


TEST_F(ShapeTest, SetterGetters) {
	shape = new Rectangle(0,0);
	ASSERT_EQ(0, shape->area());

	int height = 10;
	int width = 100;
	shape->setHeight(&height);
	shape->setWidth(&width);
	// to trouble shoot this..
	// cout << "shape area: "  << shape->area() << endl;
	ASSERT_EQ(1000, shape->area());
}

TEST_F(ShapeTest, DestructorCleanup) {

	//Uncomment the 2 code lines below; and fix the compiler error by
	//defining a suitable function, which also performs the necessary memory clean-up
	//
	//
	// shape = new Shape(0,0);
	// delete shape;

	ASSERT_TRUE(false);  // uncomment this after you've compiled successfully

}

