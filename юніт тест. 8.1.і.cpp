#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 8.1.і/лаба 8.1.і.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест81і
{
	TEST_CLASS(юніттест81і)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* s = "while";
			char* cs = "is";
			int expected = Include(s, cs);
			Assert::AreEqual(expected, 0);
		}
	};
}
