#pragma once

#include "Commande.h"
#include "Gestion_Client.h"

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description r�sum�e de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::Button^ button6;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Client::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(617, 482);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 39);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Afficher";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Client::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(454, 482);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 39);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Client::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(298, 482);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 39);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Client::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(136, 482);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 39);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Client::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(411, 22);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(330, 26);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Afficher la liste des clients";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Client::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(337, 54);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(471, 386);
			this->dataGridView1->TabIndex = 27;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(337, 54);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(471, 386);
			this->dataGridView2->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Pr�nom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Date de naissance";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 287);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 13);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Date du premier achat";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 340);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 34;
			this->label6->Text = L"Adresse de facturation";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(159, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 35;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(159, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 36;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(159, 178);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 37;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(159, 230);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 38;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(159, 284);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 39;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(159, 337);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 40;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(159, 391);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 41;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 394);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 13);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Adresse de livraison";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(71, 25);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 43;
			this->button6->Text = L"CLEAR";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Client::button6_Click);
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 547);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
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
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Client";
			this->Text = L"Client";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ adresseFac = textBox6->Text;
		String^ adresseLiv = textBox7->Text;
		if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "") {
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

					try {
						NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

						client->ajouter(textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, adresseFac, adresseLiv);

						MessageBox::Show("Client enregistr� :'D");
					}
					catch (Exception^ ex) {

						MessageBox::Show(ex->Message);

					}
				}
				else {
					MessageBox::Show("Adresse invalide, veuillez �crire l'adresse en suivant ce format : {Ville},{Autres infos}");
				}
			}
			else {
				MessageBox::Show("Adresse invalide, veuillez �crire l'adresse en suivant ce format : {Ville},{Autres infos}");
			}
		}
		else {
			MessageBox::Show("Il faut remplir tout les champs");
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Client", conDataBase);
	DataTable^ data = gcnew DataTable();
	dataGridView2->Hide();
	dataGridView1->Show();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView1->DataSource = bindingSource1;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox7->Text != "") {
		String^ adresseFac = textBox6->Text;
		String^ adresseLiv = textBox7->Text;

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

					try {
						NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

						client->modifier(Int32::Parse(textBox1->Text), textBox2->Text, textBox3->Text, textBox4->Text, textBox5->Text, adresseFac, adresseLiv);
						
						MessageBox::Show("Client modifi� :'D");
						conDataBase->Close();
					}
					catch (Exception^ ex) {

						MessageBox::Show(ex->Message);

					}
				}
				else {
					MessageBox::Show("Adresse invalide, veuillez �crire l'adresse en suivant ce format : {Ville},{Autres infos}");
				}
			}
			else {
				MessageBox::Show("Adresse invalide, veuillez �crire l'adresse en suivant ce format : {Ville},{Autres infos}");
			}
	}
	else {
		MessageBox::Show("Il faut remplir tout les champs");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

		client->afficherByID(Int32::Parse(textBox1->Text), textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, bindingSource2, dataGridView2);

		dataGridView1->Hide();
		dataGridView2->Show();
	}
	else if(textBox2->Text != ""){
		NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

		client->afficherByNom(textBox2->Text, textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, bindingSource2, dataGridView2);

		dataGridView1->Hide();
		dataGridView2->Show();
	}
	else if (textBox3->Text != "") {
		NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

		client->afficherByPrenom(textBox2->Text, textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, bindingSource2, dataGridView2);

		dataGridView1->Hide();
		dataGridView2->Show();
	}
	else {
		MessageBox::Show("Vous devez introduire l'ID ou le Nom ou le Pr�nom d'un Client");
	}


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	if(textBox1->Text != ""){
	NS_SVC::Gestion_Client^ client = gcnew NS_SVC::Gestion_Client;

	client->supprimer(Int32::Parse(textBox1->Text));
	MessageBox::Show("Client supprim� :'D");
	}
	else {
		MessageBox::Show("Il faut remplir l'ID d'un Client");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
}
};
}
