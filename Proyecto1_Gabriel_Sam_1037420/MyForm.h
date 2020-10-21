#pragma once

namespace Proyecto1GabrielSam1037420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		Stack^ Pila = gcnew Stack();
		Stack^ Pila2 = gcnew Stack();
		Stack^ Pila3 = gcnew Stack();
		Stack^ Pila4 = gcnew Stack();
		Stack^ Pila5 = gcnew Stack();
		Stack^ Pila6 = gcnew Stack();
		Stack^ Pila7 = gcnew Stack();
		Stack^ Pila8 = gcnew Stack();
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtpa;
	protected:

	
	private:
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar;
	private: System::Windows::Forms::DataGridView^ dgvMatriz;








	private: System::Windows::Forms::TextBox^ txtfilas;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pila_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pila_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pila_3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pila_4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pila_5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pila_6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pila_7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pila_8;
	private: System::Windows::Forms::Button^ button2;









































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
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->Pila_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pila_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pila_3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pila_4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pila_5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pila_6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pila_7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pila_8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdExportar = (gcnew System::Windows::Forms::SaveFileDialog());
			this->txtpa = (gcnew System::Windows::Forms::TextBox());
			this->txtfilas = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->AllowUserToAddRows = false;
			this->dgvMatriz->AllowUserToDeleteRows = false;
			this->dgvMatriz->AllowUserToOrderColumns = true;
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Pila_1, this->Pila_2,
					this->Pila_3, this->Pila_4, this->Pila_5, this->Pila_6, this->Pila_7, this->Pila_8
			});
			this->dgvMatriz->Location = System::Drawing::Point(62, 173);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->RowHeadersWidth = 51;
			this->dgvMatriz->RowTemplate->Height = 24;
			this->dgvMatriz->Size = System::Drawing::Size(1017, 350);
			this->dgvMatriz->TabIndex = 0;
			this->dgvMatriz->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dgvMatriz->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &MyForm::dgvMatriz_CellFormatting);
			// 
			// Pila_1
			// 
			this->Pila_1->HeaderText = L"";
			this->Pila_1->MinimumWidth = 6;
			this->Pila_1->Name = L"Pila_1";
			this->Pila_1->Visible = false;
			this->Pila_1->Width = 125;
			// 
			// Pila_2
			// 
			this->Pila_2->HeaderText = L"";
			this->Pila_2->MinimumWidth = 6;
			this->Pila_2->Name = L"Pila_2";
			this->Pila_2->Visible = false;
			this->Pila_2->Width = 125;
			// 
			// Pila_3
			// 
			this->Pila_3->HeaderText = L"";
			this->Pila_3->MinimumWidth = 6;
			this->Pila_3->Name = L"Pila_3";
			this->Pila_3->Visible = false;
			this->Pila_3->Width = 125;
			// 
			// Pila_4
			// 
			this->Pila_4->HeaderText = L"";
			this->Pila_4->MinimumWidth = 6;
			this->Pila_4->Name = L"Pila_4";
			this->Pila_4->Visible = false;
			this->Pila_4->Width = 125;
			// 
			// Pila_5
			// 
			this->Pila_5->HeaderText = L"";
			this->Pila_5->MinimumWidth = 6;
			this->Pila_5->Name = L"Pila_5";
			this->Pila_5->Visible = false;
			this->Pila_5->Width = 125;
			// 
			// Pila_6
			// 
			this->Pila_6->HeaderText = L"";
			this->Pila_6->MinimumWidth = 6;
			this->Pila_6->Name = L"Pila_6";
			this->Pila_6->Visible = false;
			this->Pila_6->Width = 125;
			// 
			// Pila_7
			// 
			this->Pila_7->HeaderText = L"";
			this->Pila_7->MinimumWidth = 6;
			this->Pila_7->Name = L"Pila_7";
			this->Pila_7->Visible = false;
			this->Pila_7->Width = 125;
			// 
			// Pila_8
			// 
			this->Pila_8->HeaderText = L"";
			this->Pila_8->MinimumWidth = 6;
			this->Pila_8->Name = L"Pila_8";
			this->Pila_8->Visible = false;
			this->Pila_8->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(869, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Importar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// sfdExportar
			// 
			this->sfdExportar->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::sfdExportar_FileOk);
			// 
			// txtpa
			// 
			this->txtpa->Location = System::Drawing::Point(1026, 37);
			this->txtpa->Name = L"txtpa";
			this->txtpa->Size = System::Drawing::Size(151, 22);
			this->txtpa->TabIndex = 2;
			// 
			// txtfilas
			// 
			this->txtfilas->Location = System::Drawing::Point(217, 37);
			this->txtfilas->Name = L"txtfilas";
			this->txtfilas->Size = System::Drawing::Size(151, 22);
			this->txtfilas->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(217, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 22);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Espacios para la pila";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Cantidad de pilas";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(306, 33);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Generar tablero";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1203, 569);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtfilas);
			this->Controls->Add(this->txtpa);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgvMatriz);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ReestablecerMatriz() {
		dgvMatriz->Rows->Clear();
		dgvMatriz->Columns->Clear();
		dgvMatriz->ColumnHeadersVisible = false;
		dgvMatriz->RowHeadersVisible = false;
	};
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		//Se agregan los filtros al OpenFileDialog
		ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
		ofdImportar->FileName = "";

		//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
		if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			//ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
			txtpa->Text = ofdImportar->FileName;

			//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
			//Importante haber llamado al namespace System::IO antes de usar File
			array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);
			//array<String^>^ archivocolumna = File::ReadAllLines(ofdImportar->FileName);
		
			
			

			
			if (archivoLineas->Length > 0) {

				
				//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
				array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
				array<String^>^ archivofilas = archivoLineas[0]->Split(',');



				if (archivofilas->Length > 0) {
					int cantidadColumnas = archivoColumna->Length;
					int cantidadfilas = archivofilas->Length;

					int cantespacios = Convert::ToInt32(txtfilas->Text);
					int cantpilas = Convert::ToInt32(textBox1->Text);

					DataGridViewTextBoxColumn^ pila1 = gcnew DataGridViewTextBoxColumn();
					pila1->Width = 60;
					DataGridViewTextBoxColumn^ pila2 = gcnew DataGridViewTextBoxColumn();
					pila2->Width = 60;
					DataGridViewTextBoxColumn^ pila3 = gcnew DataGridViewTextBoxColumn();
					pila3->Width = 60;
					DataGridViewTextBoxColumn^ pila4 = gcnew DataGridViewTextBoxColumn();
					pila4->Width = 60;
					DataGridViewTextBoxColumn^ pila5 = gcnew DataGridViewTextBoxColumn();
					pila5->Width = 60;
					DataGridViewTextBoxColumn^ pila6 = gcnew DataGridViewTextBoxColumn();
					pila6->Width = 60;
					DataGridViewTextBoxColumn^ pila7 = gcnew DataGridViewTextBoxColumn();
					pila7->Width = 60;
					DataGridViewTextBoxColumn^ pila8 = gcnew DataGridViewTextBoxColumn();
					pila8->Width = 60;

					if (cantpilas > 0) {
						/*if (cantpilas == 1) {
							pila1->Width = 60;
							dgvMatriz->Columns->Add(pila1);
						}
						if (cantpilas == 2) {
							dgvMatriz->Columns->Add(pila1);
							dgvMatriz->Columns->Add(pila2);
						}
						if (cantpilas == 3) {

							dgvMatriz->Columns->Add(pila1);
							dgvMatriz->Columns->Add(pila2);
							dgvMatriz->Columns->Add(pila3);
						}
						if (cantpilas == 4) {

							dgvMatriz->Columns->Add(pila1);
							dgvMatriz->Columns->Add(pila2);
							dgvMatriz->Columns->Add(pila3);
							dgvMatriz->Columns->Add(pila4);
						}
						if (cantpilas == 5) {
							
							dgvMatriz->Columns->Add(pila1);
							dgvMatriz->Columns->Add(pila2);
							dgvMatriz->Columns->Add(pila3);
							dgvMatriz->Columns->Add(pila4);
							dgvMatriz->Columns->Add(pila5);
						}
						if (cantpilas == 6) {

							dgvMatriz->Columns->Add(pila1);
							dgvMatriz->Columns->Add(pila2);
							dgvMatriz->Columns->Add(pila3);
							dgvMatriz->Columns->Add(pila4);
							dgvMatriz->Columns->Add(pila5);
							dgvMatriz->Columns->Add(pila6);
						}
						if (cantpilas == 7) {

							dgvMatriz->Columns->Add(pila1);
							dgvMatriz->Columns->Add(pila2);
							dgvMatriz->Columns->Add(pila3);
							dgvMatriz->Columns->Add(pila4);
							dgvMatriz->Columns->Add(pila5);
							dgvMatriz->Columns->Add(pila6);
							dgvMatriz->Columns->Add(pila7);
						}
						if (cantpilas == 8) {

							dgvMatriz->Columns->Add(pila1);
							dgvMatriz->Columns->Add(pila2);
							dgvMatriz->Columns->Add(pila3);
							dgvMatriz->Columns->Add(pila4);
							dgvMatriz->Columns->Add(pila5);
							dgvMatriz->Columns->Add(pila6);
							dgvMatriz->Columns->Add(pila7);
							dgvMatriz->Columns->Add(pila8);
						}*/

						//for (int i = 0; i < cantpilas; i++) {
						//	DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
						//	nuevacolumna->Width = 60;



						//	//Se le agrega el tipo de columna que será
						//	DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();

						//	//Se crea una columna
						//	
						//	nuevacolumna->CellTemplate = cellTemplate;

						//	//Se agrega la columna al Datagrid
						//	dgvMatriz->Columns->Add(nuevacolumna);

						//}
					}

					
					
					array<String^>^ fila;

			
					
					
					//Llena el DatagridView
					for (int k = 0; k < archivoLineas->Length; k++) {
						fila = archivoLineas[k]->Split(',');
						
					}
					
					int j = 0;
					int j1 = 0,j2=0,j3=0,j4=0,j5=0,j6=0,j7=0,j8=0,j9=0,j10=0;
					int i = 0,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0;
					for (int x = 0; x < (cantespacios*cantpilas); x++) {

						
						
						
							if ((j1 == 0)||(j3==cantespacios)) {
								Pila_1->Visible=true;
								/*dgvMatriz->Columns->Insert(1, Pila_2);*/
								if (Convert::ToString(fila[x]) == "B") {

									Pila->Push(fila[x]);
									
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									if (i == 0) {
										
										this->dgvMatriz[0, cantespacios-1]->Value = "B";
										j3++;
										
									}
									if (i == 1) {
										
										this->dgvMatriz[0, cantespacios-2]->Value = "B";
										j3++;
										
									}
									if (i == 2) {
										
										this->dgvMatriz[0, cantespacios-3]->Value = "B";
										j3++;
										
									}
									if (i == 3) {
										
										this->dgvMatriz[0, cantespacios-4]->Value = "B";
										j3++;
										
									}
									if (i == 4) {
										
										this->dgvMatriz[0, cantespacios - 5]->Value = "B";
										j3++;
									
									}
									if (i == 5) {
										
										this->dgvMatriz[0, cantespacios - 6]->Value = "B";
										j3++;
										
									}
									if (i == 6) {
										
										this->dgvMatriz[0, cantespacios - 7]->Value = "B";
										j3++;
										
									}
									if (i == 7) {
										
										this->dgvMatriz[0, cantespacios - 8]->Value = "B";
										j3++;
										
									}
									
									i++;

								}
								else if (Convert::ToString(fila[x]) == "Z") {
									Pila->Push("Z");
									
									/*dgvMatriz->Rows->Insert(0,Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Z";*/
									if (i == 0) {
										
										this->dgvMatriz[0, cantespacios-1]->Value = "Z";
										j3++;
									
									}
									if (i == 1) {
										
										int val = cantespacios - 2;
										this->dgvMatriz[0, val]->Value = "Z";
										j3++;
										
									}
									if (i == 2) {
										
										this->dgvMatriz[0, cantespacios - 3]->Value = "Z";
										j3++;
										
									}
									if (i == 3) {
										
										this->dgvMatriz[0, cantespacios - 4]->Value = "Z";
										j3++;
										
									}
									if (i == 4) {
										
										this->dgvMatriz[0, cantespacios - 5]->Value = "Z";
										j3++;
										
									}
									if (i == 5) {
									
										this->dgvMatriz[0, cantespacios - 6]->Value = "Z";
										j3++;
										
									}
									if (i == 6) {
									
										this->dgvMatriz[0, cantespacios - 7]->Value = "Z";
										j3++;
										
									}
									if (i == 7) {
										
										this->dgvMatriz[0, cantespacios - 8]->Value = "Z";
										j3++;
										
									}
									i++;
								}
								else if (Convert::ToString(fila[x]) == "W") {
									Pila->Push(fila[x]);
									
									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i == 0) {
										
										this->dgvMatriz[0, cantespacios-1]->Value = "W";
										j3++;
										
									}
									if (i == 1) {
								
										this->dgvMatriz[0, cantespacios - 2]->Value = "W";
										j3++;
										
									}
									if (i == 2) {
										
										this->dgvMatriz[0, cantespacios - 3]->Value = "W";
										j3++;
									
									}
									if (i == 3) {
										
										this->dgvMatriz[0, cantespacios - 4]->Value = "W";
										j3++;
										
									}
									if (i == 4) {
										
										this->dgvMatriz[0, cantespacios - 5]->Value = "W";
										j3++;
									
									}
									if (i == 5) {
										
										this->dgvMatriz[0, cantespacios - 6]->Value = "W";
										j3++;
									
									}
									if (i == 6) {
										
										this->dgvMatriz[0, cantespacios - 7]->Value = "W";
										j3++;
									
									}
									if (i == 7) {
										
										this->dgvMatriz[0, cantespacios - 8]->Value = "W";
										j3++;
									
									}
									i++;
								}
								else if (Convert::ToString(fila[x]) == "R") {
									Pila->Push(fila[x]);
									
									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i == 0) {
										
										this->dgvMatriz[0, cantespacios-1]->Value = "R";
										j3++;
										
									}
									if (i == 1) {
										
										this->dgvMatriz[0, cantespacios - 2]->Value = "R";
										j3++;
										
									}
									if (i == 2) {
								
										this->dgvMatriz[0, cantespacios - 3]->Value = "R";
										j3++;
									
									}
									if (i == 3) {
										
										this->dgvMatriz[0, cantespacios - 4]->Value = "R";
										j3++;
										
									}
									if (i == 4) {
									
										this->dgvMatriz[0, cantespacios - 5]->Value = "R";
										j3++;
									
									}
									if (i == 5) {
								
										this->dgvMatriz[0, cantespacios - 6]->Value = "R";
										j3++;
								
									}
									if (i == 6) {
							
										this->dgvMatriz[0, cantespacios - 7]->Value = "R";
										j3++;
									
									}
									if (i == 7) {
							
										this->dgvMatriz[0, cantespacios - 8]->Value = "R";
										j3++;
										
									}
									i++;
								}
								else if (Convert::ToString(fila[x]) == "Y") {
									Pila->Push("Y");
						
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Y";*/
									if (i == 0) {
		
										this->dgvMatriz[0, cantespacios-1]->Value = "Y";
										j3++;
										
									}
									if (i == 1) {
							
										this->dgvMatriz[0, cantespacios-2]->Value = "Y";
										j3++;
										
									}
									if (i == 2) {
										
										this->dgvMatriz[0, (cantespacios-3)]->Value = "Y";
										j3++;
										
									}
									if (i == 3) {
					
										this->dgvMatriz[0, cantespacios - 4]->Value = "Y";
										j3++;
										
									}
									if (i == 4) {
									
										this->dgvMatriz[0, cantespacios - 5]->Value = "Y";
										j3++;
										
									}
									if (i == 5) {
			
										this->dgvMatriz[0, cantespacios - 6]->Value = "Y";
										j3++;
										
									}
									if (i == 6) {
								
										this->dgvMatriz[0, cantespacios - 7]->Value = "Y";
										j3++;
										
									}
									if (i == 7) {

										this->dgvMatriz[0, cantespacios - 8]->Value = "Y";
										j3++;
										
									}
									i++;
								}
								else if (Convert::ToString(fila[x]) == "G") {
									Pila->Push(fila[x]);
				
									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i == 0) {
					
										this->dgvMatriz[0, cantespacios-1]->Value = "G";
										j3++;
						
									}
									if (i == 1) {
			
										this->dgvMatriz[0, cantespacios - 2]->Value = "G";
										j3++;
									
									}
									if (i == 2) {
										
										this->dgvMatriz[0, cantespacios - 3]->Value = "G";
										j3++;
										
									}
									if (i == 3) {
										
										this->dgvMatriz[0, cantespacios - 4]->Value = "G";
										j3++;
										
									}
									if (i == 4) {
									
										this->dgvMatriz[0, cantespacios - 5]->Value = "G";
										j3++;
										
									}
									if (i == 5) {
					
										this->dgvMatriz[0, cantespacios - 6]->Value = "G";
										j3++;
										
									}
									if (i == 6) {
					
										this->dgvMatriz[0, cantespacios - 7]->Value = "G";
										j3++;
						
									}
									if (i == 7) {
								
										this->dgvMatriz[0, cantespacios - 8]->Value = "G";
										j3++;
									
									}
									i++;
								}
								else if (Convert::ToString(fila[x]) == "P") {
									Pila->Push("P");
									/*dgvMatriz->Rows->Add();*/
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "P";*/
									if (i == 0) {
										
										int val = cantespacios - 1;
										this->dgvMatriz[0,val]->Value = "P";
										j3++;
										
									}
									else if (i == 1) {
						
										this->dgvMatriz[0, cantespacios - 2]->Value = "P";
										j3++;
										
									}
									else  if (i == 2) {
							
										this->dgvMatriz[0, cantespacios - 3]->Value = "P";
										j3++;
										
									}
									else if (i == 3) {
									
										this->dgvMatriz[0, cantespacios - 4]->Value = "P";
										j3++;
										
									}
									if (i == 4) {
									
										this->dgvMatriz[0, cantespacios - 5]->Value = "P";
										j3++;
										
									}
									if (i == 5) {
								
										this->dgvMatriz[0, cantespacios - 6]->Value = "P";
										j3++;
										
									}
									if (i == 6) {
									
										this->dgvMatriz[0, cantespacios - 7]->Value = "P";
										j3++;
										
									}
									if (i == 7) {
									
										this->dgvMatriz[0, cantespacios - 8]->Value = "P";
										j3++;
										
									}
									i++;
								}
								else if (Convert::ToString(fila[x]) == "N") {
									Pila->Push(fila[x]);
							
									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i == 0) {
								
										this->dgvMatriz[0, cantespacios-1]->Value = "N";
										j3++;
									
									}
									if (i == 1) {
										
										this->dgvMatriz[0, cantespacios - 2]->Value = "N";
										j3++;
									
									}
									if (i == 2) {

										this->dgvMatriz[0, cantespacios - 3]->Value = "N";
										j3++;
								
									}
									if (i == 3) {
						
										this->dgvMatriz[0, cantespacios - 4]->Value = "N";
										j3++;
										
									}
									if (i == 4) {
								
										this->dgvMatriz[0, cantespacios - 5]->Value = "N";
										j3++;
										
									}
									if (i == 5) {
							
										this->dgvMatriz[0, cantespacios - 6]->Value = "N";
										j3++;
									
									}
									if (i == 6) {
								
										this->dgvMatriz[0, cantespacios - 7]->Value = "N";
										j3++;
									
									}
									if (i == 7) {
										
										this->dgvMatriz[0, cantespacios - 8]->Value = "N";
										j3++;
									
									}
									i++;
								}
								else if (Convert::ToString(fila[x]) == "X") {
									
									for (int v = 0; v == (cantespacios-i); v++) {
										
										j3++;

									}
									j1++;
									j++;
									j4 = 0;
									i1 = 0;

								}

							}
							else if ((j1 == 1) || (j4 == cantespacios)) {

								Pila_2->Visible = true;
								/*dgvMatriz->Columns->Insert(1, Pila_2);*/
								if (Convert::ToString(fila[x]) == "B") {

									Pila->Push(fila[x]);

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									if (i1 == 0) {
										
										this->dgvMatriz[1, cantespacios-1]->Value = "B";
										j4++;
										
									}
									if (i1 == 1) {
									
										this->dgvMatriz[1, cantespacios - 2]->Value = "B";
										j4++;
										
									}
									if (i1 == 2) {
								
										this->dgvMatriz[1, cantespacios - 3]->Value = "B";
										j4++;
								
									}
									if (i1 == 3) {
										
										this->dgvMatriz[1, cantespacios - 4]->Value = "B";
										j4++;
									
									}
									if (i1 == 4) {
									
										this->dgvMatriz[1, cantespacios - 5]->Value = "B";
										j4++;
									
									}
									if (i1 == 5) {
									
										this->dgvMatriz[1, cantespacios - 6]->Value = "B";
										j4++;
									
									}
									if (i1 == 6) {
										
										this->dgvMatriz[1, cantespacios - 7]->Value = "B";
										j4++;
									
									}
									if (i1 == 7) {
										
										this->dgvMatriz[1, cantespacios - 8]->Value = "B";
										j4++;
										
									}

									i1++;

								}
								else if (Convert::ToString(fila[x]) == "Z") {
									Pila->Push("Z");
							
									/*dgvMatriz->Rows->Insert(0,Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Z";*/
									if (i1 == 0) {
									
										this->dgvMatriz[1, cantespacios-1]->Value = "Z";
										j4++;
								
									}
									if (i == 1) {
									
										this->dgvMatriz[1, cantespacios - 2]->Value = "Z";
										j4++;
								
									}
									if (i1 == 2) {
										
										this->dgvMatriz[1, cantespacios - 3]->Value = "Z";
										j4++;
								
									}
									if (i1 == 3) {
								
										this->dgvMatriz[1, cantespacios - 4]->Value = "Z";
										j4++;
								
									}
									if (i1 == 4) {
										
										this->dgvMatriz[1, cantespacios - 5]->Value = "Z";
										j4++;
										
									}
									if (i1 == 5) {
										
										this->dgvMatriz[1, cantespacios - 6]->Value = "Z";
										j4++;
										
									}
									if (i1 == 6) {
							
										this->dgvMatriz[1, cantespacios - 7]->Value = "Z";
										j4++;
								
									}
									if (i1== 7) {
									
										this->dgvMatriz[1, cantespacios - 8]->Value = "Z";
										j4++;
									
									}
									i1++;
								}
								else if (Convert::ToString(fila[x]) == "W") {
									Pila->Push(fila[x]);
				
									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i1 == 0) {

										this->dgvMatriz[1, cantespacios-1]->Value = "W";
										j4++;
		
									}
									if (i1 == 1) {
					
										this->dgvMatriz[1, cantespacios - 2]->Value = "W";
										j4++;
						
									}
									if (i1 == 2) {
						
										this->dgvMatriz[1, cantespacios - 3]->Value = "W";
										j4++;
							
									}
									if (i1 == 3) {
			
										this->dgvMatriz[1, cantespacios - 4]->Value = "W";
										j4++;
						
									}
									if (i1 == 4) {
			
										this->dgvMatriz[1, cantespacios - 5]->Value = "W";
										j4++;
				
									}
									if (i1 == 5) {
							
										this->dgvMatriz[1, cantespacios - 6]->Value = "W";
										j4++;
							
									}
									if (i1 == 6) {
								
										this->dgvMatriz[1, cantespacios - 7]->Value = "W";
										j4++;
									
									}
									if (i1 == 7) {
				
										this->dgvMatriz[1, cantespacios - 8]->Value = "W";
										j4++;
									
									}
									i1++;
								}
								else if (Convert::ToString(fila[x]) == "R") {
									Pila->Push(fila[x]);
									
									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i1 == 0) {
										int val = cantespacios - 1;
										this->dgvMatriz[1, val]->Value = "R";
										j4++;
							
									}
									if (i1 == 1) {
						
										this->dgvMatriz[1, cantespacios - 2]->Value = "R";
										j4++;
							
									}
									if (i1 == 2) {
								
										this->dgvMatriz[1, cantespacios - 3]->Value = "R";
										j4++;
						
									}
									if (i1 == 3) {
									
										this->dgvMatriz[1, cantespacios - 4]->Value = "R";
										j4++;
								
									}
									if (i1 == 4) {
									
										this->dgvMatriz[1, cantespacios - 5]->Value = "R";
										j4++;
									
									}
									if (i1 == 5) {
									
										this->dgvMatriz[1, cantespacios - 6]->Value = "R";
										j4++;
									
									}
									if (i1 == 6) {
						
										this->dgvMatriz[1, cantespacios - 7]->Value = "R";
										j4++;
					
									}
									if (i1 == 7) {
					
										this->dgvMatriz[1, cantespacios - 8]->Value = "R";
										j4++;
							
									}
									i1++;
								}
								else if (Convert::ToString(fila[x]) == "Y") {
									Pila->Push("Y");
						
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Y";*/
									if (i1 == 0) {

										this->dgvMatriz[1, cantespacios-1]->Value = "Y";
										j4++;
		
									}
									if (i1 == 1) {
		
										this->dgvMatriz[1, cantespacios - 2]->Value = "Y";
										j4++;
						
									}
									if (i1 == 2) {
					
										this->dgvMatriz[1, cantespacios - 3]->Value = "Y";
										j4++;
								
									}
									if (i1 == 3) {
									
										this->dgvMatriz[1, cantespacios - 4]->Value = "Y";
										j4++;
										
									}
									if (i1 == 4) {
										
										this->dgvMatriz[1, cantespacios - 5]->Value = "Y";
										j4++;
						
									}
									if (i1 == 5) {
							
										this->dgvMatriz[1, cantespacios - 6]->Value = "Y";
										j4++;
									
									}
									if (i1 == 6) {
			
										this->dgvMatriz[1, cantespacios - 7]->Value = "Y";
										j4++;
							
									}
									if (i1 == 7) {
							
										this->dgvMatriz[1, cantespacios - 8]->Value = "Y";
										j4++;
									
									}
									i1++;
								}
								else if (Convert::ToString(fila[x]) == "G") {
									Pila->Push(fila[x]);
					
									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i1 == 0) {
	
										this->dgvMatriz[1, cantespacios-1]->Value = "G";
										j4++;
								
									}
									if (i1 == 1) {
					
										this->dgvMatriz[1, cantespacios - 2]->Value = "G";
										j4++;
		
									}
									if (i1 == 2) {
							
										this->dgvMatriz[1, cantespacios - 3]->Value = "G";
										j4++;
							
									}
									if (i1 == 3) {
							
										this->dgvMatriz[1, cantespacios - 4]->Value = "G";
										j4++;
						
									}
									if (i1 == 4) {
					
										this->dgvMatriz[1, cantespacios - 5]->Value = "G";
										j4++;
								
									}
									if (i1 == 5) {
							
										this->dgvMatriz[1, cantespacios - 6]->Value = "G";
										j4++;
										
									}
									if (i1 == 6) {
							
										this->dgvMatriz[1, cantespacios - 7]->Value = "G";
										j4++;
						
									}
									if (i1 == 7) {
						
										this->dgvMatriz[1, cantespacios - 8]->Value = "G";
										j4++;
									
									}
									i1++;
								}
								else if (Convert::ToString(fila[x]) == "P") {
									Pila->Push("P");
				
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "P";*/
									if (i1 == 0) {
			
										this->dgvMatriz[1, cantespacios-1]->Value = "P";
										j4++;
			
									}
									if (i1 == 1) {
						
										this->dgvMatriz[1, cantespacios - 2]->Value = "P";
										j4++;
					
									}
									if (i1 == 2) {
							
										this->dgvMatriz[1, cantespacios - 3]->Value = "P";
										j4++;
								
									}
									if (i1 == 3) {
	
										this->dgvMatriz[1, cantespacios - 4]->Value = "P";
										j4++;
									
									}
									if (i1 == 4) {
								
										this->dgvMatriz[1, cantespacios - 5]->Value = "P";
										j4++;
								
									}
									if (i1 == 5) {
								
										this->dgvMatriz[1, cantespacios - 6]->Value = "P";
										j4++;
										
									}
									if (i1 == 6) {
				
										this->dgvMatriz[1, cantespacios - 7]->Value = "P";
										j4++;
								
									}
									if (i1 == 7) {
									
										this->dgvMatriz[1, cantespacios - 8]->Value = "P";
										j4++;
									
									}
									i1++;
								}
								else if (Convert::ToString(fila[x]) == "N") {
									Pila->Push(fila[x]);
								
									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i1 == 0) {
									
										this->dgvMatriz[1, cantespacios-1]->Value = "N";
										j4++;
									
									}
									if (i1 == 1) {
								
										this->dgvMatriz[1, cantespacios - 2]->Value = "N";
										j4++;
									
									}
									if (i1 == 2) {
									
										this->dgvMatriz[1, cantespacios - 3]->Value = "N";
										j4++;

									}
									if (i1 == 3) {
									
										this->dgvMatriz[1, cantespacios - 4]->Value = "N";
										j4++;
									
									}
									if (i1 == 4) {
									
										this->dgvMatriz[1, cantespacios - 5]->Value = "N";
										j4++;
									
									}
									if (i1 == 5) {
									
										this->dgvMatriz[1, cantespacios - 6]->Value = "N";
										j4++;
									
									}
									if (i1 == 6) {
										
										this->dgvMatriz[1, cantespacios - 7]->Value = "N";
										j4++;
										
									}
									if (i1 == 7) {
								
										this->dgvMatriz[1, cantespacios - 8]->Value = "N";
										j4++;
									
									}
									i1++;
								}
								else if (Convert::ToString(fila[x]) == "X") {

									for (int v = 0; v < (cantespacios - i); v++) {
										
										j4++;
									}
									
									j1++;
									j++;
									j5 = 0;
									i2 = 0;
								}

							}
							else if ((j1 == 2) || (j5 == cantespacios)) {
								Pila_1->Visible = true;
								/*dgvMatriz->Columns->Insert(1, Pila_2);*/
								if (Convert::ToString(fila[x]) == "B") {

									Pila->Push(fila[x]);

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									if (i2 == 0) {

										this->dgvMatriz[2, cantespacios - 1]->Value = "B";
										j5++;

									}
									if (i2 == 1) {

										this->dgvMatriz[2, cantespacios - 2]->Value = "B";
										j5++;

									}
									if (i2 == 2) {

										this->dgvMatriz[2, cantespacios - 3]->Value = "B";
										j5++;
									}
									if (i2 == 3) {

										this->dgvMatriz[2, cantespacios - 4]->Value = "B";
										j5++;

									}
									if (i2 == 4) {

										this->dgvMatriz[2, cantespacios - 5]->Value = "B";
										j5++;

									}
									if (i2 == 5) {

										this->dgvMatriz[2, cantespacios - 6]->Value = "B";
										j5++;

									}
									if (i2 == 6) {

										this->dgvMatriz[2, cantespacios - 7]->Value = "B";
										j5++;

									}
									if (i2 == 7) {

										this->dgvMatriz[2, cantespacios - 8]->Value = "B";
										j5++;

									}

									i2++;

								}
								else if (Convert::ToString(fila[x]) == "Z") {
									Pila->Push("Z");

									/*dgvMatriz->Rows->Insert(0,Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Z";*/
									if (i2 == 0) {

										this->dgvMatriz[2, cantespacios - 1]->Value = "Z";
										j5++;

									}
									if (i2 == 1) {

										int val = cantespacios - 2;
										this->dgvMatriz[2, val]->Value = "Z";
										j5++;

									}
									if (i2 == 2) {

										this->dgvMatriz[2, cantespacios - 3]->Value = "Z";
										j5++;

									}
									if (i2 == 3) {

										this->dgvMatriz[2, cantespacios - 4]->Value = "Z";
										j5++;

									}
									if (i2 == 4) {

										this->dgvMatriz[2, cantespacios - 5]->Value = "Z";
										j5++;

									}
									if (i2 == 5) {

										this->dgvMatriz[2, cantespacios - 6]->Value = "Z";
										j5++;

									}
									if (i2 == 6) {

										this->dgvMatriz[2, cantespacios - 7]->Value = "Z";
										j5++;

									}
									if (i2 == 7) {

										this->dgvMatriz[2, cantespacios - 8]->Value = "Z";
										j5++;

									}
									i2++;
								}
								else if (Convert::ToString(fila[x]) == "W") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i2 == 0) {

										this->dgvMatriz[2, cantespacios - 1]->Value = "W";
										j5++;

									}
									if (i2 == 1) {

										this->dgvMatriz[2, cantespacios - 2]->Value = "W";
										j5++;
									}
									if (i2 == 2) {

										this->dgvMatriz[2, cantespacios - 3]->Value = "W";
										j5++;

									}
									if (i2 == 3) {

										this->dgvMatriz[2, cantespacios - 4]->Value = "W";
										j5++;

									}
									if (i2 == 4) {

										this->dgvMatriz[2, cantespacios - 5]->Value = "W";
										j5++;

									}
									if (i2 == 5) {

										this->dgvMatriz[2, cantespacios - 6]->Value = "W";
										j5++;

									}
									if (i2 == 6) {

										this->dgvMatriz[2, cantespacios - 7]->Value = "W";
										j5++;

									}
									if (i2 == 7) {

										this->dgvMatriz[2, cantespacios - 8]->Value = "W";
										j5++;

									}
									i2++;
								}
								else if (Convert::ToString(fila[x]) == "R") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i2 == 0) {

										this->dgvMatriz[2, cantespacios - 1]->Value = "R";
										j5++;

									}
									if (i2 == 1) {

										this->dgvMatriz[2, cantespacios - 2]->Value = "R";
										j5++;

									}
									if (i2 == 2) {

										this->dgvMatriz[2, cantespacios - 3]->Value = "R";
										j5++;

									}
									if (i2 == 3) {

										this->dgvMatriz[2, cantespacios - 4]->Value = "R";
										j5++;

									}
									if (i2 == 4) {

										this->dgvMatriz[2, cantespacios - 5]->Value = "R";
										j5++;

									}
									if (i2 == 5) {

										this->dgvMatriz[2, cantespacios - 6]->Value = "R";
										j5++;

									}
									if (i2 == 6) {
										
										this->dgvMatriz[2, cantespacios - 7]->Value = "R";
										j5++;

									}
									if (i2== 7) {

										this->dgvMatriz[2, cantespacios - 8]->Value = "R";
										j5++;

									}
									i2++;
								}
								else if (Convert::ToString(fila[x]) == "Y") {
									Pila->Push("Y");

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Y";*/
									if (i2 == 0) {

										this->dgvMatriz[2, cantespacios - 1]->Value = "Y";
										j5++;

									}
									if (i2 == 1) {

										this->dgvMatriz[2, cantespacios - 2]->Value = "Y";
										j5++;

									}
									if (i2 == 2) {

										this->dgvMatriz[2, (cantespacios - 3)]->Value = "Y";
										j5++;

									}
									if (i2 == 3) {

										this->dgvMatriz[2, cantespacios - 4]->Value = "Y";
										j5++;

									}
									if (i2 == 4) {

										this->dgvMatriz[2, cantespacios - 5]->Value = "Y";
										j5++;

									}
									if (i2 == 5) {

										this->dgvMatriz[2, cantespacios - 6]->Value = "Y";
										j5++;

									}
									if (i2 == 6) {

										this->dgvMatriz[2, cantespacios - 7]->Value = "Y";
										j5++;

									}
									if (i2 == 7) {

										this->dgvMatriz[2, cantespacios - 8]->Value = "Y";
										j5++;

									}
									i2++;
								}
								else if (Convert::ToString(fila[x]) == "G") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i2 == 0) {

										this->dgvMatriz[2, cantespacios - 1]->Value = "G";
										j5++;

									}
									if (i2 == 1) {

										this->dgvMatriz[2, cantespacios - 2]->Value = "G";
										j5++;

									}
									if (i2 == 2) {

										this->dgvMatriz[2, cantespacios - 3]->Value = "G";
										j5++;

									}
									if (i2 == 3) {

										this->dgvMatriz[2, cantespacios - 4]->Value = "G";
										j5++;

									}
									if (i2 == 4) {

										this->dgvMatriz[2, cantespacios - 5]->Value = "G";
										j5++;

									}
									if (i2 == 5) {

										this->dgvMatriz[2, cantespacios - 6]->Value = "G";
										j5++;

									}
									if (i2 == 6) {

										this->dgvMatriz[2, cantespacios - 7]->Value = "G";
										j5++;

									}
									if (i2 == 7) {

										this->dgvMatriz[2, cantespacios - 8]->Value = "G";
										j5++;

									}
									i2++;
								}
								else if (Convert::ToString(fila[x]) == "P") {
									Pila->Push("P");
									/*dgvMatriz->Rows->Add();*/
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "P";*/
									if (i2 == 0) {

										int val = cantespacios - 1;
										this->dgvMatriz[2, val]->Value = "P";
										j5++;

									}
									else if (i2 == 1) {

										this->dgvMatriz[2, cantespacios - 2]->Value = "P";
										j5++;

									}
									else  if (i2 == 2) {

										this->dgvMatriz[2, cantespacios - 3]->Value = "P";
										j5++;

									}
									else if (i2 == 3) {

										this->dgvMatriz[2, cantespacios - 4]->Value = "P";
										j5++;

									}
									if (i2 == 4) {

										this->dgvMatriz[2, cantespacios - 5]->Value = "P";
										j5++;

									}
									if (i2 == 5) {

										this->dgvMatriz[2, cantespacios - 6]->Value = "P";
										j5++;

									}
									if (i2 == 6) {

										this->dgvMatriz[2, cantespacios - 7]->Value = "P";
										j5++;

									}
									if (i2 == 7) {

										this->dgvMatriz[2, cantespacios - 8]->Value = "P";
										j5++;

									}
									i2++;
								}
								else if (Convert::ToString(fila[x]) == "N") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i2 == 0) {

										this->dgvMatriz[2, cantespacios - 1]->Value = "N";
										j5++;

									}
									if (i2 == 1) {

										this->dgvMatriz[2, cantespacios - 2]->Value = "N";
										j5++;

									}
									if (i2 == 2) {

										this->dgvMatriz[2, cantespacios - 3]->Value = "N";
										j5++;

									}
									if (i2 == 3) {

										this->dgvMatriz[2, cantespacios - 4]->Value = "N";
										j5++;

									}
									if (i2 == 4) {

										this->dgvMatriz[2, cantespacios - 5]->Value = "N";
										j5++;

									}
									if (i2 == 5) {

										this->dgvMatriz[2, cantespacios - 6]->Value = "N";
										j5++;

									}
									if (i2 == 6) {

										this->dgvMatriz[2, cantespacios - 7]->Value = "N";
										j5++;

									}
									if (i2 == 7) {

										this->dgvMatriz[2, cantespacios - 8]->Value = "N";
										j5++;

									}
									i2++;
								}
								else if (Convert::ToString(fila[x]) == "X") {

									/*for (int v = 0; v == (cantespacios-i); v++) {

										j3++;

									}*/
									j1++;
									j++;
									j6 = 0;
									i3 = 0;

								}
							}
							
							if ((j1 == 3) || (j6 == cantespacios)) {
								Pila_1->Visible = true;
								/*dgvMatriz->Columns->Insert(1, Pila_2);*/
								if (Convert::ToString(fila[x]) == "B") {

									Pila->Push(fila[x]);

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									if (i3 == 0) {

										this->dgvMatriz[3, cantespacios - 1]->Value = "B";
										j6++;

									}
									if (i3 == 1) {

										this->dgvMatriz[3, cantespacios - 2]->Value = "B";
										j6++;

									}
									if (i3 == 2) {

										this->dgvMatriz[3, cantespacios - 3]->Value = "B";
										j6++;

									}
									if (i3 == 3) {

										this->dgvMatriz[3, cantespacios - 4]->Value = "B";
										j6++;

									}
									if (i3 == 4) {

										this->dgvMatriz[3, cantespacios - 5]->Value = "B";
										j6++;

									}
									if (i3 == 5) {

										this->dgvMatriz[3, cantespacios - 6]->Value = "B";
										j6++;

									}
									if (i3 == 6) {

										this->dgvMatriz[3, cantespacios - 7]->Value = "B";
										j6++;

									}
									if (i3 == 7) {

										this->dgvMatriz[3, cantespacios - 8]->Value = "B";
										j6++;

									}

									i3++;

								}
								else if (Convert::ToString(fila[x]) == "Z") {
									Pila->Push("Z");

									/*dgvMatriz->Rows->Insert(0,Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Z";*/
									if (i3 == 0) {

										this->dgvMatriz[3, cantespacios - 1]->Value = "Z";
										j6++;

									}
									if (i3 == 1) {

										int val = cantespacios - 2;
										this->dgvMatriz[3, val]->Value = "Z";
										j6++;

									}
									if (i3 == 2) {

										this->dgvMatriz[3, cantespacios - 3]->Value = "Z";
										j6++;

									}
									if (i3 == 3) {

										this->dgvMatriz[3, cantespacios - 4]->Value = "Z";
										j6++;

									}
									if (i3 == 4) {

										this->dgvMatriz[3, cantespacios - 5]->Value = "Z";
										j6++;

									}
									if (i3 == 5) {

										this->dgvMatriz[3, cantespacios - 6]->Value = "Z";
										j6++;

									}
									if (i3 == 6) {

										this->dgvMatriz[3, cantespacios - 7]->Value = "Z";
										j6++;

									}
									if (i3 == 7) {

										this->dgvMatriz[3, cantespacios - 8]->Value = "Z";
										j6++;

									}
									i3++;
								}
								else if (Convert::ToString(fila[x]) == "W") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i3 == 0) {

										this->dgvMatriz[3, cantespacios - 1]->Value = "W";
										j6++;

									}
									if (i3 == 1) {

										this->dgvMatriz[3, cantespacios - 2]->Value = "W";
										j6++;

									}
									if (i3 == 2) {

										this->dgvMatriz[3, cantespacios - 3]->Value = "W";
										j6++;

									}
									if (i3 == 3) {

										this->dgvMatriz[3, cantespacios - 4]->Value = "W";
										j6++;

									}
									if (i3 == 4) {

										this->dgvMatriz[3, cantespacios - 5]->Value = "W";
										j6++;

									}
									if (i3 == 5) {

										this->dgvMatriz[3, cantespacios - 6]->Value = "W";
										j6++;

									}
									if (i3 == 6) {

										this->dgvMatriz[3, cantespacios - 7]->Value = "W";
										j6++;

									}
									if (i3 == 7) {

										this->dgvMatriz[3, cantespacios - 8]->Value = "W";
										j6++;

									}
									i3++;
								}
								else if (Convert::ToString(fila[x]) == "R") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i3 == 0) {

										this->dgvMatriz[3, cantespacios - 1]->Value = "R";
										j6++;

									}
									if (i3 == 1) {

										this->dgvMatriz[3, cantespacios - 2]->Value = "R";
										j6++;

									}
									if (i3 == 2) {

										this->dgvMatriz[3, cantespacios - 3]->Value = "R";
										j6++;

									}
									if (i3 == 3) {

										this->dgvMatriz[3, cantespacios - 4]->Value = "R";
										j6++;

									}
									if (i3 == 4) {

										this->dgvMatriz[3, cantespacios - 5]->Value = "R";
										j6++;

									}
									if (i3 == 5) {

										this->dgvMatriz[3, cantespacios - 6]->Value = "R";
										j6++;

									}
									if (i3 == 6) {

										this->dgvMatriz[3, cantespacios - 7]->Value = "R";
										j6++;

									}
									if (i3 == 7) {

										this->dgvMatriz[3, cantespacios - 8]->Value = "R";
										j6++;

									}
									i3++;
								}
								else if (Convert::ToString(fila[x]) == "Y") {
									Pila->Push("Y");

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Y";*/
									if (i3 == 0) {

										this->dgvMatriz[3, cantespacios - 1]->Value = "Y";
										j6++;

									}
									if (i3 == 1) {

										this->dgvMatriz[3, cantespacios - 2]->Value = "Y";
										j6++;
									}
									if (i3 == 2) {

										this->dgvMatriz[3, (cantespacios - 3)]->Value = "Y";
										j6++;

									}
									if (i3 == 3) {

										this->dgvMatriz[3, cantespacios - 4]->Value = "Y";
										j6++;
									}
									if (i3 == 4) {

										this->dgvMatriz[3, cantespacios - 5]->Value = "Y";
										j6++;

									}
									if (i3 == 5) {

										this->dgvMatriz[2, cantespacios - 6]->Value = "Y";
										j3++;

									}
									if (i3 == 6) {

										this->dgvMatriz[3, cantespacios - 7]->Value = "Y";
										j6++;

									}
									if (i3 == 7) {

										this->dgvMatriz[3, cantespacios - 8]->Value = "Y";
										j6++;

									}
									i3++;
								}
								else if (Convert::ToString(fila[x]) == "G") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i3 == 0) {

										this->dgvMatriz[3, cantespacios - 1]->Value = "G";
										j6++;

									}
									if (i3 == 1) {

										this->dgvMatriz[3, cantespacios - 2]->Value = "G";
										j3++;

									}
									if (i3 == 2) {

										this->dgvMatriz[3, cantespacios - 3]->Value = "G";
										j6++;

									}
									if (i3 == 3) {

										this->dgvMatriz[3, cantespacios - 4]->Value = "G";
										j6++;

									}
									if (i3 == 4) {

										this->dgvMatriz[3, cantespacios - 5]->Value = "G";
										j6++;

									}
									if (i3 == 5) {

										this->dgvMatriz[3, cantespacios - 6]->Value = "G";
										j6++;

									}
									if (i3 == 6) {

										this->dgvMatriz[3, cantespacios - 7]->Value = "G";
										j6++;

									}
									if (i3 == 7) {

										this->dgvMatriz[3, cantespacios - 8]->Value = "G";
										j6++;

									}
									i3++;
								}
								else if (Convert::ToString(fila[x]) == "P") {
									Pila->Push("P");
									/*dgvMatriz->Rows->Add();*/
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "P";*/
									if (i3 == 0) {

										int val = cantespacios - 1;
										this->dgvMatriz[3, val]->Value = "P";
										j6++;

									}
									else if (i3 == 1) {

										this->dgvMatriz[3, cantespacios - 2]->Value = "P";
										j6++;

									}
									else  if (i3 == 2) {

										this->dgvMatriz[3, cantespacios - 3]->Value = "P";
										j6++;

									}
									else if (i3 == 3) {

										this->dgvMatriz[3, cantespacios - 4]->Value = "P";
										j6++;

									}
									if (i3 == 4) {

										this->dgvMatriz[3, cantespacios - 5]->Value = "P";
										j6++;

									}
									if (i3 == 5) {

										this->dgvMatriz[3, cantespacios - 6]->Value = "P";
										j6++;

									}
									if (i3 == 6) {

										this->dgvMatriz[3, cantespacios - 7]->Value = "P";
										j6++;

									}
									if (i3 == 7) {

										this->dgvMatriz[3, cantespacios - 8]->Value = "P";
										j6++;

									}
									i3++;
								}
								else if (Convert::ToString(fila[x]) == "N") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i3 == 0) {

										this->dgvMatriz[3, cantespacios - 1]->Value = "N";
										j6++;

									}
									if (i3 == 1) {

										this->dgvMatriz[3, cantespacios - 2]->Value = "N";
										j6++;

									}
									if (i3 == 2) {

										this->dgvMatriz[3, cantespacios - 3]->Value = "N";
										j6++;

									}
									if (i3 == 3) {

										this->dgvMatriz[3, cantespacios - 4]->Value = "N";
										j6++;

									}
									if (i3 == 4) {

										this->dgvMatriz[3, cantespacios - 5]->Value = "N";
										j6++;

									}
									if (i3 == 5) {

										this->dgvMatriz[3, cantespacios - 6]->Value = "N";
										j3++;

									}
									if (i3 == 6) {

										this->dgvMatriz[3, cantespacios - 7]->Value = "N";
										j6++;

									}
									if (i3 == 7) {

										this->dgvMatriz[3, cantespacios - 8]->Value = "N";
										j6++;

									}
									i3++;
								}
								else if (Convert::ToString(fila[x]) == "X") {

									/*for (int v = 0; v == (cantespacios-i); v++) {

										j3++;

									}*/
									j1++;
									j++;
									j7 = 0;
									i4 = 0;

								}
							}

							if ((j1 == 4) || (j7 == cantespacios)) {
								Pila_1->Visible = true;
								/*dgvMatriz->Columns->Insert(1, Pila_2);*/
								if (Convert::ToString(fila[x]) == "B") {

									Pila->Push(fila[x]);

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									if (i4 == 0) {

										this->dgvMatriz[4, cantespacios - 1]->Value = "B";
										j7++;

									}
									if (i4 == 1) {

										this->dgvMatriz[4, cantespacios - 2]->Value = "B";
										j7++;

									}
									if (i4 == 2) {

										this->dgvMatriz[4, cantespacios - 3]->Value = "B";
										j7++;

									}
									if (i4 == 3) {

										this->dgvMatriz[4, cantespacios - 4]->Value = "B";
										j7++;

									}
									if (i4 == 4) {

										this->dgvMatriz[4, cantespacios - 5]->Value = "B";
										j7++;

									}
									if (i4 == 5) {

										this->dgvMatriz[4, cantespacios - 6]->Value = "B";
										j7++;

									}
									if (i4 == 6) {

										this->dgvMatriz[4, cantespacios - 7]->Value = "B";
										j7++;
									}
									if (i4 == 7) {

										this->dgvMatriz[4, cantespacios - 8]->Value = "B";
										j7++;

									}

									i4++;

								}
								else if (Convert::ToString(fila[x]) == "Z") {
									Pila->Push("Z");

									/*dgvMatriz->Rows->Insert(0,Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Z";*/
									if (i4 == 0) {

										this->dgvMatriz[4, cantespacios - 1]->Value = "Z";
										j7++;

									}
									if (i4 == 1) {

										int val = cantespacios - 2;
										this->dgvMatriz[4, val]->Value = "Z";
										j7++;

									}
									if (i4 == 2) {

										this->dgvMatriz[4, cantespacios - 3]->Value = "Z";
										j7++;

									}
									if (i4 == 3) {

										this->dgvMatriz[4, cantespacios - 4]->Value = "Z";
										j7++;

									}
									if (i4 == 4) {

										this->dgvMatriz[4, cantespacios - 5]->Value = "Z";
										j7++;

									}
									if (i4 == 5) {

										this->dgvMatriz[4, cantespacios - 6]->Value = "Z";
										j7++;

									}
									if (i4 == 6) {

										this->dgvMatriz[4, cantespacios - 7]->Value = "Z";
										j7++;

									}
									if (i4 == 7) {

										this->dgvMatriz[4, cantespacios - 8]->Value = "Z";
										j7++;

									}
									i4++;
								}
								else if (Convert::ToString(fila[x]) == "W") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i4 == 0) {

										this->dgvMatriz[4, cantespacios - 1]->Value = "W";
										j7++;

									}
									if (i4 == 1) {

										this->dgvMatriz[4, cantespacios - 2]->Value = "W";
										j7++;

									}
									if (i4 == 2) {

										this->dgvMatriz[4, cantespacios - 3]->Value = "W";
										j7++;

									}
									if (i4 == 3) {

										this->dgvMatriz[4, cantespacios - 4]->Value = "W";
										j7++;

									}
									if (i4 == 4) {

										this->dgvMatriz[4, cantespacios - 5]->Value = "W";
										j7++;

									}
									if (i4 == 5) {

										this->dgvMatriz[4, cantespacios - 6]->Value = "W";
										j7++;

									}
									if (i4 == 6) {

										this->dgvMatriz[4, cantespacios - 7]->Value = "W";
										j7++;

									}
									if (i4 == 7) {

										this->dgvMatriz[4, cantespacios - 8]->Value = "W";
										j7++;

									}
									i4++;
								}
								else if (Convert::ToString(fila[x]) == "R") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i4 == 0) {

										this->dgvMatriz[4, cantespacios - 1]->Value = "R";
										j7++;

									}
									if (i4 == 1) {

										this->dgvMatriz[4, cantespacios - 2]->Value = "R";
										j7++;

									}
									if (i4 == 2) {

										this->dgvMatriz[4, cantespacios - 3]->Value = "R";
										j7++;

									}
									if (i4 == 3) {

										this->dgvMatriz[4, cantespacios - 4]->Value = "R";
										j7++;

									}
									if (i4 == 4) {

										this->dgvMatriz[4, cantespacios - 5]->Value = "R";
										j7++;

									}
									if (i4 == 5) {

										this->dgvMatriz[4, cantespacios - 6]->Value = "R";
										j7++;

									}
									if (i4 == 6) {

										this->dgvMatriz[4, cantespacios - 7]->Value = "R";
										j7++;

									}
									if (i4 == 7) {

										this->dgvMatriz[4, cantespacios - 8]->Value = "R";
										j7++;

									}
									i4++;
								}
								else if (Convert::ToString(fila[x]) == "Y") {
									Pila->Push("Y");

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Y";*/
									if (i4 == 0) {

										this->dgvMatriz[4, cantespacios - 1]->Value = "Y";
										j7++;

									}
									if (i4 == 1) {

										this->dgvMatriz[4, cantespacios - 2]->Value = "Y";
										j7++;

									}
									if (i4 == 2) {

										this->dgvMatriz[4, (cantespacios - 3)]->Value = "Y";
										j7++;

									}
									if (i4 == 3) {

										this->dgvMatriz[4, cantespacios - 4]->Value = "Y";
										j7++;

									}
									if (i4 == 4) {

										this->dgvMatriz[4, cantespacios - 5]->Value = "Y";
										j7++;

									}
									if (i4 == 5) {

										this->dgvMatriz[4, cantespacios - 6]->Value = "Y";
										j7++;

									}
									if (i4 == 6) {

										this->dgvMatriz[4, cantespacios - 7]->Value = "Y";
										j7++;

									}
									if (i4 == 7) {

										this->dgvMatriz[4, cantespacios - 8]->Value = "Y";
										j7++;

									}
									i4++;
								}
								else if (Convert::ToString(fila[x]) == "G") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i4 == 0) {

										this->dgvMatriz[4, cantespacios - 1]->Value = "G";
										j7++;

									}
									if (i4 == 1) {

										this->dgvMatriz[4, cantespacios - 2]->Value = "G";
										j7++;

									}
									if (i4 == 2) {

										this->dgvMatriz[4, cantespacios - 3]->Value = "G";
										j7++;

									}
									if (i4 == 3) {

										this->dgvMatriz[4, cantespacios - 4]->Value = "G";
										j7++;

									}
									if (i4 == 4) {

										this->dgvMatriz[4, cantespacios - 5]->Value = "G";
										j7++;

									}
									if (i4 == 5) {

										this->dgvMatriz[4, cantespacios - 6]->Value = "G";
										j7++;

									}
									if (i4 == 6) {

										this->dgvMatriz[4 , cantespacios - 7]->Value = "G";
										j7++;

									}
									if (i4 == 7) {

										this->dgvMatriz[4, cantespacios - 8]->Value = "G";
										j7++;

									}
									i4++;
								}
								else if (Convert::ToString(fila[x]) == "P") {
									Pila->Push("P");
									/*dgvMatriz->Rows->Add();*/
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "P";*/
									if (i4 == 0) {

										int val = cantespacios - 1;
										this->dgvMatriz[4, val]->Value = "P";
										j7++;

									}
									else if (i4 == 1) {

										this->dgvMatriz[4, cantespacios - 2]->Value = "P";
										j7++;

									}
									else  if (i4 == 2) {

										this->dgvMatriz[4, cantespacios - 3]->Value = "P";
										j7++;

									}
									else if (i4 == 3) {

										this->dgvMatriz[4, cantespacios - 4]->Value = "P";
										j7++;

									}
									if (i4 == 4) {

										this->dgvMatriz[4, cantespacios - 5]->Value = "P";
										j7++;

									}
									if (i4 == 5) {

										this->dgvMatriz[4, cantespacios - 6]->Value = "P";
										j7++;

									}
									if (i4 == 6) {

										this->dgvMatriz[4, cantespacios - 7]->Value = "P";
										j7++;

									}
									if (i4 == 7) {

										this->dgvMatriz[4, cantespacios - 8]->Value = "P";
										j7++;

									}
									i4++;
								}
								else if (Convert::ToString(fila[x]) == "N") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i4 == 0) {

										this->dgvMatriz[4, cantespacios - 1]->Value = "N";
										j7++;

									}
									if (i4 == 1) {

										this->dgvMatriz[4, cantespacios - 2]->Value = "N";
										j7++;

									}
									if (i4 == 2) {

										this->dgvMatriz[4, cantespacios - 3]->Value = "N";
										j7++;

									}
									if (i4 == 3) {

										this->dgvMatriz[4, cantespacios - 4]->Value = "N";
										j7++;

									}
									if (i == 4) {

										this->dgvMatriz[0, cantespacios - 5]->Value = "N";
										j3++;

									}
									if (i4 == 5) {

										this->dgvMatriz[4, cantespacios - 6]->Value = "N";
										j7++;

									}
									if (i4 == 6) {

										this->dgvMatriz[4, cantespacios - 7]->Value = "N";
										j7++;

									}
									if (i4 == 7) {

										this->dgvMatriz[4, cantespacios - 8]->Value = "N";
										j7++;

									}
									i4++;
								}
								else if (Convert::ToString(fila[x]) == "X") {

									/*for (int v = 0; v == (cantespacios-i); v++) {

										j3++;

									}*/
									j1++;
									j++;
									j8 = 0;
									i5 = 0;

								}
							}
							else if ((j1 == 5) || (j8 == cantespacios)) {
								
								/*dgvMatriz->Columns->Insert(1, Pila_2);*/
								if (Convert::ToString(fila[x]) == "B") {

									Pila->Push(fila[x]);

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									if (i5 == 0) {

										this->dgvMatriz[5, cantespacios - 1]->Value = "B";
										j8++;

									}
									if (i5 == 1) {

										this->dgvMatriz[5, cantespacios - 2]->Value = "B";
										j8++;

									}
									if (i5 == 2) {

										this->dgvMatriz[5, cantespacios - 3]->Value = "B";
										j8++;

									}
									if (i5 == 3) {

										this->dgvMatriz[5, cantespacios - 4]->Value = "B";
										j8++;

									}
									if (i5 == 4) {

										this->dgvMatriz[5, cantespacios - 5]->Value = "B";
										j8++;

									}
									if (i5 == 5) {

										this->dgvMatriz[5, cantespacios - 6]->Value = "B";
										j8++;

									}
									if (i5 == 6) {

										this->dgvMatriz[5, cantespacios - 7]->Value = "B";
										j8++;
									}
									if (i5 == 7) {

										this->dgvMatriz[5, cantespacios - 8]->Value = "B";
										j8++;

									}

									i5++;

								}
								else if (Convert::ToString(fila[x]) == "Z") {
									Pila->Push("Z");

									/*dgvMatriz->Rows->Insert(0,Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Z";*/
									if (i5 == 0) {

										this->dgvMatriz[5, cantespacios - 1]->Value = "Z";
										j8++;

									}
									if (i5 == 1) {

										int val = cantespacios - 2;
										this->dgvMatriz[5, val]->Value = "Z";
										j8++;

									}
									if (i5 == 2) {

										this->dgvMatriz[5, cantespacios - 3]->Value = "Z";
										j8++;

									}
									if (i5 == 3) {

										this->dgvMatriz[5, cantespacios - 4]->Value = "Z";
										j8++;

									}
									if (i5 == 4) {

										this->dgvMatriz[5, cantespacios - 5]->Value = "Z";
										j8++;

									}
									if (i5 == 5) {

										this->dgvMatriz[5, cantespacios - 6]->Value = "Z";
										j8++;

									}
									if (i5 == 6) {

										this->dgvMatriz[5, cantespacios - 7]->Value = "Z";
										j8++;;

									}
									if (i5 == 7) {

										this->dgvMatriz[5, cantespacios - 8]->Value = "Z";
										j8++;

									}
									i5++;
								}
								else if (Convert::ToString(fila[x]) == "W") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i5 == 0) {

										this->dgvMatriz[5, cantespacios - 1]->Value = "W";
										j8++;

									}
									if (i5 == 1) {

										this->dgvMatriz[5, cantespacios - 2]->Value = "W";
										j8++;

									}
									if (i5 == 2) {

										this->dgvMatriz[5, cantespacios - 3]->Value = "W";
										j8++;

									}
									if (i5 == 3) {

										this->dgvMatriz[5, cantespacios - 4]->Value = "W";
										j8++;

									}
									if (i5 == 4) {

										this->dgvMatriz[5, cantespacios - 5]->Value = "W";
										j8++;

									}
									if (i5 == 5) {

										this->dgvMatriz[5, cantespacios - 6]->Value = "W";
										j8++;

									}
									if (i5 == 6) {

										this->dgvMatriz[5, cantespacios - 7]->Value = "W";
										j8++;

									}
									if (i5 == 7) {

										this->dgvMatriz[5, cantespacios - 8]->Value = "W";
										j8++;

									}
									i5++;
								}
								else if (Convert::ToString(fila[x]) == "R") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i5 == 0) {

										this->dgvMatriz[5, cantespacios - 1]->Value = "R";
										j8++;

									}
									if (i5 == 1) {

										this->dgvMatriz[5, cantespacios - 2]->Value = "R";
										j8++;

									}
									if (i5 == 2) {

										this->dgvMatriz[5, cantespacios - 3]->Value = "R";
										j8++;

									}
									if (i5 == 3) {

										this->dgvMatriz[5, cantespacios - 4]->Value = "R";
										j8++;

									}
									if (i5 == 4) {

										this->dgvMatriz[5, cantespacios - 5]->Value = "R";
										j8++;

									}
									if (i5 == 5) {

										this->dgvMatriz[5, cantespacios - 6]->Value = "R";
										j8++;

									}
									if (i5 == 6) {

										this->dgvMatriz[5, cantespacios - 7]->Value = "R";
										j8++;

									}
									if (i5 == 7) {

										this->dgvMatriz[5, cantespacios - 8]->Value = "R";
										j8++;

									}
									i5++;
								}
								else if (Convert::ToString(fila[x]) == "Y") {
									Pila->Push("Y");

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Y";*/
									if (i5 == 0) {

										this->dgvMatriz[5, cantespacios - 1]->Value = "Y";
										j8++;

									}
									if (i5 == 1) {

										this->dgvMatriz[5, cantespacios - 2]->Value = "Y";
										j8++;

									}
									if (i5 == 2) {

										this->dgvMatriz[5, (cantespacios - 3)]->Value = "Y";
										j8++;

									}
									if (i5 == 3) {

										this->dgvMatriz[5, cantespacios - 4]->Value = "Y";
										j8++;

									}
									if (i5 == 4) {

										this->dgvMatriz[5, cantespacios - 5]->Value = "Y";
										j8++;

									}
									if (i5 == 5) {

										this->dgvMatriz[5, cantespacios - 6]->Value = "Y";
										j8++;

									}
									if (i5 == 6) {

										this->dgvMatriz[5, cantespacios - 7]->Value = "Y";
										j8++;

									}
									if (i5 == 7) {

										this->dgvMatriz[5, cantespacios - 8]->Value = "Y";
										j8++;

									}
									i5++;
								}
								else if (Convert::ToString(fila[x]) == "G") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i5 == 0) {

										this->dgvMatriz[5, cantespacios - 1]->Value = "G";
										j8++;

									}
									if (i5 == 1) {

										this->dgvMatriz[5, cantespacios - 2]->Value = "G";
										j8++;

									}
									if (i5 == 2) {

										this->dgvMatriz[5, cantespacios - 3]->Value = "G";
										j8++;

									}
									if (i5 == 3) {

										this->dgvMatriz[5, cantespacios - 4]->Value = "G";
										j8++;

									}
									if (i5 == 4) {

										this->dgvMatriz[5, cantespacios - 5]->Value = "G";
										j8++;

									}
									if (i5 == 5) {

										this->dgvMatriz[5, cantespacios - 6]->Value = "G";
										j8++;

									}
									if (i5 == 6) {

										this->dgvMatriz[5, cantespacios - 7]->Value = "G";
										j8++;

									}
									if (i5 == 7) {

										this->dgvMatriz[5, cantespacios - 8]->Value = "G";
										j8++;

									}
									i5++;
								}
								else if (Convert::ToString(fila[x]) == "P") {
									Pila->Push("P");
									/*dgvMatriz->Rows->Add();*/
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "P";*/
									if (i5 == 0) {

										int val = cantespacios - 1;
										this->dgvMatriz[5, val]->Value = "P";
										j8++;

									}
									else if (i5 == 1) {

										this->dgvMatriz[5, cantespacios - 2]->Value = "P";
										j8++;

									}
									else  if (i5 == 2) {

										this->dgvMatriz[5, cantespacios - 3]->Value = "P";
										j8++;

									}
									else if (i5 == 3) {

										this->dgvMatriz[5, cantespacios - 4]->Value = "P";
										j8++;

									}
									if (i5 == 4) {

										this->dgvMatriz[5, cantespacios - 5]->Value = "P";
										j8++;

									}
									if (i5 == 5) {

										this->dgvMatriz[5, cantespacios - 6]->Value = "P";
										j8++;

									}
									if (i5 == 6) {

										this->dgvMatriz[5, cantespacios - 7]->Value = "P";
										j8++;

									}
									if (i5 == 7) {

										this->dgvMatriz[5, cantespacios - 8]->Value = "P";
										j8++;

									}
									i5++;
								}
								else if (Convert::ToString(fila[x]) == "N") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i5 == 0) {

										this->dgvMatriz[5, cantespacios - 1]->Value = "N";
										j8++;

									}
									if (i5 == 1) {

										this->dgvMatriz[5, cantespacios - 2]->Value = "N";
										j8++;

									}
									if (i5 == 2) {

										this->dgvMatriz[5, cantespacios - 3]->Value = "N";
										j8++;

									}
									if (i5 == 3) {

										this->dgvMatriz[5, cantespacios - 4]->Value = "N";
										j8++;

									}
									if (i5 == 4) {

										this->dgvMatriz[5, cantespacios - 5]->Value = "N";
										j8++;

									}
									if (i5 == 5) {

										this->dgvMatriz[5, cantespacios - 6]->Value = "N";
										j8++;

									}
									if (i5 == 6) {

										this->dgvMatriz[5, cantespacios - 7]->Value = "N";
										j8++;

									}
									if (i5 == 7) {

										this->dgvMatriz[5, cantespacios - 8]->Value = "N";
										j8++;

									}
									i5++;
								}
								else if (Convert::ToString(fila[x]) == "X") {

									/*for (int v = 0; v == (cantespacios-i); v++) {

										j3++;

									}*/
									j1++;
									j++;
									j9 = 0;
									i6 = 0;

								}
							}
							else if ((j1 == 6) || (j9 == cantespacios)) {
								Pila_1->Visible = true;
								/*dgvMatriz->Columns->Insert(1, Pila_2);*/
								if (Convert::ToString(fila[x]) == "B") {

									Pila->Push(fila[x]);

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									if (i6 == 0) {

										this->dgvMatriz[6, cantespacios - 1]->Value = "B";
										j9++;

									}
									if (i6 == 1) {

										this->dgvMatriz[6, cantespacios - 2]->Value = "B";
										j9++;

									}
									if (i6 == 2) {

										this->dgvMatriz[6, cantespacios - 3]->Value = "B";
										j9++;

									}
									if (i6 == 3) {

										this->dgvMatriz[6, cantespacios - 4]->Value = "B";
										j9++;

									}
									if (i6 == 4) {

										this->dgvMatriz[6, cantespacios - 5]->Value = "B";
										j9++;

									}
									if (i6 == 5) {

										this->dgvMatriz[6, cantespacios - 6]->Value = "B";
										j9++;
									}
									if (i6 == 6) {

										this->dgvMatriz[6, cantespacios - 7]->Value = "B";
										j9++;

									}
									if (i6 == 7) {

										this->dgvMatriz[6, cantespacios - 8]->Value = "B";
										j9++;

									}

									i6++;

								}
								else if (Convert::ToString(fila[x]) == "Z") {
									Pila->Push("Z");

									/*dgvMatriz->Rows->Insert(0,Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Z";*/
									if (i6 == 0) {

										this->dgvMatriz[6, cantespacios - 1]->Value = "Z";
										j9++;

									}
									if (i6 == 1) {

										int val = cantespacios - 2;
										this->dgvMatriz[6, val]->Value = "Z";
										j9++;

									}
									if (i6 == 2) {

										this->dgvMatriz[6, cantespacios - 3]->Value = "Z";
										j9++;

									}
									if (i6 == 3) {

										this->dgvMatriz[6, cantespacios - 4]->Value = "Z";
										j9++;

									}
									if (i6 == 4) {

										this->dgvMatriz[6, cantespacios - 5]->Value = "Z";
										j9++;

									}
									if (i6 == 5) {

										this->dgvMatriz[6, cantespacios - 6]->Value = "Z";
										j9++;

									}
									if (i6 == 6) {

										this->dgvMatriz[6, cantespacios - 7]->Value = "Z";
										j9++;

									}
									if (i6 == 7) {

										this->dgvMatriz[6, cantespacios - 8]->Value = "Z";
										j9++;

									}
									i6++;
								}
								else if (Convert::ToString(fila[x]) == "W") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i6 == 0) {

										this->dgvMatriz[6, cantespacios - 1]->Value = "W";
										j9++;

									}
									if (i6 == 1) {

										this->dgvMatriz[6, cantespacios - 2]->Value = "W";
										j9++;

									}
									if (i6 == 2) {

										this->dgvMatriz[6, cantespacios - 3]->Value = "W";
										j9++;

									}
									if (i6 == 3) {

										this->dgvMatriz[6, cantespacios - 4]->Value = "W";
										j9++;

									}
									if (i6 == 4) {

										this->dgvMatriz[6, cantespacios - 5]->Value = "W";
										j9++;

									}
									if (i6 == 5) {

										this->dgvMatriz[6, cantespacios - 6]->Value = "W";
										j9++;

									}
									if (i6 == 6) {

										this->dgvMatriz[6, cantespacios - 7]->Value = "W";
										j9++;

									}
									if (i6 == 7) {

										this->dgvMatriz[6, cantespacios - 8]->Value = "W";
										j9++;

									}
									i6++;
								}
								else if (Convert::ToString(fila[x]) == "R") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i6 == 0) {

										this->dgvMatriz[6, cantespacios - 1]->Value = "R";
										j9++;

									}
									if (i6 == 1) {

										this->dgvMatriz[6, cantespacios - 2]->Value = "R";
										j9++;

									}
									if (i6 == 2) {

										this->dgvMatriz[6, cantespacios - 3]->Value = "R";
										j9++;

									}
									if (i6 == 3) {

										this->dgvMatriz[6, cantespacios - 4]->Value = "R";
										j9++;

									}
									if (i6 == 4) {

										this->dgvMatriz[6, cantespacios - 5]->Value = "R";
										j9++;

									}
									if (i6 == 5) {

										this->dgvMatriz[6, cantespacios - 6]->Value = "R";
										j9++;

									}
									if (i6 == 6) {

										this->dgvMatriz[6, cantespacios - 7]->Value = "R";
										j9++;

									}
									if (i6 == 7) {

										this->dgvMatriz[6, cantespacios - 8]->Value = "R";
										j9++;

									}
									i6++;
								}
								else if (Convert::ToString(fila[x]) == "Y") {
									Pila->Push("Y");

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Y";*/
									if (i6 == 0) {

										this->dgvMatriz[6, cantespacios - 1]->Value = "Y";
										j9++;

									}
									if (i6 == 1) {

										this->dgvMatriz[6, cantespacios - 2]->Value = "Y";
										j9++;

									}
									if (i6 == 2) {

										this->dgvMatriz[6, (cantespacios - 3)]->Value = "Y";
										j9++;

									}
									if (i6 == 3) {

										this->dgvMatriz[6, cantespacios - 4]->Value = "Y";
										j9++;

									}
									if (i6 == 4) {

										this->dgvMatriz[6, cantespacios - 5]->Value = "Y";
										j9++;

									}
									if (i6 == 5) {

										this->dgvMatriz[6, cantespacios - 6]->Value = "Y";
										j9++;

									}
									if (i6 == 6) {

										this->dgvMatriz[6, cantespacios - 7]->Value = "Y";
										j9++;
									}
									if (i6 == 7) {

										this->dgvMatriz[6, cantespacios - 8]->Value = "Y";
										j9++;

									}
									i6++;
								}
								else if (Convert::ToString(fila[x]) == "G") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i6 == 0) {

										this->dgvMatriz[6, cantespacios - 1]->Value = "G";
										j9++;

									}
									if (i6 == 1) {

										this->dgvMatriz[6, cantespacios - 2]->Value = "G";
										j9++;
									}
									if (i6 == 2) {

										this->dgvMatriz[6, cantespacios - 3]->Value = "G";
										j9++;

									}
									if (i6 == 3) {

										this->dgvMatriz[6, cantespacios - 4]->Value = "G";
										j9++;

									}
									if (i6 == 4) {

										this->dgvMatriz[6, cantespacios - 5]->Value = "G";
										j9++;

									}
									if (i6 == 5) {

										this->dgvMatriz[6, cantespacios - 6]->Value = "G";
										j9++;

									}
									if (i6 == 6) {

										this->dgvMatriz[6, cantespacios - 7]->Value = "G";
										j9++;

									}
									if (i6 == 7) {

										this->dgvMatriz[6, cantespacios - 8]->Value = "G";
										j9++;

									}
									i6++;
								}
								else if (Convert::ToString(fila[x]) == "P") {
									Pila->Push("P");
									/*dgvMatriz->Rows->Add();*/
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "P";*/
									if (i6 == 0) {

										int val = cantespacios - 1;
										this->dgvMatriz[6, val]->Value = "P";
										j9++;

									}
									else if (i6 == 1) {

										this->dgvMatriz[6, cantespacios - 2]->Value = "P";
										j9++;

									}
									else  if (i6 == 2) {

										this->dgvMatriz[6, cantespacios - 3]->Value = "P";
										j9++;

									}
									else if (i6 == 3) {

										this->dgvMatriz[6, cantespacios - 4]->Value = "P";
										j9++;

									}
									if (i6 == 4) {

										this->dgvMatriz[6, cantespacios - 5]->Value = "P";
										j9++;

									}
									if (i6 == 5) {

										this->dgvMatriz[6, cantespacios - 6]->Value = "P";
										j9++;

									}
									if (i6 == 6) {

										this->dgvMatriz[6, cantespacios - 7]->Value = "P";
										j9++;

									}
									if (i6 == 7) {

										this->dgvMatriz[6, cantespacios - 8]->Value = "P";
										j9++;

									}
									i6++;
								}
								else if (Convert::ToString(fila[x]) == "N") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i6 == 0) {

										this->dgvMatriz[6, cantespacios - 1]->Value = "N";
										j9++;

									}
									if (i6 == 1) {

										this->dgvMatriz[6, cantespacios - 2]->Value = "N";
										j9++;

									}
									if (i6 == 2) {

										this->dgvMatriz[6, cantespacios - 3]->Value = "N";
										j9++;

									}
									if (i6 == 3) {

										this->dgvMatriz[6, cantespacios - 4]->Value = "N";
										j9++;

									}
									if (i6 == 4) {

										this->dgvMatriz[6, cantespacios - 5]->Value = "N";
										j9++;

									}
									if (i6 == 5) {

										this->dgvMatriz[6, cantespacios - 6]->Value = "N";
										j9++;

									}
									if (i6 == 6) {

										this->dgvMatriz[6, cantespacios - 7]->Value = "N";
										j9++;

									}
									if (i6 == 7) {

										this->dgvMatriz[6, cantespacios - 8]->Value = "N";
										j9++;

									}
									i6++;
								}
								else if (Convert::ToString(fila[x]) == "X") {

									/*for (int v = 0; v == (cantespacios-i); v++) {

										j3++;

									}*/
									j1++;
									j++;
									j10 = 0;
									i7 = 0;

								}
							}
							else if ((j1 == 7) || (j10 == cantespacios)) {
								Pila_1->Visible = true;
								/*dgvMatriz->Columns->Insert(1, Pila_2);*/
								if (Convert::ToString(fila[x]) == "B") {

									Pila->Push(fila[x]);

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									if (i7 == 0) {

										this->dgvMatriz[7, cantespacios - 1]->Value = "B";
										j10++;

									}
									if (i7 == 1) {

										this->dgvMatriz[7, cantespacios - 2]->Value = "B";
										j10++;

									}
									if (i7 == 2) {

										this->dgvMatriz[7, cantespacios - 3]->Value = "B";
										j10++;

									}
									if (i7 == 3) {

										this->dgvMatriz[7, cantespacios - 4]->Value = "B";
										j10++;

									}
									if (i7 == 4) {

										this->dgvMatriz[7, cantespacios - 5]->Value = "B";
										j10++;

									}
									if (i7 == 5) {

										this->dgvMatriz[7, cantespacios - 6]->Value = "B";
										j10++;

									}
									if (i7 == 6) {

										this->dgvMatriz[7, cantespacios - 7]->Value = "B";
										j10++;

									}
									if (i7 == 7) {

										this->dgvMatriz[7, cantespacios - 8]->Value = "B";
										j10++;

									}

									i7++;

								}
								else if (Convert::ToString(fila[x]) == "Z") {
									Pila->Push("Z");

									/*dgvMatriz->Rows->Insert(0,Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Z";*/
									if (i7 == 0) {

										this->dgvMatriz[7, cantespacios - 1]->Value = "Z";
										j10++;

									}
									if (i7 == 1) {

										int val = cantespacios - 2;
										this->dgvMatriz[7, val]->Value = "Z";
										j10++;

									}
									if (i7 == 2) {

										this->dgvMatriz[7, cantespacios - 3]->Value = "Z";
										j10++;

									}
									if (i7 == 3) {

										this->dgvMatriz[7, cantespacios - 4]->Value = "Z";
										j10++;

									}
									if (i7 == 4) {

										this->dgvMatriz[7, cantespacios - 5]->Value = "Z";
										j10++;

									}
									if (i7 == 5) {

										this->dgvMatriz[7, cantespacios - 6]->Value = "Z";
										j10++;

									}
									if (i7 == 6) {

										this->dgvMatriz[7, cantespacios - 7]->Value = "Z";
										j10++;

									}
									if (i7 == 7) {

										this->dgvMatriz[7, cantespacios - 8]->Value = "Z";
										j10++;

									}
									i7++;
								}
								else if (Convert::ToString(fila[x]) == "W") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i7 == 0) {

										this->dgvMatriz[7, cantespacios - 1]->Value = "W";
										j10++;

									}
									if (i7 == 1) {

										this->dgvMatriz[7, cantespacios - 2]->Value = "W";
										j10++;

									}
									if (i7 == 2) {

										this->dgvMatriz[7, cantespacios - 3]->Value = "W";
										j10++;

									}
									if (i7 == 3) {

										this->dgvMatriz[7, cantespacios - 4]->Value = "W";
										j10++;

									}
									if (i7 == 4) {

										this->dgvMatriz[7, cantespacios - 5]->Value = "W";
										j10++;

									}
									if (i7 == 5) {

										this->dgvMatriz[7, cantespacios - 6]->Value = "W";
										j10++;

									}
									if (i7 == 6) {

										this->dgvMatriz[7, cantespacios - 7]->Value = "W";
										j10++;

									}
									if (i7 == 7) {

										this->dgvMatriz[7, cantespacios - 8]->Value = "W";
										j10++;

									}
									i7++;
								}
								else if (Convert::ToString(fila[x]) == "R") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, j2]->Value = fila[j2];*/
									if (i7 == 0) {

										this->dgvMatriz[7, cantespacios - 1]->Value = "R";
										j10++;

									}
									if (i7 == 1) {

										this->dgvMatriz[7, cantespacios - 2]->Value = "R";
										j10++;

									}
									if (i7 == 2) {

										this->dgvMatriz[7, cantespacios - 3]->Value = "R";
										j10++;

									}
									if (i7 == 3) {

										this->dgvMatriz[7, cantespacios - 4]->Value = "R";
										j10++;

									}
									if (i7 == 4) {

										this->dgvMatriz[7, cantespacios - 5]->Value = "R";
										j10++;

									}
									if (i7 == 5) {

										this->dgvMatriz[7, cantespacios - 6]->Value = "R";
										j10++;

									}
									if (i7 == 6) {

										this->dgvMatriz[7, cantespacios - 7]->Value = "R";
										j10++;

									}
									if (i7 == 7) {

										this->dgvMatriz[7, cantespacios - 8]->Value = "R";
										j10++;

									}
									i7++;
								}
								else if (Convert::ToString(fila[x]) == "Y") {
									Pila->Push("Y");

									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "Y";*/
									if (i7 == 0) {

										this->dgvMatriz[7, cantespacios - 1]->Value = "Y";
										j10++;

									}
									if (i7 == 1) {

										this->dgvMatriz[7, cantespacios - 2]->Value = "Y";
										j10++;

									}
									if (i7 == 2) {

										this->dgvMatriz[7, (cantespacios - 3)]->Value = "Y";
										j10++;

									}
									if (i7 == 3) {

										this->dgvMatriz[7, cantespacios - 4]->Value = "Y";
										j10++;

									}
									if (i7 == 4) {

										this->dgvMatriz[7, cantespacios - 5]->Value = "Y";
										j10++;

									}
									if (i7 == 5) {

										this->dgvMatriz[7, cantespacios - 6]->Value = "Y";
										j10++;

									}
									if (i7 == 6) {

										this->dgvMatriz[7, cantespacios - 7]->Value = "Y";
										j10++;

									}
									if (i7 == 7) {

										this->dgvMatriz[7, cantespacios - 8]->Value = "Y";
										j10++;

									}
									i7++;
								}
								else if (Convert::ToString(fila[x]) == "G") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i7 == 0) {

										this->dgvMatriz[7, cantespacios - 1]->Value = "G";
										j10++;

									}
									if (i7 == 1) {

										this->dgvMatriz[7, cantespacios - 2]->Value = "G";
										j10++;

									}
									if (i7 == 2) {

										this->dgvMatriz[7, cantespacios - 3]->Value = "G";
										j10++;

									}
									if (i7 == 3) {

										this->dgvMatriz[7, cantespacios - 4]->Value = "G";
										j10++;

									}
									if (i7 == 4) {

										this->dgvMatriz[7, cantespacios - 5]->Value = "G";
										j10++;
									}
									if (i7 == 5) {

										this->dgvMatriz[7, cantespacios - 6]->Value = "G";
										j10++;

									}
									if (i7 == 6) {

										this->dgvMatriz[7, cantespacios - 7]->Value = "G";
										j10++;

									}
									if (i7 == 7) {

										this->dgvMatriz[7, cantespacios - 8]->Value = "G";
										j10++;

									}
									i7++;
								}
								else if (Convert::ToString(fila[x]) == "P") {
									Pila->Push("P");
									/*dgvMatriz->Rows->Add();*/
									/*dgvMatriz->Rows->Insert(0, Pila->Pop());*/
									/*this->dgvMatriz[j, x]->Value = "P";*/
									if (i7 == 0) {

										int val = cantespacios - 1;
										this->dgvMatriz[7, val]->Value = "P";
										j10++;

									}
									else if (i7 == 1) {

										this->dgvMatriz[7, cantespacios - 2]->Value = "P";
										j10++;

									}
									else  if (i7 == 2) {

										this->dgvMatriz[7, cantespacios - 3]->Value = "P";
										j10++;

									}
									else if (i7 == 3) {

										this->dgvMatriz[7, cantespacios - 4]->Value = "P";
										j10++;

									}
									if (i7 == 4) {

										this->dgvMatriz[7, cantespacios - 5]->Value = "P";
										j10++;

									}
									if (i7 == 5) {

										this->dgvMatriz[7, cantespacios - 6]->Value = "P";
										j10++;

									}
									if (i7 == 6) {

										this->dgvMatriz[7, cantespacios - 7]->Value = "P";
										j10++;

									}
									if (i7 == 7) {

										this->dgvMatriz[7, cantespacios - 8]->Value = "P";
										j10++;

									}
									i7++;
								}
								else if (Convert::ToString(fila[x]) == "N") {
									Pila->Push(fila[x]);

									/*this->dgvMatriz[j, x]->Value = fila[j2];*/
									if (i7 == 0) {

										this->dgvMatriz[7, cantespacios - 1]->Value = "N";
										j10++;

									}
									if (i7 == 1) {

										this->dgvMatriz[7, cantespacios - 2]->Value = "N";
										j10++;

									}
									if (i7 == 2) {

										this->dgvMatriz[7, cantespacios - 3]->Value = "N";
										j10++;

									}
									if (i7 == 3) {

										this->dgvMatriz[7, cantespacios - 4]->Value = "N";
										j10++;

									}
									if (i7 == 4) {

										this->dgvMatriz[7, cantespacios - 5]->Value = "N";
										j10++;

									}
									if (i7 == 5) {

										this->dgvMatriz[7, cantespacios - 6]->Value = "N";
										j10++;

									}
									if (i7 == 6) {

										this->dgvMatriz[7, cantespacios - 7]->Value = "N";
										j10++;

									}
									if (i7 == 7) {

										this->dgvMatriz[7, cantespacios - 8]->Value = "N";
										j10++;

									}
									i7++;
								}
								else if (Convert::ToString(fila[x]) == "X") {

									/*for (int v = 0; v == (cantespacios-i); v++) {

										j3++;

									}*/
									j1++;
									j++;
								

								}
							}



					}
							
						
							
							
					

						
					
					
					
					
				}
			}

		}
		else {
			// Si no se selecciona correctamente un elemento entonces falla
			MessageBox::Show("No se seleccionó ningún archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}

	}
	
	private: System::Void sfdExportar_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}

