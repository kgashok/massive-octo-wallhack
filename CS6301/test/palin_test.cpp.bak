/*
 * palin_test.cpp
 *
 *  Created on: Aug 31, 2014
 *      Author: lifebalance
 */
bool check_if_palindrome(const char *s);

#include "gtest/gtest.h"


class PalTest : public ::testing::Test {

};


TEST_F(PalTest, SimpleTest)
{
	ASSERT_TRUE(true);
}

TEST_F(PalTest, EmptyString)
{
	ASSERT_EQ(true, check_if_palindrome(""));
}

TEST_F(PalTest, SingleCharacter)
{
	ASSERT_EQ(true, check_if_palindrome("a"));
}

TEST_F(PalTest, TwoCharacters)
{
	ASSERT_EQ(true, check_if_palindrome("zz"));
}

TEST_F(PalTest, Three)
{
	ASSERT_EQ(false, check_if_palindrome("zza"));
}

TEST_F(PalTest, Medium)
{
	ASSERT_EQ(false, check_if_palindrome("medium"));
}

TEST_F(PalTest, Madam)
{
	ASSERT_EQ(true, check_if_palindrome("madam"));
}

TEST_F(PalTest, RaceCar)
{
	ASSERT_EQ(true, check_if_palindrome("race car"));
}

TEST_F(PalTest, MadamMadam)
{
	ASSERT_EQ(true, check_if_palindrome("madam, madam"));
}

TEST_F(PalTest, MadamPunc)
{
	ASSERT_EQ(true, check_if_palindrome("madam! madam!"));
}

TEST_F(PalTest, Madam2Madam)
{
	ASSERT_EQ(true, check_if_palindrome("madam2madam"));
}

TEST_F(PalTest, MadamAndBob)
{
	ASSERT_EQ(false, check_if_palindrome("madam bob"));
}

TEST_F(PalTest, SimpleSentence)
{
	ASSERT_EQ(false, check_if_palindrome("I went there"));
}

TEST_F(PalTest, MadamAnd2)
{
	ASSERT_EQ(false, check_if_palindrome("I madam I!, 2 Mad am I!"));
}

TEST_F(PalTest, Madam42)
{
	ASSERT_EQ(true, check_if_palindrome("I 4 madam 2: I!, 2 mad am 4, I!"));
}

TEST_F(PalTest, Madam42Capital)
{
	ASSERT_EQ(true, check_if_palindrome("I 4 madam 2: I!, 2 Mad am 4, I!"));
}

TEST_F(PalTest, Madam44)
{
	ASSERT_EQ(false, check_if_palindrome("I 4 madam I!, 2 mad am 44, I!"));
}
