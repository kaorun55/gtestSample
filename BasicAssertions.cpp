#include <gtest/gtest.h>

// EXPECT_TRUE
TEST( BasicAssertion, EXPECT_TRUE )
{
  EXPECT_TRUE( true );  // 結果がtrueなら成功
  EXPECT_TRUE( false ); // 結果がfalseなら失敗
}

// EXPECT_FALSE
TEST( BasicAssertio, EXPECT_FALSE )
{
  EXPECT_FALSE( false ); // 結果がfalseなら成功
  EXPECT_FALSE( true );  // 結果がtrueなら失敗
}
