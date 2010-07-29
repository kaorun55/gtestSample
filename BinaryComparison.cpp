#include <gtest/gtest.h>

TEST( BinaryAssertions, EXPECT_EQ )
{
  EXPECT_EQ( 1, 1 );  // expectd == actual なら成功
  EXPECT_EQ( 2, 3 );  // expectd != actual なら失敗
}

TEST( BinaryAssertions, EXPECT_NE )
{
  EXPECT_NE( 2, 3 );  // expectd != actual なら成功
  EXPECT_NE( 1, 1 );  // expectd == actual なら失敗
}

TEST( BinaryAssertions, EXPECT_LT )
{
  EXPECT_LT( 2, 3 );  // expectd < actual なら成功
  EXPECT_LT( 4, 4 );  // expectd == actual なら失敗
  EXPECT_LT( 5, 4 );  // expectd > actual なら失敗
}

TEST( BinaryAssertions, EXPECT_LE )
{
  EXPECT_LE( 2, 3 );  // expectd < actual なら成功
  EXPECT_LE( 4, 4 );  // expectd == actual なら成功
  EXPECT_LE( 5, 4 );  // expectd > actual なら失敗
}

TEST( BinaryAssertions, EXPECT_GT )
{
  EXPECT_GT( 3, 2 );  // expectd > actual なら成功
  EXPECT_GT( 4, 4 );  // expectd == actual なら失敗
  EXPECT_GT( 4, 5 );  // expectd < actual なら失敗
}

TEST( BinaryAssertions, EXPECT_GE )
{
  EXPECT_GE( 3, 2 );  // expectd > actual なら成功
  EXPECT_GE( 4, 4 );  // expectd == actual なら成功
  EXPECT_GE( 4, 5 );  // expectd < actual なら失敗
}

