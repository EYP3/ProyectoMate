#pragma once
#include <iostream>
#include <string>
#include <vector> 
using namespace std;
vector <string> A = { "Lima","Piura","Chiclayo","Trujillo","Iquitos", "Cusco","PuertoMaldonado", "Juliaca", "Arequipa" };
vector <string> B = { "CiudadMex", "Cancun", "Habana", "SantoDomin", "PuntaCana", "SanJuan", "CiudadGuate", "Flores", "SanPedro", "Belice", "Roatan", "SanSalvador", "LaCeiba", "Tegucigalpa", "Liberia", "Managua", "SanJose", "CiudaddePan", "Caracas", "Medellin", "Bogota", "Cali", "Quito", "Guayaquil", "Lima" };




namespace TFDiscreta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	protected:







	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Panel^ Inicio;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ Creditos;


	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Inicio = (gcnew System::Windows::Forms::Panel());
			this->Creditos = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Inicio->SuspendLayout();
			this->Creditos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// Inicio
			// 
			this->Inicio->Controls->Add(this->Creditos);
			this->Inicio->Controls->Add(this->button1);
			this->Inicio->Controls->Add(this->button2);
			this->Inicio->Controls->Add(this->label1);
			this->Inicio->Controls->Add(this->pictureBox1);
			this->Inicio->Location = System::Drawing::Point(0, 1);
			this->Inicio->Name = L"Inicio";
			this->Inicio->Size = System::Drawing::Size(960, 607);
			this->Inicio->TabIndex = 20;
			// 
			// Creditos
			// 
			this->Creditos->Controls->Add(this->button7);
			this->Creditos->Controls->Add(this->label4);
			this->Creditos->Controls->Add(this->label3);
			this->Creditos->Controls->Add(this->pictureBox2);
			this->Creditos->Enabled = false;
			this->Creditos->Location = System::Drawing::Point(0, 0);
			this->Creditos->Name = L"Creditos";
			this->Creditos->Size = System::Drawing::Size(495, 607);
			this->Creditos->TabIndex = 18;
			this->Creditos->Visible = false;
			this->Creditos->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Font = (gcnew System::Drawing::Font(L"Ravie", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(27, 11);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 41);
			this->button7->TabIndex = 13;
			this->button7->Text = L"<= Atras";
			this->button7->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(3, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(475, 189);
			this->label4->TabIndex = 14;
			this->label4->Text = resources->GetString(L"label4.Text");
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(122, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(220, 36);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Integrantes";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-63, -25);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1127, 632);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ravie", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(315, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(291, 65);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Consultar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Ravie", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(315, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(291, 65);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Integrantes";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(196, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(558, 100);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Consulta de vuelos en \r\n            Avianca";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(7, -13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(950, 633);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 604);
			this->Controls->Add(this->Inicio);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Inicio->ResumeLayout(false);
			this->Inicio->PerformLayout();
			this->Creditos->ResumeLayout(false);
			this->Creditos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	Random^ r = gcnew Random;
	label1->Parent = pictureBox1;
	label1->BackColor = Color::Transparent;
	label1->ForeColor = System::Drawing::Color::FromArgb(r->Next(256), r->Next(256), r->Next(256));

}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClientSize = System::Drawing::Size(960, 607);
	Inicio->Visible = true;
	Inicio->Enabled = true;
	Creditos->Visible = false;
	Creditos->Enabled = false;
	timer1->Enabled = true;
}


private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->ClientSize = System::Drawing::Size(490, 596);
	this->label3->BackColor = Color::Transparent;
	this->label4->BackColor = Color::Transparent;
	Creditos->Visible = true;
	Creditos->Enabled = true;
	Inicio->Visible = true;
	Inicio->Enabled = true;
	timer1->Enabled = true;	
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	vector <string> Viajes;
	string Origen, Destino;
	int origen, destino;
	int** m1;
	int** m2;
	int MatrizCubica[9][9] = { {0,0,0} ,{0,0,0}, {0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0} };
	int MatrizMultiplicada[9][9] = { {0,0,0} ,{0,0,0}, {0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0} };
	int MatrizCubica_2[25][25] = { {0,0,0} ,{0,0,0}, {0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0} ,{0,0,0}, {0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0} };
	int MatrizMultiplicada_2[25][25] = { {0,0,0} ,{0,0,0}, {0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0} };

	m1 = new int* [9];
	for (int i = 0; i < 9; i++) {
		m1[i] = new int[9];
	}
	m1[0][0] = 0; m1[0][1] = 1; m1[0][2] = 1; m1[0][3] = 1; m1[0][4] = 1; m1[0][5] = 1; m1[0][6] = 0; m1[0][7] = 1; m1[0][8] = 1;
	m1[1][0] = 1; m1[1][1] = 0; m1[1][2] = 0; m1[1][3] = 0; m1[1][4] = 0; m1[1][5] = 0; m1[1][6] = 0; m1[1][7] = 0; m1[1][8] = 0;
	m1[2][0] = 1; m1[2][1] = 0; m1[2][2] = 0; m1[2][3] = 0;	m1[2][4] = 0; m1[2][5] = 0; m1[2][6] = 0; m1[2][7] = 0; m1[2][8] = 0;
	m1[3][0] = 1; m1[3][1] = 0; m1[3][2] = 0; m1[3][3] = 0;	m1[3][4] = 0; m1[3][5] = 0; m1[3][6] = 0; m1[3][7] = 0; m1[3][8] = 0;
	m1[4][0] = 1; m1[4][1] = 0; m1[4][2] = 0; m1[4][3] = 0; m1[4][4] = 0; m1[4][5] = 0; m1[4][6] = 0; m1[4][7] = 0; m1[4][8] = 0;
	m1[5][0] = 1; m1[5][1] = 0; m1[5][2] = 0; m1[5][3] = 0; m1[5][4] = 0; m1[5][5] = 0; m1[5][6] = 1; m1[5][7] = 0; m1[5][8] = 1;
	m1[6][0] = 0; m1[6][1] = 0; m1[6][2] = 0; m1[6][3] = 0;	m1[6][4] = 0; m1[6][5] = 1; m1[6][6] = 0; m1[6][7] = 0; m1[6][8] = 0;
	m1[7][0] = 1; m1[7][1] = 0; m1[7][2] = 0; m1[7][3] = 0;	m1[7][4] = 0; m1[7][5] = 0; m1[7][6] = 0; m1[7][7] = 0; m1[7][8] = 0;
	m1[8][0] = 1; m1[8][1] = 0; m1[8][2] = 0; m1[8][3] = 0;	m1[8][4] = 0; m1[8][5] = 1; m1[8][6] = 0; m1[8][7] = 0; m1[8][8] = 0;

	m2 = new int* [25];
	for (int i = 0; i < 25; i++) {
		m2[i] = new int[25];
	}
	m2[0][0] = 0; m2[0][1] = 0; m2[0][2] = 0; m2[0][3] = 0; m2[0][4] = 0; m2[0][5] = 0; m2[0][6] = 0; m2[0][7] = 0; m2[0][8] = 0; m2[0][9] = 0; m2[0][10] = 0; m2[0][11] = 1; m2[0][12] = 0; m2[0][13] = 0; m2[0][14] = 0; m2[0][15] = 0; m2[0][16] = 1; m2[0][17] = 0;	m2[0][18] = 0; m2[0][19] = 0; m2[0][20] = 1; m2[0][21] = 0; m2[0][22] = 0; m2[0][23] = 0; m2[0][24] = 1;
	m2[1][0] = 0; m2[1][1] = 0; m2[1][2] = 0; m2[1][3] = 0; m2[1][4] = 0; m2[1][5] = 0; m2[1][6] = 0; m2[1][7] = 0; m2[1][8] = 0; m2[1][9] = 0; m2[1][10] = 0; m2[1][11] = 1; m2[1][12] = 0; m2[1][13] = 0; m2[1][14] = 0; m2[1][15] = 0; m2[1][16] = 0; m2[1][17] = 0;	m2[1][18] = 0; m2[1][19] = 0; m2[1][20] = 1; m2[1][21] = 0; m2[1][22] = 0; m2[1][23] = 0; m2[1][24] = 0;
	m2[2][0] = 0; m2[2][1] = 0; m2[2][2] = 0; m2[2][3] = 0;	m2[2][4] = 0; m2[2][5] = 0; m2[2][6] = 0; m2[2][7] = 0; m2[2][8] = 0; m2[2][9] = 0; m2[2][10] = 0; m2[2][11] = 1; m2[2][12] = 0; m2[2][13] = 0; m2[2][14] = 0; m2[2][15] = 0; m2[2][16] = 0; m2[2][17] = 0;	m2[2][18] = 0; m2[2][19] = 0; m2[2][20] = 0; m2[2][21] = 0; m2[2][22] = 0; m2[2][23] = 0; m2[2][24] = 0;
	m2[3][0] = 0; m2[3][1] = 0; m2[3][2] = 0; m2[3][3] = 0;	m2[3][4] = 0; m2[3][5] = 0; m2[3][6] = 0; m2[3][7] = 0; m2[3][8] = 0; m2[3][9] = 0; m2[3][10] = 0; m2[3][11] = 0; m2[3][12] = 0; m2[3][13] = 0; m2[3][14] = 0; m2[3][15] = 0; m2[3][16] = 1; m2[3][17] = 0;	m2[3][18] = 0; m2[3][19] = 0; m2[3][20] = 1; m2[3][21] = 0; m2[3][22] = 0; m2[3][23] = 0; m2[3][24] = 1;
	m2[4][0] = 0; m2[4][1] = 0; m2[4][2] = 0; m2[4][3] = 0; m2[4][4] = 0; m2[4][5] = 0; m2[4][6] = 0; m2[4][7] = 0; m2[4][8] = 0; m2[4][9] = 0; m2[4][10] = 0; m2[4][11] = 0; m2[4][12] = 0; m2[4][13] = 0; m2[4][14] = 0; m2[4][15] = 0; m2[4][16] = 0; m2[4][17] = 0;	m2[4][18] = 0; m2[4][19] = 0; m2[4][20] = 1; m2[4][21] = 0; m2[4][22] = 0; m2[4][23] = 0; m2[4][24] = 0;
	m2[5][0] = 0; m2[5][1] = 0; m2[5][2] = 0; m2[5][3] = 0; m2[5][4] = 0; m2[5][5] = 0; m2[5][6] = 0; m2[5][7] = 0; m2[5][8] = 0; m2[5][9] = 0; m2[5][10] = 0; m2[5][11] = 0; m2[5][12] = 0; m2[5][13] = 0; m2[5][14] = 0; m2[5][15] = 0; m2[5][16] = 0; m2[5][17] = 0;	m2[5][18] = 0; m2[5][19] = 0; m2[5][20] = 1; m2[5][21] = 0; m2[5][22] = 0; m2[5][23] = 0; m2[5][24] = 0;
	m2[6][0] = 0; m2[6][1] = 0; m2[6][2] = 0; m2[6][3] = 0;	m2[6][4] = 0; m2[6][5] = 0; m2[6][6] = 0; m2[6][7] = 1; m2[6][8] = 1; m2[6][9] = 0; m2[6][10] = 0; m2[6][11] = 1; m2[6][12] = 0; m2[6][13] = 1; m2[6][14] = 0; m2[6][15] = 0; m2[6][16] = 1; m2[6][17] = 0;	m2[6][18] = 0; m2[6][19] = 0; m2[6][20] = 0; m2[6][21] = 0; m2[6][22] = 0; m2[6][23] = 0; m2[6][24] = 0;
	m2[7][0] = 0; m2[7][1] = 0; m2[7][2] = 0; m2[7][3] = 0;	m2[7][4] = 0; m2[7][5] = 0; m2[7][6] = 1; m2[7][7] = 0; m2[7][8] = 0; m2[7][9] = 0; m2[7][10] = 0; m2[7][11] = 0; m2[7][12] = 0; m2[7][13] = 0; m2[7][14] = 0; m2[7][15] = 0; m2[7][16] = 0; m2[7][17] = 0;	m2[7][18] = 0; m2[7][19] = 0; m2[7][20] = 0; m2[7][21] = 0; m2[7][22] = 0; m2[7][23] = 0; m2[7][24] = 0;
	m2[8][0] = 0; m2[8][1] = 0; m2[8][2] = 0; m2[8][3] = 0;	m2[8][4] = 0; m2[8][5] = 0; m2[8][6] = 1; m2[8][7] = 0; m2[8][8] = 0; m2[8][9] = 0; m2[8][10] = 1; m2[8][11] = 1; m2[8][12] = 0; m2[8][13] = 1; m2[8][14] = 0; m2[8][15] = 0; m2[8][16] = 0; m2[8][17] = 0;	m2[8][18] = 0; m2[8][19] = 0; m2[8][20] = 0; m2[8][21] = 0; m2[8][22] = 0; m2[8][23] = 0; m2[8][24] = 0;
	m2[9][0] = 0; m2[9][1] = 0; m2[9][2] = 0; m2[9][3] = 0; m2[9][4] = 0; m2[9][5] = 0; m2[9][6] = 0; m2[9][7] = 0; m2[9][8] = 0; m2[9][9] = 0; m2[9][10] = 0; m2[9][11] = 1; m2[9][12] = 0; m2[9][13] = 0; m2[9][14] = 0; m2[9][15] = 0; m2[9][16] = 0; m2[9][17] = 0;	m2[9][18] = 0; m2[9][19] = 0; m2[9][20] = 0; m2[9][21] = 0; m2[9][22] = 0; m2[9][23] = 0; m2[9][24] = 0;
	m2[10][0] = 0; m2[10][1] = 0; m2[10][2] = 0; m2[10][3] = 0; m2[10][4] = 0; m2[10][5] = 0; m2[10][6] = 0; m2[10][7] = 0; m2[10][8] = 1; m2[10][9] = 0; m2[10][10] = 0; m2[10][11] = 1; m2[10][12] = 0; m2[10][13] = 1; m2[10][14] = 0; m2[10][15] = 0; m2[10][16] = 0; m2[10][17] = 0; m2[10][18] = 0; m2[10][19] = 0; m2[10][20] = 0; m2[10][21] = 0; m2[10][22] = 0; m2[10][23] = 0; m2[10][24] = 0;
	m2[11][0] = 1; m2[11][1] = 1; m2[11][2] = 1; m2[11][3] = 0; m2[11][4] = 0; m2[11][5] = 0; m2[11][6] = 0; m2[11][7] = 0; m2[11][8] = 1; m2[11][9] = 1; m2[11][10] = 1; m2[11][11] = 0; m2[11][12] = 0; m2[11][13] = 0; m2[11][14] = 1; m2[11][15] = 1; m2[11][16] = 1; m2[11][17] = 1; m2[11][18] = 0; m2[11][19] = 1; m2[11][20] = 1; m2[11][21] = 1; m2[11][22] = 1; m2[11][23] = 1; m2[11][24] = 1;
	m2[12][0] = 0; m2[12][1] = 0; m2[12][2] = 0; m2[12][3] = 0; m2[12][4] = 0; m2[12][5] = 0; m2[12][6] = 0; m2[12][7] = 0; m2[12][8] = 0; m2[12][9] = 0; m2[12][10] = 0; m2[12][11] = 0; m2[12][12] = 0; m2[12][13] = 1; m2[12][14] = 0; m2[12][15] = 0; m2[12][16] = 0; m2[12][17] = 0; m2[12][18] = 0; m2[12][19] = 0; m2[12][20] = 0; m2[12][21] = 0; m2[12][22] = 0; m2[12][23] = 0; m2[12][24] = 0;
	m2[13][0] = 0; m2[13][1] = 0; m2[13][2] = 0; m2[13][3] = 0; m2[13][4] = 0; m2[13][5] = 0; m2[13][6] = 1; m2[13][7] = 0; m2[13][8] = 1; m2[13][9] = 0; m2[13][10] = 1; m2[13][11] = 0; m2[13][12] = 1; m2[13][13] = 0; m2[13][14] = 0; m2[13][15] = 0; m2[13][16] = 1; m2[13][17] = 0; m2[13][18] = 0; m2[13][19] = 0; m2[13][20] = 0; m2[13][21] = 0; m2[13][22] = 0; m2[13][23] = 0; m2[13][24] = 0;
	m2[14][0] = 0; m2[14][1] = 0; m2[14][2] = 0; m2[14][3] = 0; m2[14][4] = 0; m2[14][5] = 0; m2[14][6] = 0; m2[14][7] = 0; m2[14][8] = 0; m2[14][9] = 0; m2[14][10] = 0; m2[14][11] = 1; m2[14][12] = 0; m2[14][13] = 0; m2[14][14] = 0; m2[14][15] = 0; m2[14][16] = 0; m2[14][17] = 0; m2[14][18] = 0; m2[14][19] = 0; m2[14][20] = 0; m2[14][21] = 0; m2[14][22] = 0; m2[14][23] = 0; m2[14][24] = 0;
	m2[15][0] = 0; m2[15][1] = 0; m2[15][2] = 0; m2[15][3] = 0; m2[15][4] = 0; m2[15][5] = 0; m2[15][6] = 0; m2[15][7] = 0; m2[15][8] = 0; m2[15][9] = 0; m2[15][10] = 0; m2[15][11] = 1; m2[15][12] = 0; m2[15][13] = 0; m2[15][14] = 0; m2[15][15] = 0; m2[15][16] = 1; m2[15][17] = 0; m2[15][18] = 0; m2[15][19] = 0; m2[15][20] = 0; m2[15][21] = 0; m2[15][22] = 0; m2[15][23] = 0; m2[15][24] = 0;
	m2[16][0] = 1; m2[16][1] = 0; m2[16][2] = 0; m2[16][3] = 1; m2[16][4] = 0; m2[16][5] = 0; m2[16][6] = 1; m2[16][7] = 0; m2[16][8] = 1; m2[16][9] = 0; m2[16][10] = 0; m2[16][11] = 1; m2[16][12] = 0; m2[16][13] = 1; m2[16][14] = 0; m2[16][15] = 1; m2[16][16] = 0; m2[16][17] = 1; m2[16][18] = 1; m2[16][19] = 1; m2[16][20] = 1; m2[16][21] = 0; m2[16][22] = 1; m2[16][23] = 0; m2[16][24] = 1;
	m2[17][0] = 0; m2[17][1] = 0; m2[17][2] = 0; m2[17][3] = 0; m2[17][4] = 0; m2[17][5] = 0; m2[17][6] = 0; m2[17][7] = 0; m2[17][8] = 0; m2[17][9] = 0; m2[17][10] = 0; m2[17][11] = 1; m2[17][12] = 0; m2[17][13] = 0; m2[17][14] = 0; m2[17][15] = 0; m2[17][16] = 1; m2[17][17] = 0; m2[17][18] = 0; m2[17][19] = 0; m2[17][20] = 1; m2[17][21] = 0; m2[17][22] = 0; m2[17][23] = 0; m2[17][24] = 0;
	m2[18][0] = 0; m2[18][1] = 0; m2[18][2] = 0; m2[18][3] = 0; m2[18][4] = 0; m2[18][5] = 0; m2[18][6] = 0; m2[18][7] = 0; m2[18][8] = 0; m2[18][9] = 0; m2[18][10] = 0; m2[18][11] = 0; m2[18][12] = 0; m2[18][13] = 0; m2[18][14] = 0; m2[18][15] = 0; m2[18][16] = 1; m2[18][17] = 0; m2[18][18] = 0; m2[18][19] = 0; m2[18][20] = 0; m2[18][21] = 0; m2[18][22] = 0; m2[18][23] = 0; m2[18][24] = 0;
	m2[19][0] = 0; m2[19][1] = 0; m2[19][2] = 0; m2[19][3] = 0; m2[19][4] = 0; m2[19][5] = 0; m2[19][6] = 0; m2[19][7] = 0; m2[19][8] = 0; m2[19][9] = 0; m2[19][10] = 0; m2[19][11] = 1; m2[19][12] = 0; m2[19][13] = 0; m2[19][14] = 0; m2[19][15] = 0; m2[19][16] = 1; m2[19][17] = 0; m2[19][18] = 0; m2[19][19] = 0; m2[19][20] = 0; m2[19][21] = 0; m2[19][22] = 1; m2[19][23] = 0; m2[19][24] = 0;
	m2[20][0] = 1; m2[20][1] = 1; m2[20][2] = 0; m2[20][3] = 1; m2[20][4] = 1; m2[20][5] = 1; m2[20][6] = 1; m2[20][7] = 0; m2[20][8] = 0; m2[20][9] = 0; m2[20][10] = 0; m2[20][11] = 1; m2[20][12] = 0; m2[20][13] = 0; m2[20][14] = 0; m2[20][15] = 0; m2[20][16] = 1; m2[20][17] = 1; m2[20][18] = 0; m2[20][19] = 0; m2[20][20] = 0; m2[20][21] = 0; m2[20][22] = 0; m2[20][23] = 0; m2[20][24] = 0;
	m2[21][0] = 0; m2[21][1] = 0; m2[21][2] = 0; m2[21][3] = 0; m2[21][4] = 0; m2[21][5] = 0; m2[21][6] = 0; m2[21][7] = 0; m2[21][8] = 0; m2[21][9] = 0; m2[21][10] = 0; m2[21][11] = 1; m2[21][12] = 0; m2[21][13] = 0; m2[21][14] = 0; m2[21][15] = 0; m2[21][16] = 0; m2[21][17] = 0; m2[21][18] = 0; m2[21][19] = 0; m2[21][20] = 0; m2[21][21] = 0; m2[21][22] = 0; m2[21][23] = 0; m2[21][24] = 0;
	m2[22][0] = 0; m2[22][1] = 0; m2[22][2] = 0; m2[22][3] = 0; m2[22][4] = 0; m2[22][5] = 0; m2[22][6] = 0; m2[22][7] = 0; m2[22][8] = 0; m2[22][9] = 0; m2[22][10] = 0; m2[22][11] = 1; m2[22][12] = 0; m2[22][13] = 0; m2[22][14] = 0; m2[22][15] = 0; m2[22][16] = 1; m2[22][17] = 0; m2[22][18] = 0; m2[22][19] = 1; m2[22][20] = 0; m2[22][21] = 0; m2[22][22] = 0; m2[22][23] = 0; m2[22][24] = 1;
	m2[23][0] = 0; m2[23][1] = 0; m2[23][2] = 0; m2[23][3] = 0; m2[23][4] = 0; m2[23][5] = 0; m2[23][6] = 0; m2[23][7] = 0; m2[23][8] = 0; m2[23][9] = 0; m2[23][10] = 0; m2[23][11] = 1; m2[23][12] = 0; m2[23][13] = 0; m2[23][14] = 0; m2[23][15] = 0; m2[23][16] = 0; m2[23][17] = 0; m2[23][18] = 0; m2[23][19] = 0; m2[23][20] = 0; m2[23][21] = 0; m2[23][22] = 0; m2[23][23] = 0; m2[23][24] = 1;
	m2[24][0] = 1; m2[24][1] = 0; m2[24][2] = 0; m2[24][3] = 1; m2[24][4] = 0; m2[24][5] = 0; m2[24][6] = 0; m2[24][7] = 0; m2[24][8] = 0; m2[24][9] = 0; m2[24][10] = 0; m2[24][11] = 1; m2[24][12] = 0; m2[24][13] = 0; m2[24][14] = 0; m2[24][15] = 0; m2[24][16] = 1; m2[24][17] = 0; m2[24][18] = 0; m2[24][19] = 0; m2[24][20] = 0; m2[24][21] = 0; m2[24][22] = 1; m2[24][23] = 1; m2[24][24] = 0;

	cout << "Ciudades a donde viajar: Lima, Piura, Chiclayo, Trujillo, Iquitos, Cusco, PuertoMaldonado, Juliaca, Arequipa" << endl << endl;
	cout << "Ciudades a donde viajar: CiudadMex, Cancun, Habana, SantoDomin, PuntaCana, SanJuan, CiudadGuate, Flores" << endl;
	cout << "			SanPedro, Belice, Roatan, SanSalvador, LaCeiba, Tegucigalpa, Liberia, Managua" << endl;
	cout << "			SanJose, CiudaddePan, Caracas, Medellin, Bogota, Cali, Quito, Guayaquil, Lima" << endl << endl;

	cout << "Ingrese origen: ";
	cin >> Origen;
	cout << "Ingrese Destino: ";
	cin >> Destino;

	//Sacamos las posiciones del origen y del destino
	for (int i = 0; i < A.size(); i++) {
		if (A[i] == Origen)
			origen = i;
		if (A[i] == Destino)
			destino = i;
	}

	for (int i = 0; i < B.size(); i++) {
		if (B[i] == Origen)
			origen = i;
		if (B[i] == Destino)
			destino = i;
	}


	//Escribe la Matriz 9x9
	//for (int i = 0; i < 9; i++) {
	//	/*if (i == 0) {
	//		cout << "\t" << A[0] << "\t" << A[1] << "\t" << A[2] <<"\t" << A[3] << endl;
	//	}
	//	cout << A[i]<<"\t";*/
	//	for (int j = 0; j < 9;j++) {
	//		cout << m1[i][j]<<"\t";
	//	}
	//	cout << endl;
	//}


	//Verificamos si tiene viaje directo o no
	if (m1[origen][destino] == 1) {
		cout << "Viaje directo de " + A[origen] + " hasta " + A[destino] << endl;
		//Viajes.push_back("Viaje directo de " + A[origen] + " hasta " + A[destino]);
	}

	else cout << "\n\nNo tiene viaje directo! " << endl;

	//Verificamos Si tiene viaje con una escala
	for (int i = 0; i < 9; i++) {
		if (m1[origen][i] == 1 && m1[i][destino] == 1)

			cout << "Viaje de " + A[origen] + " hasta " + A[destino] + " con escala en " + A[i] << endl;
		/*Viajes.push_back("Viaje de " + A[origen] + " hasta " + A[destino] + " con escala en " + A[i]);*///Sirve para Almacenar todas las escalas
	}

	//Verificamos si tiene viaje directo o no (m2)
	if (m2[origen][destino] == 1) {
		cout << "Viaje directo de " + B[origen] + " hasta " + B[destino] << endl;
		//Viajes.push_back("Viaje directo de " + A[origen] + " hasta " + A[destino]);
	}

	else cout << "\n\nNo tiene viaje directo! " << endl;

	//Verificamos Si tiene viaje con una escala (m2)
	for (int i = 0; i < 9; i++) {
		if (m2[origen][i] == 1 && m2[i][destino] == 1)

			cout << "Viaje de " + B[origen] + " hasta " + B[destino] + " con escala en " + B[i] << endl;
		/*Viajes.push_back("Viaje de " + A[origen] + " hasta " + A[destino] + " con escala en " + A[i]);*///Sirve para Almacenar todas las escalas
	}


	//Creamos la matriz A^2
	for (int p = 0; p < 9; p++) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				MatrizMultiplicada[p][i] += m1[p][j] * m1[j][i];
				/*if (m1[p][j] == 1 && m1[j][i] == 1) {
					MatrizMultiplicada[p][i] = 1;
					if (p == i) {
						Viajes.push_back("Viaje directo de "+A[p]+" hasta "+A[j]);
					}
					else
						Viajes.push_back("Viaje con escala de " + A[p] + " hasta " + A[i] + " Escala en "+A[j]);
				}*/
			}
		}
	}
	//Creamos la matriz B^2
	for (int p = 0; p < 9; p++) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				MatrizMultiplicada[p][i] += m2[p][j] * m2[j][i];
				/*if (m1[p][j] == 1 && m1[j][i] == 1) {
					MatrizMultiplicada[p][i] = 1;
					if (p == i) {
						Viajes.push_back("Viaje directo de "+A[p]+" hasta "+A[j]);
					}
					else
						Viajes.push_back("Viaje con escala de " + A[p] + " hasta " + A[i] + " Escala en "+A[j]);
				}*/
			}
		}
	}


	//Escribimos la matriz A^2
	/*for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << MatrizMultiplicada[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n\n\n\n";*/


	//Creamos la matriz A^3
	for (int p = 0; p < 9; p++) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				MatrizCubica[p][i] += MatrizMultiplicada[p][j] * m1[j][i];
			}
		}
	}
	//Creamos la matriz A^3
	for (int p = 0; p < 9; p++) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				MatrizCubica[p][i] += MatrizMultiplicada[p][j] * m2[j][i];
			}
		}
	}
	//Escribimos la matriz A^3
	/*for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << MatrizCubica[i][j] << " ";
		}
		cout << endl;
	}*/


	//Creamos las variables para las dos escalas
	int esc1, esc2;
	esc1 = 0;
	esc2 = 0;
	bool Tiene2Escalas = false;
	//Verificamos si existe dos escalas y sacamos el valor de la segunda escala
	if (MatrizCubica[origen][destino] == 1) {
		for (int i = 0; i < 9; i++) {
			if (MatrizMultiplicada[origen][i] == 1 && m1[i][destino] == 1)
				esc2 = i;
			Tiene2Escalas = true;
		}

	}

	//Verificamos si existe dos escalas y sacamos el valor de la segunda escala (M2)
	if (MatrizCubica[origen][destino] == 1) {
		for (int i = 0; i < 9; i++) {
			if (MatrizMultiplicada[origen][i] == 1 && m2[i][destino] == 1)
				esc2 = i;
			Tiene2Escalas = true;
		}

	}

	if (Origen == "Lima" || "Piura" || "Chiclayo" || "Trujillo" || "Iquitos" || "Cusco" || "PuertoMaldonado" || "Juliaca" || "Arequipa")
	{
		//Si existe las 2 escalas queremos encontrar la primera escala
		if (Tiene2Escalas) {
			for (int i = 0; i < 9; i++) {
				if (m1[origen][i] == 1 && m1[i][esc2] == 1) {
					esc1 = i;
				}
			}
			cout << "Viaje de " + A[origen] + " hasta " + A[destino] + " tiene dos escalas, el primero en " + A[esc1] + " y el segundo vuelo en " + A[esc2] << endl;
		}
	}
	else
	{
		//Si existe las 2 escalas queremos encontrar la primera escala (M2)
		if (Tiene2Escalas) {
			for (int i = 0; i < 9; i++) {
				if (m2[origen][i] == 1 && m2[i][esc2] == 1) {
					esc1 = i;
				}
			}
			cout << "Viaje de " + B[origen] + " hasta " + B[destino] + " tiene dos escalas, el primero en " + B[esc1] + " y el segundo vuelo en " + B[esc2] << endl;
		}
	}

	//Imprimimos lista almacenada de viajes
	/*for (int i = 0; i < Viajes.size();i++) {
		cout << Viajes[i] << endl;
	}*/
	system("pause");

}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