private: System::Void dgvMatriz_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e) {

	if ((this->dgvMatriz->Columns[e->ColumnIndex]->DataGridView)) {

		if (e->Value==nullptr) {
			e->CellStyle->BackColor = Color::Gray;
		}
		else if (Convert::ToString(e->Value) == "B") {
			e->CellStyle->BackColor = Color::Black;
		}
		else if (Convert::ToString(e->Value) == "Z")
		{
			e->CellStyle->BackColor = Color::Blue;
		}
		else if (Convert::ToString(e->Value) == "W")
		{
			e->CellStyle->BackColor = Color::White;
		}
		else if (Convert::ToString(e->Value) == "R")
		{
			e->CellStyle->BackColor = Color::Red;
		}
		else if (Convert::ToString(e->Value) == "Y")
		{
			e->CellStyle->BackColor = Color::Yellow;
		}
		else if (Convert::ToString(e->Value) == "G")
		{
			e->CellStyle->BackColor = Color::Green;
		}
		else if (Convert::ToString(e->Value) == "P")
		{
			e->CellStyle->BackColor = Color::Purple;
		}
		else if (Convert::ToString(e->Value) == "N")
		{
			e->CellStyle->BackColor = Color::Navy;
		}
		
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int numFilas = Convert::ToInt32(txtfilas->Text);
	int numColumnas = Convert::ToInt32(textBox1->Text);
	
	ReestablecerMatriz();	//Método que borra el contenido de la matriz

	//Se crean las columnas de la matriz
	if (numColumnas > 0) {
		for (int i = 0; i < numColumnas; i++) {
			//Se crea una columna
			DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
			nuevacolumna->Width = 60;

			//Se le agrega el tipo de columna que será
			DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
			nuevacolumna->CellTemplate = cellTemplate;

			//Se agrega la columna al Datagrid
			dgvMatriz->Columns->Add(nuevacolumna);
		}
	}

	//Se agregan las filas a la matriz
	if (numFilas > 0) {
		for (int i = 0; i < numFilas; i++) {
			dgvMatriz->Rows->Add();
		}
	}
}
};
}
