#pragma once
#include <iostream>
#include <string>
#include <vector> 
using namespace std;
vector <string> A = { "Lima","Piura","Chiclayo","Trujillo","Iquitos", "Cusco","PuertoMaldonado", "Juliaca", "Arequipa" };



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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
	vector <string> A = { "Lima","Piura","Chiclayo","Trujillo","Iquitos", "Cusco","PuertoMaldonado", "Juliaca", "Arequipa" };
	vector <string> Viajes;
	string Origen, Destino;
	int origen, destino;
	int** m1;
	int MatrizCubica[9][9] = { {0,0,0} ,{0,0,0}, {0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0} };
	int MatrizMultiplicada[9][9] = { {0,0,0} ,{0,0,0}, {0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0} };

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
	//Si existe las 2 escalas queremos encontrar la primera escala
	if (Tiene2Escalas) {
		for (int i = 0; i < 9; i++) {
			if (m1[origen][i] == 1 && m1[i][esc2] == 1) {
				esc1 = i;
			}
		}
		cout << "Viaje de " + A[origen] + " hasta " + A[destino] + " tiene dos escalas, el primero en " + A[esc1] + " y el segundo vuelo en " + A[esc2] << endl;
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
