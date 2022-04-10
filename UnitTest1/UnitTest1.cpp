#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project2.6\Project2.6\Lorry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Lorry l;
			double d = 20;
			d = l.Change2();
			Assert::AreEqual(l.Change2(), d);
		}
	};
}
