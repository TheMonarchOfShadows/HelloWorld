#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HelloWorldTesting
{
	TEST_CLASS(HelloWorldTesting)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string str = "Hello World!";
			//Class myClass = new class();
			// myClass(str);
			std::string answer = "Hello World!";
			Assert.AreEquals(str, answer);
		}

	};
}
