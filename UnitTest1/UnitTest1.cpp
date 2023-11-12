#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 1, k = 0, K = 16;
			int n;
			n = (1.0 * k * N) / ((1.0 * k * k) + (1.0 * N * N));
			Assert::AreEqual(n, 0);
		}
	};
}
