#include <sstream>
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3_6/B1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab36tests {
	TEST_CLASS(lab36tests) {
	public:
		TEST_METHOD(B1_Correct_output) {
			// Arrange
			B1 obj(2);
			std::string expected = "class B1:\nshow_B1()\nB1::b1 = 2\n\n";
			std::stringstream buffer;
			std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());

			// Act
			obj.show_B1();
			std::string text = buffer.str();
			std::cout.rdbuf(prevcoutbuf);

			// Assert
			Assert::AreEqual(expected, text);
		}
	};
}
