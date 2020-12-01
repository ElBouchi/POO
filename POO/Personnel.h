#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Personnel::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Adresse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Date d\'embauche";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 323);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Supérieur hiérarchique";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 357);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Nom du Supérieur";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(123, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(123, 164);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(123, 263);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(123, 215);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(177, 354);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 10;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(177, 321);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(44, 17);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"OUI";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Personnel::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(228, 321);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(49, 17);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"NON";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Personnel::radioButton2_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(177, 390);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 393);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Prénom du Supérieur";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(411, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(330, 26);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Afficher la liste du personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Personnel::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(337, 54);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(471, 386);
			this->dataGridView1->TabIndex = 20;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(337, 54);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(471, 386);
			this->dataGridView2->TabIndex = 21;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(55, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Personnel::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(136, 482);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 39);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Ajouter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Personnel::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(298, 482);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 39);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Personnel::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(454, 482);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 39);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Supprimer";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Personnel::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(617, 482);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(111, 39);
			this->button6->TabIndex = 26;
			this->button6->Text = L"Afficher";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Personnel::button6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 71);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 13);
			this->label8->TabIndex = 28;
			this->label8->Text = L"ID";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(123, 68);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 29;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(147, 12);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 30;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(266, 12);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 31;
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(841, 547);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Personnel";
			this->Text = L"Gestion Personnel";
			this->Load += gcnew System::EventHandler(this, &Personnel::Personnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox8->Hide();
		textBox9->Hide();
		textBox5->Hide();
		textBox6->Hide();
		label6->Hide();
		label7->Hide();
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox5->Show();
		textBox6->Show();
		label6->Show();
		label7->Show();
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox5->Hide();
		textBox6->Hide();
		label6->Hide();
		label7->Hide();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel", conDataBase);
		DataTable^ data = gcnew DataTable();
		dataGridView2->Hide();
		dataGridView1->Show();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "") {
			String^ Nom = textBox1->Text;
			String^ Prenom = textBox2->Text;
			String^ Adresse = textBox4->Text;
			String^ dateEmbauche = textBox3->Text;

			if (radioButton1->Checked) {
				SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Personnel (Nom, Prenom, Adresse, Date_d_embauche, Supperieur_hierarchique) VALUES('" + Nom + "', '" + Prenom + "', '" + Adresse + "', '" + dateEmbauche + "', 1); ", conDataBase);
				SqlDataReader^ myReader;
				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					conDataBase->Close();

					String^ NomP = textBox5->Text;
					String^ PrenomP = textBox6->Text;

					if (textBox5->Text != "" && textBox6->Text != "") {
						SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Personnel SET Id_Personnel_encadrer = (SELECT ID_Personnel FROM Personnel WHERE Nom = '" + NomP + "' AND Prenom = '" + PrenomP + "') WHERE Nom = '" + Nom + "' AND Prenom = '" + Prenom + "' ", conDataBase);
						conDataBase->Open();
						myReader = cmdDataBase->ExecuteReader();
						MessageBox::Show("Personnel enregistré :'D");
					}
					else {
						MessageBox::Show("Veuillez Remplir le Nom et le Prénom du Supérieur hiérarchique");
					}
				}
				catch (Exception^ ex) {

					MessageBox::Show(ex->Message);

				}
			}
			else {

				SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Personnel (Nom, Prenom, Adresse, Date_d_embauche, Supperieur_hierarchique) VALUES('" + Nom + "', '" + Prenom + "', '" + Adresse + "', '" + dateEmbauche + "', 0); ", conDataBase);
				SqlDataReader^ myReader;
				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("Personnel enregistré :'D");
				}
				catch (Exception^ ex) {

					MessageBox::Show(ex->Message);

				}
			}
		}
		else {
			MessageBox::Show("Il faut remplir les champs nécessaires");
		}

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "") {
			if (radioButton1->Checked) {

				int ID = Int32::Parse(textBox7->Text);
				String^ Nom = textBox1->Text;
				String^ Prenom = textBox2->Text;
				String^ Adresse = textBox4->Text;
				String^ dateEmbauche = textBox3->Text;

				SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Personnel SET Nom = '" + Nom + "', Prenom = '" + Prenom + "' , Adresse = '" + Adresse + "', Date_d_embauche = '" + dateEmbauche + "', Supperieur_hierarchique = 1 WHERE Id_Personnel = " + ID + " ", conDataBase);
				SqlDataReader^ myReader;

				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					conDataBase->Close();

					String^ NomP = textBox5->Text;
					String^ PrenomP = textBox6->Text;

					if (textBox5->Text != "" && textBox6->Text != "") {
						SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Personnel SET Id_Personnel_encadrer = (SELECT ID_Personnel FROM Personnel WHERE Nom = '" + NomP + "' AND Prenom = '" + PrenomP + "') WHERE Nom = '" + Nom + "' AND Prenom = '" + Prenom + "' ", conDataBase);
						conDataBase->Open();
						myReader = cmdDataBase->ExecuteReader();

						MessageBox::Show("Personnel modifié :'D");
					}
					else {
						MessageBox::Show("Veuillez Remplir le Nom et le Prénom du Suppérieur hiérarchique");
					}
				}
				catch (Exception^ ex) {

					MessageBox::Show(ex->Message);

				}
			}
			else {
				int ID = Int32::Parse(textBox7->Text);
				String^ Nom = textBox1->Text;
				String^ Prenom = textBox2->Text;
				String^ Adresse = textBox4->Text;
				String^ dateEmbauche = textBox3->Text;

				SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Personnel SET Nom = '" + Nom + "', Prenom = '" + Prenom + "' , Adresse = '" + Adresse + "', Date_d_embauche = '" + dateEmbauche + "', Supperieur_hierarchique = 0, Id_Personnel_encadrer = NULL WHERE Id_Personnel = " + ID + " ", conDataBase);
				SqlDataReader^ myReader;

				try {

					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					conDataBase->Close();
					MessageBox::Show("Personnel modifié :'D");

				}
				catch (Exception^ ex) {

					MessageBox::Show(ex->Message);

				}
			}
		}
		else {
			MessageBox::Show("il faut remplir les champs nécessaires");
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		radioButton1->Checked = false;
		radioButton2->Checked = true;

		if (textBox7->Text != "") {
			int ID = Int32::Parse(textBox7->Text);
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Personnel WHERE Id_Personnel = " + ID + " ", conDataBase);

			conDataBase->Open();
			SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

			dataGridView1->Hide();
			dataGridView2->Show();

			while (myReader->Read()) {
				textBox1->Text = myReader->GetString(1);
				textBox2->Text = myReader->GetString(2);
				textBox4->Text = myReader->GetString(3);
				textBox3->Text = Convert::ToString(myReader->GetDateTime(4));
				textBox8->Text = Convert::ToString(myReader->GetBoolean(5));
			}

			myReader->Close();
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel WHERE Id_Personnel = " + ID + " ", conDataBase);
			DataTable^ data = gcnew DataTable();
			data->Clear();
			adapter->Fill(data);
			bindingSource2->DataSource = data;
			dataGridView2->DataSource = bindingSource2;
			myReader->Close();

			if (textBox8->Text == "True") {

				int ID = Int32::Parse(textBox7->Text);
				SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT * FROM Personnel WHERE Id_Personnel = " + ID + " ", conDataBase);

				SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

				while (myReader1->Read()) {
					textBox9->Text = Convert::ToString(myReader1->GetInt32(6));
				}

				radioButton1->Checked = true;
				int IDP = Int32::Parse(textBox9->Text);

				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Nom, Prenom FROM Personnel WHERE Id_Personnel = " + IDP + " ", conDataBase);

				conDataBase->Close();
				conDataBase->Open();
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

				while (myReader->Read()) {
					textBox5->Text = myReader->GetString(0);
					textBox6->Text = myReader->GetString(1);
				}

			}
		}
		else if (textBox1->Text != "") {
			String^ Nom = textBox1->Text;
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Personnel WHERE Nom = '" + Nom + "' ", conDataBase);

			conDataBase->Open();
			SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

			dataGridView1->Hide();
			dataGridView2->Show();

			while (myReader->Read()) {
				textBox7->Text = Convert::ToString(myReader->GetInt32(0));
				textBox1->Text = myReader->GetString(1);
				textBox2->Text = myReader->GetString(2);
				textBox4->Text = myReader->GetString(3);
				textBox3->Text = Convert::ToString(myReader->GetDateTime(4));
				textBox8->Text = Convert::ToString(myReader->GetBoolean(5));
			}

			myReader->Close();
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel WHERE Nom = '" + Nom + "' ", conDataBase);
			DataTable^ data = gcnew DataTable();
			data->Clear();
			adapter->Fill(data);
			bindingSource2->DataSource = data;
			dataGridView2->DataSource = bindingSource2;
			myReader->Close();

			if (textBox8->Text == "True") {

				int ID = Int32::Parse(textBox7->Text);
				SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT * FROM Personnel WHERE Id_Personnel = " + ID + " ", conDataBase);

				SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

				while (myReader1->Read()) {
					textBox9->Text = Convert::ToString(myReader1->GetInt32(6));
				}

				radioButton1->Checked = true;
				int IDP = Int32::Parse(textBox9->Text);

				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Nom, Prenom FROM Personnel WHERE Id_Personnel = " + IDP + " ", conDataBase);

				conDataBase->Close();
				conDataBase->Open();
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

				while (myReader->Read()) {
					textBox5->Text = myReader->GetString(0);
					textBox6->Text = myReader->GetString(1);
				}

			}
		} else if(textBox2->Text != ""){
			String^ Prenom = textBox2->Text;
			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Personnel WHERE Prenom = '" + Prenom + "' ", conDataBase);

			conDataBase->Open();
			SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

			dataGridView1->Hide();
			dataGridView2->Show();

			while (myReader->Read()) {
				textBox7->Text = Convert::ToString(myReader->GetInt32(0));
				textBox1->Text = myReader->GetString(1);
				textBox2->Text = myReader->GetString(2);
				textBox4->Text = myReader->GetString(3);
				textBox3->Text = Convert::ToString(myReader->GetDateTime(4));
				textBox8->Text = Convert::ToString(myReader->GetBoolean(5));
			}

			myReader->Close();
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Personnel WHERE Prenom = '" + Prenom + "' ", conDataBase);
			DataTable^ data = gcnew DataTable();
			data->Clear();
			adapter->Fill(data);
			bindingSource2->DataSource = data;
			dataGridView2->DataSource = bindingSource2;
			myReader->Close();

			if (textBox8->Text == "True") {

				int ID = Int32::Parse(textBox7->Text);
				SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT * FROM Personnel WHERE Id_Personnel = " + ID + " ", conDataBase);

				SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

				while (myReader1->Read()) {
					textBox9->Text = Convert::ToString(myReader1->GetInt32(6));
				}

				radioButton1->Checked = true;
				int IDP = Int32::Parse(textBox9->Text);

				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Nom, Prenom FROM Personnel WHERE Id_Personnel = " + IDP + " ", conDataBase);

				conDataBase->Close();
				conDataBase->Open();
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

				while (myReader->Read()) {
					textBox5->Text = myReader->GetString(0);
					textBox6->Text = myReader->GetString(1);
				}

			}
		}
		else {
			MessageBox::Show("Veuillez entrez l'ID ou le Nom ou le Prenom d'un Personnel");
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	

		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		if (textBox7->Text != "") {

			int ID = Int32::Parse(textBox7->Text);

			if (MessageBox::Show("Etes-vous sûr de vouloir supprimer le personnel avec l'id " + ID + " ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM Personnel WHERE Id_Personnel = " + ID + " ", conDataBase);

				conDataBase->Open();
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("Personnel supprimé :'D");
				conDataBase->Close();

			}
			else {
				MessageBox::Show("Personnel non supprimé");
			}
		}
		else {
			MessageBox::Show("Il faut entrer un ID");
		}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
	radioButton1->Checked = false;
	radioButton2->Checked = true;
	radioButton2->Checked = false;
}
};
}


// Moi BG