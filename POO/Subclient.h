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
	/// Description résumée de Subclient
	/// </summary>
	public ref class Subclient : public System::Windows::Forms::Form 
	{
	public:
		Subclient(String^ nom, String^ prenom)
		{
			InitializeComponent();
			textBox2->Text = nom;
			textBox3->Text = prenom;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Subclient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button6;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	protected:














	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Subclient::typeid));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(79, 27);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 72;
			this->button6->Text = L"CLEAR";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Subclient::button6_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(183, 408);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 75);
			this->button1->TabIndex = 71;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Subclient::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 349);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 13);
			this->label7->TabIndex = 70;
			this->label7->Text = L"Adresse de livraison";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(173, 346);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 69;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(173, 292);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 68;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(173, 239);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 67;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(173, 185);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 66;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(173, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 65;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(173, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 64;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 295);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 63;
			this->label6->Text = L"Adresse de facturation";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 13);
			this->label5->TabIndex = 62;
			this->label5->Text = L"Date du premier achat";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 61;
			this->label4->Text = L"Date de naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Prénom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 59;
			this->label2->Text = L"Nom";
			// 
			// Subclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 510);
			this->ControlBox = false;
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Subclient";
			this->Text = L"Subclient";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		String^ Nom = textBox2->Text;
		String^ Prenom = textBox3->Text;
		String^ dateNaissance = textBox4->Text;
		String^ datePAchat = textBox5->Text;
		String^ adresseFac = textBox6->Text;
		String^ adresseLiv = textBox7->Text;



		if (textBox2->Text != "", textBox3->Text != "", textBox4->Text != "", textBox5->Text != "", textBox6->Text != "", textBox7->Text != "") {
			if (adresseFac->StartsWith("Alger,") || adresseFac->StartsWith("Oran,") || adresseFac->StartsWith("Constantine,") || adresseFac->StartsWith("Annaba,") || adresseFac->StartsWith("Blida,") ||
				adresseFac->StartsWith("Batna,") || adresseFac->StartsWith("Djelfa,") || adresseFac->StartsWith("Setif,") || adresseFac->StartsWith("Sidi bel Abbes,") || adresseFac->StartsWith("Biskra,") ||
				adresseFac->StartsWith("Tebessa,") || adresseFac->StartsWith("El Oued,") || adresseFac->StartsWith("Skikda,") || adresseFac->StartsWith("Tiaret,") || adresseFac->StartsWith("Bejaia,") ||
				adresseFac->StartsWith("Tlemcen,") || adresseFac->StartsWith("Ouargla,") || adresseFac->StartsWith("Bechar,") || adresseFac->StartsWith("Mostaganem,") || adresseFac->StartsWith("Bordj Bou Arreridj,") ||
				adresseFac->StartsWith("Chlef,") || adresseFac->StartsWith("Souk Ahras,") || adresseFac->StartsWith("Medea,") || adresseFac->StartsWith("El Eulma,") || adresseFac->StartsWith("Touggourt,") ||
				adresseFac->StartsWith("Ghardaia,") || adresseFac->StartsWith("Saida,") || adresseFac->StartsWith("Laghouat,") || adresseFac->StartsWith("M'Sila,") || adresseFac->StartsWith("Jijel,") ||
				adresseFac->StartsWith("Relizane,") || adresseFac->StartsWith("Guelma,") || adresseFac->StartsWith("Ain Beida,") || adresseFac->StartsWith("Khenchela,") || adresseFac->StartsWith("Bousaada,") ||
				adresseFac->StartsWith("Mascara,") || adresseFac->StartsWith("Tizi Ouzou,")) {

				if (adresseLiv->StartsWith("Alger,") || adresseLiv->StartsWith("Oran,") || adresseLiv->StartsWith("Constantine,") || adresseLiv->StartsWith("Annaba,") || adresseLiv->StartsWith("Blida,") ||
					adresseLiv->StartsWith("Batna,") || adresseLiv->StartsWith("Djelfa,") || adresseLiv->StartsWith("Setif,") || adresseLiv->StartsWith("Sidi bel Abbes,") || adresseLiv->StartsWith("Biskra,") ||
					adresseLiv->StartsWith("Tebessa,") || adresseLiv->StartsWith("El Oued,") || adresseLiv->StartsWith("Skikda,") || adresseLiv->StartsWith("Tiaret,") || adresseLiv->StartsWith("Bejaia,") ||
					adresseLiv->StartsWith("Tlemcen,") || adresseLiv->StartsWith("Ouargla,") || adresseLiv->StartsWith("Bechar,") || adresseLiv->StartsWith("Mostaganem,") || adresseLiv->StartsWith("Bordj Bou Arreridj,") ||
					adresseLiv->StartsWith("Chlef,") || adresseLiv->StartsWith("Souk Ahras,") || adresseLiv->StartsWith("Medea,") || adresseLiv->StartsWith("El Eulma,") || adresseLiv->StartsWith("Touggourt,") ||
					adresseLiv->StartsWith("Ghardaia,") || adresseLiv->StartsWith("Saida,") || adresseLiv->StartsWith("Laghouat,") || adresseLiv->StartsWith("M'Sila,") || adresseLiv->StartsWith("Jijel,") ||
					adresseLiv->StartsWith("Relizane,") || adresseLiv->StartsWith("Guelma,") || adresseLiv->StartsWith("Ain Beida,") || adresseLiv->StartsWith("Khenchela,") || adresseLiv->StartsWith("Bousaada,") ||
					adresseLiv->StartsWith("Mascara,") || adresseLiv->StartsWith("Tizi Ouzou,")) {

					SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO Client (Nom, Prenom, Date_de_naissance, Date_du_premier_achat, Adresse_Facturation, Adresse_Livraison) VALUES('" + Nom + "', '" + Prenom + "', '" + dateNaissance + "', '" + datePAchat + "', '" + adresseFac + "', '" + adresseLiv + "'); ", conDataBase);
					SqlDataReader^ myReader;
					try {

						conDataBase->Open();
						myReader = cmdDataBase->ExecuteReader();
						MessageBox::Show("Client enregistré :'D");
						this->Close();
					}
					catch (Exception^ ex) {

						MessageBox::Show(ex->Message);

					}
				}
				else {
					MessageBox::Show("Adresse invalide, veuillez écrire l'adresse en suivant ce format : {Ville},{Autres infos}");
				}
			}
			else {
				MessageBox::Show("Adresse invalide, veuillez écrire l'adresse en suivant ce format : {Ville},{Autres infos}");
			}
		}
		else {
			MessageBox::Show("Il faut remplir tout les champs");
		}
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
}
};
}
