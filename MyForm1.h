#pragma once
#include <iostream>
#include <string>
#include <vector> 
#include "Header.h"
using namespace std;


namespace TFDiscreta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

		}
	private: System::Windows::Forms::Timer^ timer1;
	public:

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		Interfaz* asd = new Interfaz();
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ textBox3;
	private:



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ToolTip^ toolTip2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(820, 656);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel1_Paint);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(33) {
				L"Lima", L"Piura", L"Chiclayo", L"Trujillo", L"Iquitos",
					L"Cusco", L"PuertoMaldonado", L"Juliaca", L"Arequipa", L"CiudadMex", L"Cancun", L"Habana", L"SantoDomin", L"PuntaCana", L"SanJuan",
					L"CiudadGuate", L"Flores", L"SanPedro", L"Belice", L"Roatan", L"SanSalvador", L"LaCeiba", L"Tegucigalpa", L"Liberia", L"Managua",
					L"SanJose", L"CiudaddePan", L"Caracas", L"Medellin", L"Bogota", L"Cali", L"Quito", L"Guayaquil"
			});
			this->comboBox2->Location = System::Drawing::Point(633, 69);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(170, 21);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(33) {
				L"Lima", L"Piura", L"Chiclayo", L"Trujillo", L"Iquitos",
					L"Cusco", L"PuertoMaldonado", L"Juliaca", L"Arequipa", L"CiudadMex", L"Cancun", L"Habana", L"SantoDomin", L"PuntaCana", L"SanJuan",
					L"CiudadGuate", L"Flores", L"SanPedro", L"Belice", L"Roatan", L"SanSalvador", L"LaCeiba", L"Tegucigalpa", L"Liberia", L"Managua",
					L"SanJose", L"CiudaddePan", L"Caracas", L"Medellin", L"Bogota", L"Cali", L"Quito", L"Guayaquil"
			});
			this->comboBox1->Location = System::Drawing::Point(417, 69);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(170, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(571, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"BUSCAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(560, 153);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 5;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm1::progressBar1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(438, 193);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(346, 384);
			this->textBox3->TabIndex = 4;
			this->textBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(687, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DESTINO";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(478, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ORIGEN";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(398, 587);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(812, 589);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Value = 0;
		timer1->Start();

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ O;
		O = comboBox1->Text;
		if (O == "Lima") asd->setOrigen("Lima");
		if (O == "Piura") asd->setOrigen("Piura");
		if (O == "Chiclayo") asd->setOrigen("Chiclayo");
		if (O == "Trujillo") asd->setOrigen("Trujillo");
		if (O == "Iquitos") asd->setOrigen("Iquitos");
		if (O == "Cusco") asd->setOrigen("Cusco");
		if (O == "PuertoMaldonado") asd->setOrigen("PuertoMaldonado");
		if (O == "Juliaca") asd->setOrigen("Juliaca");
		if (O == "Arequipa") asd->setOrigen("Arequipa");
		if (O == "CiudadMex") asd->setOrigen("CiudadMex");
		if (O == "Cancun") asd->setOrigen("Cancun");
		if (O == "Habana") asd->setOrigen("Habana");
		if (O == "SantoDomin") asd->setOrigen("SantoDomin");
		if (O == "SanJuan") asd->setOrigen("SanJuan");
		if (O == "CiudadGuate") asd->setOrigen("CiudadGuate");
		if (O == "Flores") asd->setOrigen("Flores");
		if (O == "SanPedro") asd->setOrigen("SanPedro");
		if (O == "Belice") asd->setOrigen("Belice");
		if (O == "Roatan") asd->setOrigen("Roatan");
		if (O == "SanSalvador") asd->setOrigen("SanSalvador");
		if (O == "LaCeiba") asd->setOrigen("LaCeiba");
		if (O == "Liberia") asd->setOrigen("Liberia");
		if (O == "Managua") asd->setOrigen("Managua");
		if (O == "SanJose") asd->setOrigen("SanJose");
		if (O == "CiudaddePan") asd->setOrigen("CiudaddePan");
		if (O == "Caracas") asd->setOrigen("Caracas");
		if (O == "Medellin") asd->setOrigen("Medellin");
		if (O == "Bogota") asd->setOrigen("Bogota");
		if (O == "Cali") asd->setOrigen("Cali");
		if (O == "Quito") asd->setOrigen("Quito");
		if (O == "Guayaquil") asd->setOrigen("Guayaquil");
		if (O == "Bogota") asd->setOrigen("Bogota");
		if (O == "Villavicencio") asd->setOrigen("Villavicencio");
		if (O == "Florencia") asd->setOrigen("Florencia");
		if (O == "Neiva") asd->setOrigen("Neiva");
		if (O == "Popayán") asd->setOrigen("Popayán");
		if (O == "Pasto") asd->setOrigen("Pasto");
		if (O == "Tumaco") asd->setOrigen("Tumaco");
		if (O == "Pasto") asd->setOrigen("Pasto");
		if (O == "Cali") asd->setOrigen("Cali");
		if (O == "Ibagué") asd->setOrigen("Ibagué");
		if (O == "Armenia") asd->setOrigen("Armenia");
		if (O == "Pereira") asd->setOrigen("Pereira");
		if (O == "Manizales") asd->setOrigen("Manizales");
		if (O == "Medellin") asd->setOrigen("Medellin");
		if (O == "Monteria") asd->setOrigen("Monteria");
		if (O == "Cartagena") asd->setOrigen("Cartagena");
		if (O == "SanAndres") asd->setOrigen("SanAndres");
		if (O == "Barranquilla") asd->setOrigen("Barranquilla");
		if (O == "SantaMarta") asd->setOrigen("SantaMarta");
		if (O == "Riohacha") asd->setOrigen("Riohacha");
		if (O == "Valledupar") asd->setOrigen("Valledupar");
		if (O == "Cucuta") asd->setOrigen("Cucuta");
		if (O == "Bucaramanga") asd->setOrigen("Bucaramanga");
		if (O == "Barrancamermeja") asd->setOrigen("Barrancamermeja");
		if (O == "Yopal") asd->setOrigen("Yopal");
		if (O == "Leticia") asd->setOrigen("Leticia");
	}


	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ D;
		D = comboBox2->Text;
		if (D == "Lima") asd->setDestino("Lima");
		if (D == "Piura") asd->setDestino("Piura");
		if (D == "Chiclayo") asd->setDestino("Chiclayo");
		if (D == "Trujillo") asd->setDestino("Trujillo");
		if (D == "Iquitos") asd->setDestino("Iquitos");
		if (D == "Cusco") asd->setDestino("Cusco");
		if (D == "PuertoMaldonado") asd->setDestino("PuertoMaldonado");
		if (D == "Juliaca") asd->setDestino("Juliaca");
		if (D == "Arequipa") asd->setDestino("Arequipa");
		if (D == "CiudadMex") asd->setDestino("CiudadMex");
		if (D == "Cancun") asd->setDestino("Cancun");
		if (D == "Habana") asd->setDestino("Habana");
		if (D == "SantoDomin") asd->setDestino("SantoDomin");
		if (D == "SanJuan") asd->setDestino("SanJuan");
		if (D == "CiudadGuate") asd->setDestino("CiudadGuate");
		if (D == "Flores") asd->setDestino("Flores");
		if (D == "SanPedro") asd->setDestino("SanPedro");
		if (D == "Belice") asd->setDestino("Belice");
		if (D == "Roatan") asd->setDestino("Roatan");
		if (D == "SanSalvador") asd->setDestino("SanSalvador");
		if (D == "LaCeiba") asd->setDestino("LaCeiba");
		if (D == "Liberia") asd->setDestino("Liberia");
		if (D == "Managua") asd->setDestino("Managua");
		if (D == "SanJose") asd->setDestino("SanJose");
		if (D == "CiudaddePan") asd->setDestino("CiudaddePan");
		if (D == "Caracas") asd->setDestino("Caracas");
		if (D == "Medellin") asd->setDestino("Medellin");
		if (D == "Bogota") asd->setDestino("Bogota");
		if (D == "Cali") asd->setDestino("Cali");
		if (D == "Quito") asd->setDestino("Quito");
		if (D == "Guayaquil") asd->setDestino("Guayaquil");
		if (D == "Bogota") asd->setOrigen("Bogota");
		if (D == "Villavicencio") asd->setOrigen("Villavicencio");
		if (D == "Florencia") asd->setOrigen("Florencia");
		if (D == "Neiva") asd->setOrigen("Neiva");
		if (D == "Popayán") asd->setOrigen("Popayán");
		if (D == "Pasto") asd->setOrigen("Pasto");
		if (D == "Tumaco") asd->setOrigen("Tumaco");
		if (D == "Pasto") asd->setOrigen("Pasto");
		if (D == "Cali") asd->setOrigen("Cali");
		if (D == "Ibagué") asd->setOrigen("Ibagué");
		if (D == "Armenia") asd->setOrigen("Armenia");
		if (D == "Pereira") asd->setOrigen("Pereira");
		if (D == "Manizales") asd->setOrigen("Manizales");
		if (D == "Medellin") asd->setOrigen("Medellin");
		if (D == "Monteria") asd->setOrigen("Monteria");
		if (D == "Cartagena") asd->setOrigen("Cartagena");
		if (D == "SanAndres") asd->setOrigen("SanAndres");
		if (D == "Barranquilla") asd->setOrigen("Barranquilla");
		if (D == "SantaMarta") asd->setOrigen("SantaMarta");
		if (D == "Riohacha") asd->setOrigen("Riohacha");
		if (D == "Valledupar") asd->setOrigen("Valledupar");
		if (D == "Cucuta") asd->setOrigen("Cucuta");
		if (D == "Bucaramanga") asd->setOrigen("Bucaramanga");
		if (D == "Barrancamermeja") asd->setOrigen("Barrancamermeja");
		if (D == "Yopal") asd->setOrigen("Yopal");
		if (D == "Leticia") asd->setOrigen("Leticia");
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Increment(10);
	if (progressBar1->Value==100)
	{
		timer1->Stop();
		this->textBox3->Text = "";
		vector <string> Viajes;
		int origen, destino;
		int** m1;
		int** m2;
		int** m3;
		int Posicion_MAPA2;
		int Posicion_MAPA3;
		int MatrizCubica[9][9] = { {0} };
		int MatrizMultiplicada[9][9] = { {0} };

		int MatrizMultiplicada_2[25][25] = { {0} };
		int MatrizCubica_2[25][25] = { {0} };

		int MatrizMultiplicada_3[25][25] = { {0} };
		int MatrizCubica_3[25][25] = { {0} };
		
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
		m2[11][0] = 1; m2[11][1] = 1; m2[11][2] = 1; m2[11][3] = 0; m2[11][4] = 0; m2[11][5] = 0; m2[11][6] = 1; m2[11][7] = 0; m2[11][8] = 1; m2[11][9] = 1; m2[11][10] = 1; m2[11][11] = 0; m2[11][12] = 0; m2[11][13] = 0; m2[11][14] = 1; m2[11][15] = 1; m2[11][16] = 1; m2[11][17] = 1; m2[11][18] = 0; m2[11][19] = 1; m2[11][20] = 1; m2[11][21] = 1; m2[11][22] = 1; m2[11][23] = 1; m2[11][24] = 1;
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

		m3 = new int* [25];
		for (int i = 0; i < 25; i++) {
			m3[i] = new int[25];
		}
		m3[0][0] = 0; m3[0][1] = 1; m3[0][2] = 1; m3[0][3] = 1; m3[0][4] = 1; m3[0][5] = 1; m3[0][6] = 0; m3[0][7] = 1; m3[0][8] = 1; m3[0][9] = 1; m3[0][10] = 1; m3[0][11] = 1; m3[0][12] = 1; m3[0][13] = 1; m3[0][14] = 1; m3[0][15] = 1; m3[0][16] = 1; m3[0][17] = 1;	m3[0][18] = 1; m3[0][19] = 1; m3[0][20] = 1; m3[0][21] = 1; m3[0][22] = 1; m3[0][23] = 1; m3[0][24] = 1;
		m3[1][0] = 1; m3[1][1] = 0; m3[1][2] = 0; m3[1][3] = 0; m3[1][4] = 0; m3[1][5] = 0; m3[1][6] = 0; m3[1][7] = 0; m3[1][8] = 0; m3[1][9] = 0; m3[1][10] = 0; m3[1][11] = 0; m3[1][12] = 0; m3[1][13] = 0; m3[1][14] = 0; m3[1][15] = 0; m3[1][16] = 0; m3[1][17] = 0;	m3[1][18] = 0; m3[1][19] = 0; m3[1][20] = 0; m3[1][21] = 0; m3[1][22] = 0; m3[1][23] = 0; m3[1][24] = 0;
		m3[2][0] = 1; m3[2][1] = 0; m3[2][2] = 0; m3[2][3] = 0;	m3[2][4] = 0; m3[2][5] = 0; m3[2][6] = 0; m3[2][7] = 0; m3[2][8] = 0; m3[2][9] = 0; m3[2][10] = 0; m3[2][11] = 0; m3[2][12] = 0; m3[2][13] = 0; m3[2][14] = 0; m3[2][15] = 0; m3[2][16] = 0; m3[2][17] = 0;	m3[2][18] = 0; m3[2][19] = 0; m3[2][20] = 0; m3[2][21] = 0; m3[2][22] = 0; m3[2][23] = 0; m3[2][24] = 0;
		m3[3][0] = 1; m3[3][1] = 0; m3[3][2] = 0; m3[3][3] = 0;	m3[3][4] = 0; m3[3][5] = 0; m3[3][6] = 0; m3[3][7] = 0; m3[3][8] = 0; m3[3][9] = 0; m3[3][10] = 0; m3[3][11] = 0; m3[3][12] = 0; m3[3][13] = 0; m3[3][14] = 0; m3[3][15] = 0; m3[3][16] = 0; m3[3][17] = 0;	m3[3][18] = 0; m3[3][19] = 0; m3[3][20] = 0; m3[3][21] = 0; m3[3][22] = 0; m3[3][23] = 0; m3[3][24] = 0;
		m3[4][0] = 1; m3[4][1] = 0; m3[4][2] = 0; m3[4][3] = 0; m3[4][4] = 0; m3[4][5] = 0; m3[4][6] = 0; m3[4][7] = 0; m3[4][8] = 0; m3[4][9] = 0; m3[4][10] = 0; m3[4][11] = 0; m3[4][12] = 0; m3[4][13] = 0; m3[4][14] = 0; m3[4][15] = 0; m3[4][16] = 0; m3[4][17] = 0;	m3[4][18] = 0; m3[4][19] = 0; m3[4][20] = 0; m3[4][21] = 0; m3[4][22] = 0; m3[4][23] = 0; m3[4][24] = 0;
		m3[5][0] = 1; m3[5][1] = 0; m3[5][2] = 0; m3[5][3] = 0; m3[5][4] = 0; m3[5][5] = 0; m3[5][6] = 0; m3[5][7] = 1; m3[5][8] = 0; m3[5][9] = 0; m3[5][10] = 0; m3[5][11] = 0; m3[5][12] = 0; m3[5][13] = 0; m3[5][14] = 0; m3[5][15] = 0; m3[5][16] = 0; m3[5][17] = 0;	m3[5][18] = 0; m3[5][19] = 0; m3[5][20] = 0; m3[5][21] = 0; m3[5][22] = 0; m3[5][23] = 0; m3[5][24] = 0;
		m3[6][0] = 0; m3[6][1] = 0; m3[6][2] = 0; m3[6][3] = 0;	m3[6][4] = 0; m3[6][5] = 0; m3[6][6] = 0; m3[6][7] = 1; m3[6][8] = 0; m3[6][9] = 0; m3[6][10] = 0; m3[6][11] = 0; m3[6][12] = 0; m3[6][13] = 0; m3[6][14] = 0; m3[6][15] = 0; m3[6][16] = 0; m3[6][17] = 0;	m3[6][18] = 0; m3[6][19] = 0; m3[6][20] = 0; m3[6][21] = 0; m3[6][22] = 0; m3[6][23] = 0; m3[6][24] = 0;
		m3[7][0] = 1; m3[7][1] = 0; m3[7][2] = 0; m3[7][3] = 0;	m3[7][4] = 0; m3[7][5] = 1; m3[7][6] = 1; m3[7][7] = 0; m3[7][8] = 0; m3[7][9] = 0; m3[7][10] = 0; m3[7][11] = 0; m3[7][12] = 1; m3[7][13] = 0; m3[7][14] = 1; m3[7][15] = 0; m3[7][16] = 1; m3[7][17] = 0;	m3[7][18] = 0; m3[7][19] = 0; m3[7][20] = 0; m3[7][21] = 0; m3[7][22] = 0; m3[7][23] = 0; m3[7][24] = 0;
		m3[8][0] = 1; m3[8][1] = 0; m3[8][2] = 0; m3[8][3] = 0;	m3[8][4] = 0; m3[8][5] = 0; m3[8][6] = 0; m3[8][7] = 0; m3[8][8] = 0; m3[8][9] = 0; m3[8][10] = 0; m3[8][11] = 0; m3[8][12] = 0; m3[8][13] = 0; m3[8][14] = 0; m3[8][15] = 0; m3[8][16] = 0; m3[8][17] = 0;	m3[8][18] = 0; m3[8][19] = 0; m3[8][20] = 0; m3[8][21] = 0; m3[8][22] = 0; m3[8][23] = 0; m3[8][24] = 0;
		m3[9][0] = 1; m3[9][1] = 0; m3[9][2] = 0; m3[9][3] = 0; m3[9][4] = 0; m3[9][5] = 0; m3[9][6] = 0; m3[9][7] = 0; m3[9][8] = 0; m3[9][9] = 0; m3[9][10] = 0; m3[9][11] = 0; m3[9][12] = 0; m3[9][13] = 0; m3[9][14] = 0; m3[9][15] = 0; m3[9][16] = 0; m3[9][17] = 0;	m3[9][18] = 0; m3[9][19] = 0; m3[9][20] = 0; m3[9][21] = 0; m3[9][22] = 0; m3[9][23] = 0; m3[9][24] = 0;
		m3[10][0] = 1; m3[10][1] = 0; m3[10][2] = 0; m3[10][3] = 0; m3[10][4] = 0; m3[10][5] = 0; m3[10][6] = 0; m3[10][7] = 0; m3[10][8] = 0; m3[10][9] = 0; m3[10][10] = 0; m3[10][11] = 0; m3[10][12] = 0; m3[10][13] = 0; m3[10][14] = 0; m3[10][15] = 0; m3[10][16] = 0; m3[10][17] = 0; m3[10][18] = 0; m3[10][19] = 0; m3[10][20] = 0; m3[10][21] = 0; m3[10][22] = 0; m3[10][23] = 0; m3[10][24] = 0;
		m3[11][0] = 1; m3[11][1] = 0; m3[11][2] = 0; m3[11][3] = 0; m3[11][4] = 0; m3[11][5] = 0; m3[11][6] = 0; m3[11][7] = 0; m3[11][8] = 0; m3[11][9] = 0; m3[11][10] = 0; m3[11][11] = 0; m3[11][12] = 0; m3[11][13] = 0; m3[11][14] = 0; m3[11][15] = 0; m3[11][16] = 0; m3[11][17] = 0; m3[11][18] = 0; m3[11][19] = 0; m3[11][20] = 0; m3[11][21] = 0; m3[11][22] = 0; m3[11][23] = 0; m3[11][24] = 0;
		m3[12][0] = 1; m3[12][1] = 0; m3[12][2] = 0; m3[12][3] = 0; m3[12][4] = 0; m3[12][5] = 0; m3[12][6] = 0; m3[12][7] = 1; m3[12][8] = 0; m3[12][9] = 0; m3[12][10] = 0; m3[12][11] = 0; m3[12][12] = 0; m3[12][13] = 0; m3[12][14] = 1; m3[12][15] = 0; m3[12][16] = 1; m3[12][17] = 1; m3[12][18] = 0; m3[12][19] = 0; m3[12][20] = 1; m3[12][21] = 1; m3[12][22] = 0; m3[12][23] = 0; m3[12][24] = 0;
		m3[13][0] = 1; m3[13][1] = 0; m3[13][2] = 0; m3[13][3] = 0; m3[13][4] = 0; m3[13][5] = 0; m3[13][6] = 0; m3[13][7] = 0; m3[13][8] = 0; m3[13][9] = 0; m3[13][10] = 0; m3[13][11] = 0; m3[13][12] = 0; m3[13][13] = 0; m3[13][14] = 0; m3[13][15] = 0; m3[13][16] = 0; m3[13][17] = 0; m3[13][18] = 0; m3[13][19] = 0; m3[13][20] = 0; m3[13][21] = 0; m3[13][22] = 0; m3[13][23] = 0; m3[13][24] = 0;
		m3[14][0] = 1; m3[14][1] = 0; m3[14][2] = 0; m3[14][3] = 0; m3[14][4] = 0; m3[14][5] = 0; m3[14][6] = 0; m3[14][7] = 1; m3[14][8] = 0; m3[14][9] = 0; m3[14][10] = 0; m3[14][11] = 0; m3[14][12] = 1; m3[14][13] = 0; m3[14][14] = 0; m3[14][15] = 0; m3[14][16] = 0; m3[14][17] = 0; m3[14][18] = 0; m3[14][19] = 0; m3[14][20] = 0; m3[14][21] = 0; m3[14][22] = 0; m3[14][23] = 0; m3[14][24] = 0;
		m3[15][0] = 1; m3[15][1] = 0; m3[15][2] = 0; m3[15][3] = 0; m3[15][4] = 0; m3[15][5] = 0; m3[15][6] = 0; m3[15][7] = 0; m3[15][8] = 0; m3[15][9] = 0; m3[15][10] = 0; m3[15][11] = 0; m3[15][12] = 0; m3[15][13] = 0; m3[15][14] = 0; m3[15][15] = 0; m3[15][16] = 0; m3[15][17] = 0; m3[15][18] = 0; m3[15][19] = 0; m3[15][20] = 0; m3[15][21] = 0; m3[15][22] = 0; m3[15][23] = 0; m3[15][24] = 0;
		m3[16][0] = 1; m3[16][1] = 0; m3[16][2] = 0; m3[16][3] = 0; m3[16][4] = 0; m3[16][5] = 0; m3[16][6] = 0; m3[16][7] = 1; m3[16][8] = 0; m3[16][9] = 0; m3[16][10] = 0; m3[16][11] = 0; m3[16][12] = 1; m3[16][13] = 0; m3[16][14] = 0; m3[16][15] = 0; m3[16][16] = 0; m3[16][17] = 0; m3[16][18] = 0; m3[16][19] = 0; m3[16][20] = 0; m3[16][21] = 0; m3[16][22] = 0; m3[16][23] = 0; m3[16][24] = 0;
		m3[17][0] = 1; m3[17][1] = 0; m3[17][2] = 0; m3[17][3] = 0; m3[17][4] = 0; m3[17][5] = 0; m3[17][6] = 0; m3[17][7] = 0; m3[17][8] = 0; m3[17][9] = 0; m3[17][10] = 0; m3[17][11] = 0; m3[17][12] = 1; m3[17][13] = 0; m3[17][14] = 0; m3[17][15] = 0; m3[17][16] = 0; m3[17][17] = 0; m3[17][18] = 0; m3[17][19] = 0; m3[17][20] = 0; m3[17][21] = 0; m3[17][22] = 0; m3[17][23] = 0; m3[17][24] = 0;
		m3[18][0] = 1; m3[18][1] = 0; m3[18][2] = 0; m3[18][3] = 0; m3[18][4] = 0; m3[18][5] = 0; m3[18][6] = 0; m3[18][7] = 0; m3[18][8] = 0; m3[18][9] = 0; m3[18][10] = 0; m3[18][11] = 0; m3[18][12] = 0; m3[18][13] = 0; m3[18][14] = 0; m3[18][15] = 0; m3[18][16] = 0; m3[18][17] = 0; m3[18][18] = 0; m3[18][19] = 0; m3[18][20] = 0; m3[18][21] = 0; m3[18][22] = 0; m3[18][23] = 0; m3[18][24] = 0;
		m3[19][0] = 1; m3[19][1] = 0; m3[19][2] = 0; m3[19][3] = 0; m3[19][4] = 0; m3[19][5] = 0; m3[19][6] = 0; m3[19][7] = 0; m3[19][8] = 0; m3[19][9] = 0; m3[19][10] = 0; m3[19][11] = 0; m3[19][12] = 0; m3[19][13] = 0; m3[19][14] = 0; m3[19][15] = 0; m3[19][16] = 0; m3[19][17] = 0; m3[19][18] = 0; m3[19][19] = 0; m3[19][20] = 0; m3[19][21] = 0; m3[19][22] = 0; m3[19][23] = 0; m3[19][24] = 0;
		m3[20][0] = 1; m3[20][1] = 0; m3[20][2] = 0; m3[20][3] = 0; m3[20][4] = 0; m3[20][5] = 0; m3[20][6] = 0; m3[20][7] = 0; m3[20][8] = 0; m3[20][9] = 0; m3[20][10] = 0; m3[20][11] = 0; m3[20][12] = 1; m3[20][13] = 0; m3[20][14] = 0; m3[20][15] = 0; m3[20][16] = 0; m3[20][17] = 0; m3[20][18] = 0; m3[20][19] = 0; m3[20][20] = 0; m3[20][21] = 0; m3[20][22] = 0; m3[20][23] = 0; m3[20][24] = 0;
		m3[21][0] = 1; m3[21][1] = 0; m3[21][2] = 0; m3[21][3] = 0; m3[21][4] = 0; m3[21][5] = 0; m3[21][6] = 0; m3[21][7] = 0; m3[21][8] = 0; m3[21][9] = 0; m3[21][10] = 0; m3[21][11] = 0; m3[21][12] = 1; m3[21][13] = 0; m3[21][14] = 0; m3[21][15] = 0; m3[21][16] = 0; m3[21][17] = 0; m3[21][18] = 0; m3[21][19] = 0; m3[21][20] = 0; m3[21][21] = 0; m3[21][22] = 0; m3[21][23] = 0; m3[21][24] = 0;
		m3[22][0] = 1; m3[22][1] = 0; m3[22][2] = 0; m3[22][3] = 0; m3[22][4] = 0; m3[22][5] = 0; m3[22][6] = 0; m3[22][7] = 0; m3[22][8] = 0; m3[22][9] = 0; m3[22][10] = 0; m3[22][11] = 0; m3[22][12] = 0; m3[22][13] = 0; m3[22][14] = 0; m3[22][15] = 0; m3[22][16] = 0; m3[22][17] = 0; m3[22][18] = 0; m3[22][19] = 0; m3[22][20] = 0; m3[22][21] = 0; m3[22][22] = 0; m3[22][23] = 0; m3[22][24] = 0;
		m3[23][0] = 1; m3[23][1] = 0; m3[23][2] = 0; m3[23][3] = 0; m3[23][4] = 0; m3[23][5] = 0; m3[23][6] = 0; m3[23][7] = 0; m3[23][8] = 0; m3[23][9] = 0; m3[23][10] = 0; m3[23][11] = 0; m3[23][12] = 0; m3[23][13] = 0; m3[23][14] = 0; m3[23][15] = 0; m3[23][16] = 0; m3[23][17] = 0; m3[23][18] = 0; m3[23][19] = 0; m3[23][20] = 0; m3[23][21] = 0; m3[23][22] = 0; m3[23][23] = 0; m3[23][24] = 0;
		m3[24][0] = 1; m3[24][1] = 0; m3[24][2] = 0; m3[24][3] = 0; m3[24][4] = 0; m3[24][5] = 0; m3[24][6] = 0; m3[24][7] = 0; m3[24][8] = 0; m3[24][9] = 0; m3[24][10] = 0; m3[24][11] = 0; m3[24][12] = 0; m3[24][13] = 0; m3[24][14] = 0; m3[24][15] = 0; m3[24][16] = 0; m3[24][17] = 0; m3[24][18] = 0; m3[24][19] = 0; m3[24][20] = 0; m3[24][21] = 0; m3[24][22] = 0; m3[24][23] = 0; m3[24][24] = 0;

		/*cout << "Ciudades a donde viajar: Lima, Piura, Chiclayo, Trujillo, Iquitos, Cusco, PuertoMaldonado, Juliaca, Arequipa" << endl << endl;
		cout << "Ciudades a donde viajar: CiudadMex, Cancun, Habana, SantoDomin, PuntaCana, SanJuan, CiudadGuate, Flores" << endl;
		cout << "			SanPedro, Belice, Roatan, SanSalvador, LaCeiba, Tegucigalpa, Liberia, Managua" << endl;
		cout << "			SanJose, CiudaddePan, Caracas, Medellin, Bogota, Cali, Quito, Guayaquil, Lima" << endl << endl;*/

		bool Peru1 = false;
		bool Peru2 = false;
		bool Internacional1 = false;
		bool Internacional2 = false;
		bool Colombia1 = false;
		bool Colombia2 = false;
		int Case = 0;
		//Creamos las variables para las dos escalas
		int esc1, esc2;
		esc1 = 0;
		esc2 = 0;
		for (int i = 0; i < asd->getA().size(); i++) {
			if (asd->getItemA(i) == asd->getOrigen()) {
				origen = i;
				Peru1 = true;
			}
			if (asd->getItemA(i) == asd->getDestino()) {
				destino = i;
				Peru2 = true;
			}
		}
		for (int i = 0; i < asd->getB().size(); i++) {
			if (Peru1 && Peru2) {
			}
			else if (asd->getItemB(i) == asd->getOrigen()) {
				origen = i;
				Internacional1 = true;
			}
			if (Peru1 && Peru2) {
			}
			else if (asd->getItemB(i) == asd->getDestino()) {
				destino = i;
				Internacional2 = true;
			}
		}
		for (int i = 0; i < asd->getC().size(); i++) {
			if ((Internacional1 && Internacional2) || (Peru2 && Internacional1) || (Peru1 && Internacional2)) {
			}
			else if (asd->getItemC(i) == asd->getOrigen()) {
				origen = i;
				Colombia1 = true;
			}
			if ((Internacional1 && Internacional2) || (Peru2 && Internacional1) || (Peru1 && Internacional2)) {
			}
			else if (asd->getItemC(i) == asd->getDestino()) {
				destino = i;
				Colombia2 = true;
			}
		}
		//PARA LOS CASOS ESPECIALES
		if (asd->getItemB(origen) == "Medellin" && asd->getItemB(destino) == "Medellin") {
			Posicion_MAPA3 = 12;
		}
		else if (asd->getItemB(origen) == "Cali" && asd->getItemB(destino) == "Cali") {
			Posicion_MAPA3 = 7;
		}
		else if (asd->getItemB(origen) == "Bogota" && asd->getItemB(destino) == "Bogota") {
			Posicion_MAPA3 = 0;
		}
		if (Peru1 && Peru2) { //SOLO PERU
			//cout << "Viaje de " << A[origen] << " a " << A[destino] << endl;
			//cout << "Case1" << endl;
			Case = 1;
		}
		else if (Internacional1 && Internacional2) { //SOLO MAPA 2
			/*	cout << "Viaje de " << B[origen] << " a " << B[destino] << endl;
				cout << "Case2" << endl;*/
			Case = 2;
		}
		else if (Peru1 && Internacional2) { //PERU A MAPA2
			/*cout << "Viaje de " << A[origen] << " a " << B[destino] << endl;
			cout << "Case3" << endl;*/
			Case = 3;
		}
		else if (Internacional1 && Peru2) { //MAPA2 A PERU
			/*cout << "Viaje de " << B[origen] << " a " << A[destino] << endl;
			cout << "Case4" << endl;*/
			Case = 4;
		}
		else if (Colombia1 && Colombia2) { //SOLO MAPA COLOMBIA
			cout << "Viaje de " << asd->getItemC(origen) << " a " << asd->getItemC(destino) << endl;
			cout << "Case5" << endl;
			Case = 5;
		}
		else if (Internacional1 && Colombia2) { //MAPA2 A COLOMBIA
			cout << "Viaje de " << asd->getItemB(origen) << " a " << asd->getItemC(destino) << endl;
			cout << "Case8" << endl;
			Case = 6;
		}
		else if (Colombia1 && Internacional2) { //COLOMBIA A MAPA2
			cout << "Viaje de " << asd->getItemC(origen) << " a " << asd->getItemB(destino) << endl;
			cout << "Case9" << endl;
			Case = 7;
		}
		//Creamos la matriz A^2
		for (int p = 0; p < 9; p++) {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (m1[p][j] == 1 && m1[j][i] == 1)
						MatrizMultiplicada[p][i] = 1;
				}
			}
		}
		//Creamos la matriz A^3
		for (int p = 0; p < 9; p++) {
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (MatrizMultiplicada[p][j] == 1 && m1[j][i] == 1)
						MatrizCubica[p][i] = 1;
				}
			}
		}
		//Creamos la matriz B^2
		for (int p = 0; p < 25; p++) {
			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 25; j++) {
					if (m2[p][j] == 1 && m2[j][i] == 1)
						MatrizMultiplicada_2[p][i] = 1;
				}
			}
		}
		//Creamos la matriz B^3
		for (int p = 0; p < 25; p++) {
			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 25; j++) {
					if (MatrizMultiplicada_2[p][j] == 1 && m2[j][i] == 1) {
						MatrizCubica_2[p][i] = 1;
					}
				}
			}
		}
		//Creamos la matriz C^2
		for (int p = 0; p < 25; p++) {
			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 25; j++) {
					if (m3[p][j] == 1 && m3[j][i] == 1)
						MatrizMultiplicada_3[p][i] = 1;
				}
			}
		}
		//Creamos la matriz C^3
		for (int p = 0; p < 25; p++) {
			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 25; j++) {
					if (MatrizMultiplicada_3[p][j] == 1 && m3[j][i] == 1)
						MatrizCubica_3[p][i] = 1;
				}
			}
		}
		switch (Case)
		{
			case 1:
			if (m1[origen][destino] == 1) {
				this->textBox3->Text += "Viaje directo de " + gcnew String(asd->getItemA(origen).c_str()) + " hasta " + gcnew String(asd->getItemA(destino).c_str()) + "\r\n";
			}
			else this->textBox3->Text += "\n\nNo tiene viaje directo! " + "\r\n";
			//Verificamos Si tiene viaje con una escala
			for (int i = 0; i < 9; i++) {
				if (m1[origen][i] == 1 && m1[i][destino] == 1)
					this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemA(origen).c_str()) + " hasta " + gcnew String(asd->getItemA(destino).c_str()) + " con escala en " + gcnew String(asd->getItemA(i).c_str()) + "\r\n";
			}
			//Caso especial para el segundo mapa
			if (asd->getItemA(origen) == "Lima" && asd->getItemA(destino) == "Lima") {
				Posicion_MAPA2 = 24;
				for (int i = 0; i < asd->getB().size(); i++) {
					if (m2[Posicion_MAPA2][i] == 1 && m2[i][Posicion_MAPA2] == 1) {
						this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(Posicion_MAPA2).c_str()) + " hasta " + gcnew String(asd->getItemB(Posicion_MAPA2).c_str()) + " con escala en " + gcnew String(asd->getItemB(i).c_str()) + "\r\n";
					}
				}
				if (MatrizCubica_2[Posicion_MAPA2][Posicion_MAPA2] == 1) {
					for (int i = 0; i < asd->getB().size(); i++) {
						if (MatrizMultiplicada_2[Posicion_MAPA2][i] == 1 && m2[i][Posicion_MAPA2] == 1) {
							esc2 = i;
							for (int j = 0; j < asd->getB().size(); j++) {
								if (m2[Posicion_MAPA2][j] == 1 && m2[j][esc2] == 1) {
									esc1 = j;
								}
							}
							this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(Posicion_MAPA2).c_str()) + " hasta " + gcnew String(asd->getItemB(Posicion_MAPA2).c_str()) + " tiene dos escalas, el primero en " + gcnew String(asd->getItemB(esc1).c_str()) + " y el segundo vuelo en " + gcnew String(asd->getItemB(esc2).c_str()) + "\r\n";
						}
					}
				}
			}


			//Verificamos si existe dos escalas y sacamos el valor de la segunda escala
			if (MatrizCubica[origen][destino] == 1) {
				for (int i = 0; i < 9; i++) {
					if (MatrizMultiplicada[origen][i] == 1 && m1[i][destino] == 1) {
						esc2 = i;
						for (int j = 0; j < 9; j++) {
							if (m1[origen][j] == 1 && m1[j][esc2] == 1) {
								esc1 = j;
							}
						}
						this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemA(origen).c_str()) + " hasta " + gcnew String(asd->getItemA(destino).c_str()) + " tiene dos escalas, el primero en " + gcnew String(asd->getItemA(esc1).c_str()) + " y el segundo vuelo en " + gcnew String(asd->getItemA(esc2).c_str()) + "\r\n";
					}
				}

			}
			break;
			case 2:
			//Verificamos si tiene viaje directo o no (m2)
			if (m2[origen][destino] == 1) {
				this->textBox3->Text += "Viaje directo de " + gcnew String(asd->getItemB(origen).c_str()) + " hasta " + gcnew String(asd->getItemB(destino).c_str()) + "\r\n";
			}

			else this->textBox3->Text += "No tiene viaje directo! " + "\r\n";

			//Verificamos Si tiene viaje con una escala (m2)
			for (int i = 0; i < 25; i++) {
				if (m2[origen][i] == 1 && m2[i][destino] == 1)

					this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(origen).c_str()) + " hasta " + gcnew String(asd->getItemB(destino).c_str()) + " con escala en " + gcnew String(asd->getItemB(i).c_str()) + "\r\n";
			}
			//Caso especial para el tercer mapa
			if ((asd->getItemB(origen) == "Medellin" && asd->getItemB(destino) == "Medellin") || (asd->getItemB(origen) == "Cali" && asd->getItemB(destino) == "Cali") || (asd->getItemB(origen) == "Bogota" && asd->getItemB(destino) == "Bogota")) {
				for (int i = 0; i < asd->getC().size(); i++) {
					if (m3[Posicion_MAPA3][i] == 1 && m3[i][Posicion_MAPA3] == 1) {
						cout << "Viaje de " + asd->getItemC(Posicion_MAPA3) + " hasta " + asd->getItemC(Posicion_MAPA3) + " con escala en " + asd->getItemC(i) << endl;
					}
				}
				if (MatrizCubica_3[Posicion_MAPA3][Posicion_MAPA3] == 1) {
					for (int i = 0; i < asd->getC().size(); i++) {
						if (MatrizMultiplicada_3[Posicion_MAPA3][i] == 1 && m3[i][Posicion_MAPA3] == 1) {
							esc2 = i;
							for (int j = 0; j < asd->getC().size(); j++) {
								if (m3[Posicion_MAPA3][j] == 1 && m3[j][esc2] == 1) {
									esc1 = j;
									cout << "Viaje de " + asd->getItemC(Posicion_MAPA3) + " hasta " + asd->getItemC(Posicion_MAPA3) + " tiene dos escalas, el primero en " + asd->getItemC(esc1) + " y el segundo vuelo en " + asd->getItemC(esc2) << endl;
								}
							}
						}
					}
				}
			}
			//Verificamos si existe dos escalas y sacamos el valor de la segunda escala
			if (MatrizCubica_2[origen][destino] == 1) {
				for (int i = 0; i < 25; i++) {
					if (MatrizMultiplicada_2[origen][i] == 1 && m2[i][destino] == 1) {
						esc2 = i;
						for (int j = 0; j < 25; j++) {
							if (m2[origen][j] == 1 && m2[j][esc2] == 1) {
								esc1 = j;
							}
						}
						this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(origen).c_str()) + " hasta " + gcnew String(asd->getItemB(destino).c_str()) + " tiene dos escalas, el primero en " + gcnew String(asd->getItemB(esc1).c_str()) + " y el segundo vuelo en " + gcnew String(asd->getItemB(esc2).c_str()) + "\r\n";
					}
				}

			}
			break;
			case 3:
			if (m1[origen][0] == 1 && m2[24][destino] == 1) {
				this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemA(origen).c_str()) + " hasta " + gcnew String(asd->getItemB(destino).c_str()) + " con escala en Lima" + "\r\n";
			}
			for (int i = 0; i < asd->getA().size(); i++) {
				if (m1[origen][i] == 1 && m1[i][0] == 1) {
					if (m2[24][destino] == 1)
						this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemA(origen).c_str()) + " hasta " + gcnew String(asd->getItemB(destino).c_str()) + " tiene dos escalas el primero en " + gcnew String(asd->getItemA(i).c_str()) + " y el segundo vuelo en Lima" + "\r\n";
				}
			}
			if (MatrizMultiplicada[origen][0] != 1 || m1[origen][0] == 1) {
				for (int i = 0; i < asd->getB().size(); i++) {
					if (m2[24][i] == 1 && m2[i][destino]) {
						this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemA(origen).c_str()) + " hasta " + gcnew String(asd->getItemB(destino).c_str()) + " tiene dos escalas el primero en " + gcnew String(asd->getItemA(0).c_str()) + " el segundo vuelo en " + gcnew String(asd->getItemB(i).c_str()) + "\r\n";
					}
				}
			}
			break;
			case 4: //MAPA2 A PERU
			for (int i = 0; i < asd->getA().size(); i++) {
				for (int j = 0; j < asd->getB().size(); j++) {
					if (asd->getItemA(i) == asd->getItemB(j)) {
						if (m2[origen][j] == 1 && m1[i][destino] == 1) {
							this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(origen).c_str()) + " hasta " + gcnew String(asd->getItemA(destino).c_str()) + " con escala en " + gcnew String(asd->getItemA(i).c_str()) + "\r\n";
						}
						for (int p = 0; p < asd->getB().size(); p++) {
							if (m2[origen][p] == 1 && m2[p][j] == 1) {
								if (m1[i][destino] == 1)
									this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(origen).c_str()) + " hasta " + gcnew String(asd->getItemA(destino).c_str()) + " tiene dos escalas el primero en " + gcnew String(asd->getItemB(p).c_str()) + " y el segundo vuelo en " + gcnew String(asd->getItemB(j).c_str()) + "\r\n";
							}
						}
						if (m2[origen][j] == 1) {
							for (int p = 0; p < asd->getA().size(); p++) {
								if (m1[i][p] == 1 && m1[p][destino]) {
									this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(origen).c_str()) + " hasta " + gcnew String(asd->getItemA(destino).c_str()) + " tiene dos escalas el primero en " + gcnew String(asd->getItemB(j).c_str()) + " el segundo vuelo en " + gcnew String(asd->getItemA(p).c_str()) + "\r\n";
								}
							}
						}
					}
				}
			}
			break;
			case 5: //SOLO MAPA3
			//Verificamos si tiene viaje directo o no (m3)
			if (m3[origen][destino] == 1) {
				this->textBox3->Text += "Viaje directo de " + gcnew String(asd->getItemC(origen).c_str()) + " hasta " + gcnew String(asd->getItemC(destino).c_str()) + "\r\n";
			}
			else this->textBox3->Text += "No tiene viaje directo! " + "\r\n";

			//Verificamos Si tiene viaje con una escala (m2)
			for (int i = 0; i < asd->getC().size(); i++) {
				if (m3[origen][i] == 1 && m3[i][destino] == 1)
					this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemC(origen).c_str()) + " hasta " + gcnew String(asd->getItemC(destino).c_str()) + " con escala en " + gcnew String(asd->getItemC(i).c_str()) + "\r\n";
			}

			//Verificamos si existe dos escalas y sacamos el valor de la segunda escala
			if (MatrizCubica_3[origen][destino] == 1) {
				for (int i = 0; i < asd->getC().size(); i++) {
					if (MatrizMultiplicada_3[origen][i] == 1 && m3[i][destino] == 1) {
						esc2 = i;
						for (int j = 0; j < asd->getC().size(); j++) {
							if (m3[origen][j] == 1 && m3[j][esc2] == 1) {
								esc1 = j;
								this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemC(origen).c_str()) + " hasta " + gcnew String(asd->getItemC(destino).c_str()) + " tiene dos escalas, el primero en " + gcnew String(asd->getItemC(esc1).c_str()) + " y el segundo vuelo en " + gcnew String(asd->getItemC(esc2).c_str()) + "\r\n";
							}
						}
					}
				}
			}
			break;
			case 6: //MAPA2 A MAPA3
			for (int i = 0; i < asd->getB().size(); i++) {
				for (int j = 0; j < asd->getC().size(); j++) {
					if (asd->getItemB(i) == asd->getItemC(j)) {
						if (m2[origen][i] == 1 && m3[j][destino] == 1) {
							this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(origen).c_str()) + " hasta " + gcnew String(asd->getItemC(destino).c_str()) + " con escala en " + gcnew String(asd->getItemB(i).c_str()) + "\r\n";
						}
						for (int p = 0; p < asd->getB().size(); p++) {
							if (m2[origen][p] == 1 && m2[p][i] == 1) {
								if (m3[j][destino] == 1)
									this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(origen).c_str()) + " hasta " + gcnew String(asd->getItemC(destino).c_str()) + " tiene dos escalas el primero en " + gcnew String(asd->getItemB(p).c_str()) + " y el segundo vuelo en " + gcnew String(asd->getItemB(i).c_str()) + "\r\n";
							}
						}
						if (m2[origen][i] == 1) {
							for (int p = 0; p < asd->getC().size(); p++) {
								if (m3[j][p] == 1 && m3[p][destino]) {
									this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemB(origen).c_str()) + " hasta " + gcnew String(asd->getItemC(destino).c_str()) + " tiene dos escalas el primero en " + gcnew String(asd->getItemB(i).c_str()) + " el segundo vuelo en " + gcnew String(asd->getItemC(p).c_str()) + "\r\n";
								}
							}
						}
					}
				}
			}
			break;
			case 7://MAPA3 A MAPA2
			for (int i = 0; i < asd->getB().size(); i++) {
				for (int j = 0; j < asd->getC().size(); j++) {
					if (asd->getItemB(i) == asd->getItemC(j)) {
						if (m3[origen][j] == 1 && m2[i][destino] == 1) {
							this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemC(origen).c_str()) + " hasta " + gcnew String(asd->getItemB(destino).c_str()) + " con escala en " + gcnew String(asd->getItemB(i).c_str()) + "\r\n";
						}
						for (int p = 0; p < asd->getC().size(); p++) {
							if (m3[origen][p] == 1 && m3[p][j] == 1) {
								if (m2[i][destino] == 1)
									this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemC(origen).c_str()) + " hasta " + gcnew String(asd->getItemB(destino).c_str()) + " tiene dos escalas el primero en " + gcnew String(asd->getItemC(p).c_str()) + " y el segundo vuelo en " + gcnew String(asd->getItemC(j).c_str()) + "\r\n";
							}
							
						}
						if (m3[origen][j] == 1) {
							for (int p = 0; p < asd->getB().size(); p++) {
								if (m2[i][p] == 1 && m2[p][destino]) {
									this->textBox3->Text += "Viaje de " + gcnew String(asd->getItemC(origen).c_str()) + " hasta " + gcnew String(asd->getItemB(destino).c_str()) + " tiene dos escalas el primero en " + gcnew String(asd->getItemC(j).c_str()) + " el segundo vuelo en " + gcnew String(asd->getItemB(p).c_str()) + "\r\n";
								}
							}
						}
					}
				}
			}
			break;
		}
	}
};
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}


