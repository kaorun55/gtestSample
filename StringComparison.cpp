#include <gtest/gtest.h>

TEST( StringComparison, EXPECT_STREQ )
{
  EXPECT_STREQ( "abcd", "abcd" );  // 同じ文字列であれば成功
  EXPECT_STREQ( "abcd", "ABCD" );  // 違う文字列であれば失敗(大文字、小文字も比較)

}
