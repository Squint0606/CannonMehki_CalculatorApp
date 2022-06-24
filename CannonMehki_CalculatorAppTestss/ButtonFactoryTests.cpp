#include "ButtonFactoryTests.h"
#include "../CannonMehki_CalculatorApp/ButtonFactory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace CannonMehkiCalculatorAppTestss
{
	TEST_CLASS(CannonMehkiCalculatorAppTestss)
	{
	public:
		ButtonFactory* factory = new ButtonFactory;
		wxFrame window;
		std::string label1 = "1";
		std::string label2 = "2";
		std::string label3 = "3";
		std::string label4 = "4";
		std::string label5 = "5";
		std::string label6 = "6";
		std::string label7 = "7";
		std::string label8 = "8";
		std::string label9 = "9";
		std::string label10 = "10";
		int size = 10;

		TEST_METHOD(Button1)
		{
			wxButton* button = factory->createButton(&window, 1, label1, size, size, size, size);
			//button->SetLabel(label1);
			std::string answer = button->GetLabel();
			Assert::AreEqual(std::string("1"), answer);
		}

		TEST_METHOD(Button2)
		{
			wxButton* button = factory->createButton(&window, 2, label2, size, size, size, size);
			//button->SetLabel(label2);
			std::string answer = button->GetLabel();
			Assert::AreEqual("2", answer.c_str());
		}

		TEST_METHOD(Button3)
		{
			wxButton* button = factory->createButton(&window, 3, label3, size, size, size, size);
			//button->SetLabel(label3);
			std::string answer = button->GetLabel();
			Assert::AreEqual("3", answer.c_str());
		}

		TEST_METHOD(Button4)
		{
			wxButton* button = factory->createButton(&window, 4, label4, size, size, size, size);
			//button->SetLabel(label4);
			std::string answer = button->GetLabel();
			Assert::AreEqual("4", answer.c_str());
		}

		TEST_METHOD(Button5)
		{
			wxButton* button = factory->createButton(&window, 5, label5, size, size, size, size);
			//button->SetLabel(label5);
			std::string answer = button->GetLabel();
			Assert::AreEqual("5", answer.c_str());
		}

		TEST_METHOD(Button6)
		{
			wxButton* button = factory->createButton(&window, 6, label6, size, size, size, size);
			
			std::string answer = button->GetLabel();
			Assert::AreEqual("6", answer.c_str());
		}

		TEST_METHOD(Button7)
		{
			wxButton* button = factory->createButton(&window, 7, label7, size, size, size, size);
			std::string answer = button->GetLabel();
			Assert::AreEqual("7", answer.c_str());
		}

		TEST_METHOD(Button8)
		{
			wxButton* button = factory->createButton(&window, 8, label8, size, size, size, size);
			std::string answer = button->GetLabel();
			Assert::AreEqual("8", answer.c_str());
		}

		TEST_METHOD(Button9)
		{
			wxButton* button = factory->createButton(&window, 9, label9, size, size, size, size);
			std::string answer = button->GetLabel();
			Assert::AreEqual("9", answer.c_str());
		}

		TEST_METHOD(Button10)
		{
			wxButton* button = factory->createButton(&window, 10, label10, size, size, size, size);
			std::string answer = button->GetLabel();
			Assert::AreEqual("10", answer.c_str());
		}
	};

}
