#include <gtest/gtest.h>

TEST( StringComparison, EXPECT_STREQ )
{
  EXPECT_STREQ( "abcd", "abcd" );  // 同じ文字列であれば成功
  EXPECT_STREQ( "abcd", "bcde" );  // 違う文字列であれば失敗
  EXPECT_STREQ( "abcd", "ABCD" );  // 同じ文字列でも、大文字、小文字の違いは失敗
}

TEST( StringComparison, EXPECT_STRNE )
{
  EXPECT_STRNE( "abcd", "bcde" );  // 違う文字列であれば成功
  EXPECT_STRNE( "abcd", "ABCD" );  // 同じ文字列でも、大文字、小文字の違いは成功
  EXPECT_STRNE( "abcd", "abcd" );  // 同じ文字列であれば失敗
}

TEST( StringComparison, EXPECT_STRCASEEQ )
{
  EXPECT_STRCASEEQ( "abcd", "abcd" );  // 同じ文字列であれば成功
  EXPECT_STRCASEEQ( "abcd", "bcde" );  // 違う文字列であれば失敗
  EXPECT_STRCASEEQ( "abcd", "ABCD" );  // 同じ文字列で、大文字、小文字の違いは成功
}

TEST( StringComparison, EXPECT_STRCAENE )
{
  EXPECT_STRCASENE( "abcd", "bcde" );  // 違う文字列であれば成功
  EXPECT_STRCASENE( "abcd", "ABCD" );  // 同じ文字列で、大文字、小文字の違いは失敗
  EXPECT_STRCASENE( "abcd", "abcd" );  // 同じ文字列であれば失敗
}
