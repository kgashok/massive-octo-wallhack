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

TEST_F(DogTest, DogSound1)
{
	ASSERT_EQ (0, d.MakeSound1());
	ASSERT_EQ ("NoName the Dog says: Woof! Woof!\n", d.MakeSound2());

}

TEST_F(DogTest, AnotherDogSound)
{
	Dog another_dog ("Doggie");
	d = another_dog;

	ASSERT_EQ ("Doggie the Dog says: Woof! Woof!\n", d.MakeSound2());

}


TEST_F(DogTest, OverrideDogTest)
{

	// Dog another_dog ("Lion");
	// d = another_dog;
	// ASSERT_EQ ("Lion the Dog says: Roar! Roar!\n", d.WakeUp());

	ASSERT_TRUE(false); // comment this out or delete after you've compiled successfully

}

TEST_F(DogTest, OverloadCatTest)
{

	// c = new Cat ("Kittie");
	// ASSERT_EQ("Kittie the Cat says: Meow! Meow!\n and Meow!\n", c->MakeSound2(" and Meow!"));

	ASSERT_TRUE(false); // comment this out or Delete after you've compiled successfully


}

TEST_F(DogTest, VirtualConstructor)
{
	// Dog d("Doggie");
	// Dog* another_dog = d.clone();
	// ASSERT_EQ("Doggie the Dog says: Woof! Woof!\n", another_dog->MakeSound2());

	ASSERT_TRUE(false);  // uncomment this after you've compiled successfully
}

TEST_F(DogTest, VirtualConstructor2)
{
	// Dog d("Doggie");
	// Dog* another_dog = d.create();
	// ASSERT_EQ("NoName the Dog says: Woof! Woof!\n", another_dog->MakeSound2());

	ASSERT_TRUE(false);  // uncomment this after you've compiled successfully
}
