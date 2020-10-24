#include <iostream>
#include <string>
#include <ctime>
#pragma once



namespace Forma {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	template <class type1>
	class massive  //объявления класса массива
	{
	public:
		int size;
		type1* p;

		massive(int size)//конструктор по умолчнию
		{
			this->size = size;
			p = new type1[size];
		}

		~massive()//деструктор
		{
			delete[] p;
		}

		massive(const massive& r)//конструктор копирования
		{
			size = r.size;
			p = new type1[size];
			for (int i = 0; i < r.size; i++)
			{
				p[i] = r.p[i];
			}
		}

		void input(int pos, type1 element)// функция ввода элемента
		{
			p[pos] = element;
		}

		void show()//функция вывода массива на экран
		{
			for (int i = 0; i < size; i++)
			{
				cout << p[i] << endl;
			}
			cout << endl;
		}

		int Get_size()// функция возращающая размер массива
		{
			return size;
		}

		type1 operator[](int i)
		{
			return p[i];
		}

		massive& operator=(const massive& right) // перегрузка оператора присваивания
		{

			for (int i = 0; i < right.size; i++)
			{
				p[i] = right.p[i];
			}
			return *this;
		}

		massive& operator-(massive l)//перегрузка оператора вычитания массива
		{
			for (int i = 0; i < l.size; i++)
			{
				p[i] = p[i] - l.p[i];
			}
			return *this;
		}

		massive& operator-(type1 i)// перегрузка оператора вычитания элемента из массива
		{
			p[size - 1] = p[size - 1] - i;
			return *this;
		}

	};

	massive <int> a(10);
	massive <int> b(10);
	massive <int> c(10);
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сгенерировать массив a";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(174, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Массив: ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Сгенерировать массив b";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(174, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Массив: ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Массив c = a - b";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(174, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Массив: ";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Массив c = c - 4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(174, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Массив: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 425);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(0));

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Массив: ";
		for (int i = 0; i < a.Get_size(); i++)
		{
			a.input(i, rand() % 101 - 50);
			label1->Text += a[i] + " ";
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = "Массив: ";
		for (int i = 0; i < b.Get_size(); i++)
		{
			b.input(i, rand() % 101 - 50);
			label2->Text += b[i] + " ";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Text = "Массив: ";
		c = a - b;
		for (int i = 0; i < c.Get_size(); i++)
		{
			label3->Text += c[i] + " ";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		label4->Text = "Массив: ";
		c = c - 4;
		for (int i = 0; i < c.Get_size(); i++)
		{
			label4->Text += c[i] + " ";
		}
	}
	};
	

	
	
	


}
