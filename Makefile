test: AssertAndExpect

AssertAndExpect: AssertAndExpect.cpp
	g++ AssertAndExpect.cpp -lgtest -lgtest_main
	./a.out