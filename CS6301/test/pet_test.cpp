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
	Dog& d;
	Cat* c;
public:
	DogTest () : d(defPet), c(NULL) {}
	~DogTest () {}

};


TEST_F(DogTest, CatPass)
{
	ASSERT_TRUE(true);

}

TEST_F(DogTest, CatPass2)
{
	const char* n = "Kittie";
	c =  new Cat (n);

	ASSERT_EQ("Kittie the Cat says: Meow! Meow!\n", c->MakeSound2());

}


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

TEST_F(DogTest, Destructors)
{
	Dog* a_dog = new Dog("Frankie");
	delete a_dog;


}

TEST_F(DogTest, DestructorPet)
{

	// When you uncomment the following lines, the compiler complains.
	// What do you need to do to fix this?
	// Pet* a_pet = new Pet("NoName");
	// delete a_pet;

	ASSERT_TRUE(false);  // change this to 'true' after you've compiled successfully
}

