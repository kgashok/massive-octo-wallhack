/*
 * long_test.cpp
 *
 *  Created on: Aug 31, 2014
 *      Author: lifebalance
 */

#include <iostream>
#include <string>
using namespace std;
string& longest_word (const char* sent);
#include "gtest/gtest.h"


class LongTest : public ::testing::Test {

};


TEST_F(LongTest, SimpleTest)
{
	ASSERT_TRUE(true);
	ASSERT_EQ(true, true);
}

TEST_F(LongTest, Life)
{
	ASSERT_EQ("life", longest_word("life"));
}

TEST_F(LongTest, LifeIs)
{
	ASSERT_EQ("life", longest_word("life is"));
}

TEST_F(LongTest, LifeIsGreat)
{
	ASSERT_EQ("great", longest_word("life is great"));
}

TEST_F(LongTest, LifeIsGreatEh)
{
	ASSERT_EQ("great", longest_word("life is great eh"));
}

TEST_F(LongTest, LifeIsSweet)
{
	ASSERT_EQ("sweet", longest_word("life is sweet"));
}

TEST_F(LongTest, LifeA)
{
	ASSERT_EQ("great", longest_word("life!, is great eh"));
}

TEST_F(LongTest, Life4)
{
	ASSERT_EQ("life4", longest_word("life4 is great eh"));
}

TEST_F(LongTest, HelloWorld)
{
	ASSERT_EQ("Hello", longest_word("Hello! World."));
}

TEST_F(LongTest, WorldHello)
{
	ASSERT_EQ("World", longest_word("World I say Hello!"));
}

TEST_F(LongTest, JustaComma)
{

	ASSERT_EQ("NA", longest_word(" ; "));
}

TEST_F(LongTest, Illegal)
{
	ASSERT_EQ("NA", longest_word(""));
}
