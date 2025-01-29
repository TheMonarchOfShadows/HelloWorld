#include "pch.h"
#include "CppUnitTest.h"
#include "..\HelloFunc\funcClass.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestHelloWorld
{
	TEST_CLASS(UnitTestHelloWorld)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string str = "Hello World!";
			//Class myClass = new class();
			funcClass myClass;
			// myClass(str);
			myClass.HelloWorld(str);
			std::string answer = "Hello World!";
			Assert::AreEqual(str, answer);
			
		}
	};
}
