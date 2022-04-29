#include <sstream>
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3_6/B1.cpp"
#include "../lab3_6/B2.cpp"
#include "../lab3_6/D1.cpp"
#include "../lab3_6/D3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab36tests {
	TEST_CLASS(lab36tests) {
	public:
		TEST_METHOD(B1_in_D3_Correct_output) {
			// Arrange
			D3 obj(1, 2, 3, 4);
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
