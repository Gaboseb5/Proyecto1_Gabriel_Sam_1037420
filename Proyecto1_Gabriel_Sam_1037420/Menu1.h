#pragma once
#include "Myform.h"
namespace Proyecto1GabrielSam1037420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Menu1
	/// </summary>
	public ref class Menu1 : public System::Windows::Forms::Form
	{
	public:
		Menu1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Menu1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(132, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Modo fácil";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Menu1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(132, 182);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Modo medio";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Menu1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(132, 253);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Modo difícil ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Menu1::button3_Click);
			// 
			// Menu1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 418);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Menu1";
			this->Text = L"Menu1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ Formulario_Juego = gcnew MyForm();
		Formulario_Juego->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ Formulario_Juego = gcnew MyForm();
		Formulario_Juego->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ Formulario_Juego = gcnew MyForm();
		Formulario_Juego->ShowDialog();
	}
	};
}
