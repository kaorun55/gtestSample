#include <gtest/gtest.h>

// EXPECT*の場合は失敗があっても先へ進む
TEST( AssertAndExpect, Expect )
{
  EXPECT_TRUE( true );
  EXPECT_TRUE( false );   // ここで失敗
  EXPECT_TRUE( true );    // ここは実行される
  EXPECT_TRUE( false );   // ここも実行される(失敗する)
}

// ASSERT*の場合は失敗があるとそこでテストは終了する
TEST( AssertAndExpect, Assert ) 
{
  ASSERT_TRUE( true );
  ASSERT_TRUE( false );   // ここで失敗
  ASSERT_TRUE( true );    // ここは実行されない
  ASSERT_TRUE( false );   // ここも実行されない
}


