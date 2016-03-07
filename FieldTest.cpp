/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, safeposition1)
{
    Field minefield;
    minefield.isSafe(3,5);
	ASSERT_TRUE(minefield.isSafe(3,5);

}
TEST(FieldTest, safeposition2)
{
    Field minefield;
	ASSERT_TRUE( minefield.isSafe(2,5);
}
TEST(FieldTest, safeposition3)
{
    Field minefield;
	ASSERT_TRUE( minefield.isSafe(1,5);
}
TEST(FieldTest, safeposition4)
{
    Field minefield;
	ASSERT_FALSE( minefield.isSafe(0,5);
}
