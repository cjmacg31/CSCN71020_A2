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
			//Adds length + length + width
			int length = 5;
			int width = 8;
			int EXPECTED = 18;

			int actual = getPerimeter(&length, &width);

			Assert::AreEqual(EXPECTED, actual);
		}

		TEST_METHOD(T002_getArea_5and8_40)
		{
			//Multiplies length by width
			int length = 5;
			int width = 8;
			int EXPECTED = 40;

			int actual = getArea(&length, &width);

			Assert::AreEqual(EXPECTED, actual);
		}

		TEST_METHOD(T003_setLength_99and99_99)
		{
			//Verify pass in input of 99 and length is set to 99
			int actual = 0;
			int input = 1;

			setLength(input, &actual);

			Assert::AreEqual(input, actual);
		}

		TEST_METHOD(T004_setLength)
		{
			//Verify pass in input of 67.5 and length is set to 67.5
			int actual = 87.2;
			int input = 67.5;

			setLength(input, &actual);

			Assert::AreEqual(input, actual);
		}

		TEST_METHOD(T005_setLength)
		{
			//Verify pass in input of -6 and length is set to -6
			int actual = 100;
			int input = 4;

			setLength(input, &actual);

			Assert::AreEqual(input, actual);
		}

		TEST_METHOD(T006_setWidth)
		{
			//Verify pass in input of 1 and width is set to 1
			int actual = 100;
			int input = 100;

			setWidth(input, &actual);

			Assert::AreEqual(input, actual);
		}

		TEST_METHOD(T007_setWidth)
		{
			//Verify pass in input of 65.3 and width is set to 65.3
			int actual = 65.3;
			int input =  65.3;

			setWidth(input, &actual);

			Assert::AreEqual(input, actual);
		}

		TEST_METHOD(T008_setWidth)
		{
			//Verify pass in input of 23 and width is set to 23
			int Expected = 23;
			int actual =  Expected;
			int input =  23 ;
			
			
			setWidth(input, &actual);

			Assert::AreEqual(Expected, actual);
		}
	};
}