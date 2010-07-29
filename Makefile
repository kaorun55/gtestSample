test: AssertAndExpect

AssertAndExpect: AssertAndExpect.cpp
	g++ AssertAndExpect.cpp -lgtest -lgtest_main
	./a.out

BasicAssertions: BasicAssertions.cpp
	g++ BasicAssertions.cpp -lgtest -lgtest_main
	./a.out

BinaryComparison: BinaryComparison.cpp
	g++ BinaryComparison.cpp -lgtest -lgtest_main
	./a.out
