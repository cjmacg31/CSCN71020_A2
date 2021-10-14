#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\colem\source\repos\CSCN71020_A2\BCSRec\main.c"

extern "C"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(T001_getPerimeter_5and8_18)
		{
			int length = 5;
			int width = 8;
			int EXPECTED = 18;

			int actual = getPerimeter(&length, &width);

			Assert::AreEqual(EXPECTED, actual);
		}

		TEST_METHOD(T002_getArea_5and8_40)
		{
			int length = 5;
			int width = 8;
			int EXPECTED = 40;

			int actual = getArea(&length, &width);

			Assert::AreEqual(EXPECTED, actual);
		}

		TEST_METHOD(T003_setLength_99and99_99)
		{
			int length = 99;
			int input = 99;
			int EXPECTED = 99;

			int actual = getArea(&length, &input);

			Assert::AreEqual(EXPECTED, actual);
		}

		TEST_METHOD(T004_setLength)
		{
			int length = 87.2;
			int input = 67.5;
			int EXPECTED = 67.5;

			int actual = getArea(&length, &input);

			Assert::AreEqual(EXPECTED, actual);
		}

		TEST_METHOD(T005_setLength)
		{
			int length = 101;
			int input = -6;
			int EXPECTED = -6;

			int actual = getArea(&length, &input);

			Assert::AreEqual(EXPECTED, actual);
		}
	};
}
