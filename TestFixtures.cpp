#include <gtest/gtest.h>
#include <iostream>

//ターゲットクラス
class Foo {
public:
  Foo() : value_( 0 ) {}

  void set( int value ) { value_ = value; }
  int get() const { return value_; }

private:

  int value_;
};

// テストクラス
class FooTest : public ::testing::Test {
public:

  // テスト前にさせたいこと
  virtual void SetUp() {
    std::cout << "FooTest::SetUp" << std::endl;
  }

  // テスト後にさせたいこと
  virtual void TearDown() {
    std::cout << "FooTest::TearDown" << std::endl;
  }

protected:

  Foo foo_;
};

TEST_F( FooTest, get ) 
{
  EXPECT_EQ( foo_.get(), 0 );
}

TEST_F( FooTest, set )
{
  foo_.set( 2 );
  EXPECT_EQ( foo_.get(), 2 );
}
