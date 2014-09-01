/*
 * pet_test.cpp
 *
 *  Created on: May 12, 2014
 *      Author: lifebalance
 */

#include "gtest/gtest.h"
#include "pet.h"


Dog defPet("NoName");

class DogTest : public ::testing::Test {
protected:
	// Dog d("Doggie");
	Dog& d;
	Cat* c;
public:
	DogTest () : d(defPet), c(NULL) {}
	~DogTest () {}

};


TEST_F(DogTest, DogPass)
{
	ASSERT_TRUE(true);
}

TEST_F(DogTest, SilenceTest)
{
	ASSERT_EQ (0, d.MakeSound1());
	ASSERT_EQ ("NoName the Dog says: Woof! Woof!\n", d.MakeSound2());
}

TEST_F(DogTest, OnceMoreTest)
{
	Dog another_dog ("Doggie");
	d = another_dog;

	ASSERT_EQ ("Doggie the Dog says: Woof! Woof!\n", d.MakeSound2());

}
