#pragma once

#include "Subclient.h"
#include "Panier.h"
#include "Gestion_Commande.h"

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Commande
	/// </summary>

	
	public ref class Commande : public System::Windows::Forms::Form
	{
	public:
		Commande(void)
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
		~Commande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;





	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;






	public: System::Windows::Forms::TextBox^ ntextBox11;
	public: System::Windows::Forms::TextBox^ ntextBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;

	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::ComponentModel::IContainer^ components;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Commande::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->ntextBox11 = (gcnew System::Windows::Forms::TextBox());
			this->ntextBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(659, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(330, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Afficher la liste des commandes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Commande::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 173);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Référence";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(233, 501);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Ajouter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Commande::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(395, 501);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Commande::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(551, 501);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 39);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Commande::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(699, 501);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 39);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Afficher";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Commande::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(73, 26);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"CLEAR";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Commande::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(585, 58);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(471, 386);
			this->dataGridView1->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(141, 170);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(141, 221);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 9;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(585, 58);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(471, 386);
			this->dataGridView2->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Date de livraison";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Date d\'émission";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(141, 274);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(141, 324);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 331);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Date de paiement";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(305, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Moyen de paiement";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(306, 199);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Nom Client";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(306, 249);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Prénom Client";
			// 
			// ntextBox11
			// 
			this->ntextBox11->Location = System::Drawing::Point(450, 196);
			this->ntextBox11->Name = L"ntextBox11";
			this->ntextBox11->Size = System::Drawing::Size(100, 20);
			this->ntextBox11->TabIndex = 30;
			// 
			// ntextBox12
			// 
			this->ntextBox12->Location = System::Drawing::Point(450, 246);
			this->ntextBox12->Name = L"ntextBox12";
			this->ntextBox12->Size = System::Drawing::Size(100, 20);
			this->ntextBox12->TabIndex = 31;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(247, 26);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 32;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(399, 26);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 33;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(535, 25);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 35;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(429, 300);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 36;
			// 
			// Commande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1094, 581);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->ntextBox12);
			this->Controls->Add(this->ntextBox11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Commande";
			this->Text = L"Gestion commande";
			this->Load += gcnew System::EventHandler(this, &Commande::Commande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Commande_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox13->Hide();
		textBox14->Hide();
		textBox11->Hide();
		comboBox1->Items->Add("");
		comboBox1->Items->Add("Par carte");
		comboBox1->Items->Add("En espèce");
		comboBox1->Items->Add("Par chèque");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);

		if (MessageBox::Show("Un panier pour ajouter les articles va s'afficher, êtes-vous sûr de continuer?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && comboBox1->Text != "" && ntextBox11->Text != "" && ntextBox12->Text != "") {
				String^ Nom = ntextBox11->Text;
				String^ Prenom = ntextBox12->Text;

				SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Adresse_Livraison FROM Client WHERE Nom = '" + Nom + "' AND Prenom = '" + Prenom + "' ", conDataBase);
				conDataBase->Open();
				SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

				while (myReader->Read()) {
					textBox13->Text = myReader->GetString(0);
				}
				myReader->Close();

				if (textBox13->Text == "") {
					if (MessageBox::Show("Le Client entrée n'existe pas dans la base de données voulez-vous l'ajouter ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
						Subclient ajoutClient(ntextBox11->Text, ntextBox12->Text);

						ajoutClient.ShowDialog();

						SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Nom, Prenom FROM Client WHERE Id_Client = (SELECT MAX(Id_Client) FROM Client) ", conDataBase);

						SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

						while (myReader->Read()) {
							ntextBox11->Text = myReader->GetString(0);
							ntextBox12->Text = myReader->GetString(1);
						}
						myReader->Close();

						SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT Adresse_Livraison FROM Client WHERE Nom = '" + Nom + "' AND Prenom = '" + Prenom + "' ", conDataBase);
						SqlDataReader^ myReader3 = cmdDataBase3->ExecuteReader();

						while (myReader3->Read()) {
							textBox13->Text = myReader3->GetString(0);
						}
						myReader3->Close();


						SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT ISNULL(MAX(CAST(SUBSTRING(reference_commande,12,LEN(reference_commande) - 11) AS int)),0) FROM Commande", conDataBase);
						SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

						while (myReader1->Read()) {
							textBox14->Text = Convert::ToString(myReader1->GetInt32(0));
						}

						myReader1->Close();

						String^ Inc = textBox14->Text;
						if (textBox14->Text != "") {
							String^ sInc = Inc;
							int iInt = Int32::Parse(sInc);

							iInt++;

							Inc = Convert::ToString(iInt);
						}
						else {
							Inc = "1";
						}

						textBox14->Text = Inc;

						String^ adresseLiv = textBox13->Text;
						String^ dateLiv = textBox2->Text;
						String^ dateEmi = textBox3->Text;
						String^ datePay = textBox4->Text;
						String^ moyen = comboBox1->Text;

						String^ reference = Prenom->Substring(0, 2) + Nom->Substring(0, 2) + dateEmi->Substring(6, 4) + adresseLiv->Substring(0, 3) + Inc;
						textBox11->Text = reference;

						NS_SVC::Gestion_Commande^ commande = gcnew NS_SVC::Gestion_Commande;

						commande->Ajouter(reference, textBox2->Text, textBox3->Text, textBox4->Text, comboBox1->Text , ntextBox11->Text, ntextBox12->Text);
						
						textBox13->Text = "";
						textBox14->Text = "";

						Panier ajoutArticle(textBox11->Text);

						ajoutArticle.ShowDialog();

						SqlCommand^ cmdDataBase5 = gcnew SqlCommand("UPDATE Commande SET Quantite_Total_Articles = (SELECT SUM(Quantité_article) FROM Contient) WHERE reference_commande = '"+reference+"' ", conDataBase);
						SqlDataReader^ myReader5 = cmdDataBase5->ExecuteReader();
						myReader5->Close();

						SqlCommand^ cmdDataBase8 = gcnew SqlCommand("UPDATE Commande SET Montant_total_HT = (SELECT SUM(Montant_HT*Quantité_article) FROM Contient INNER JOIN Article ON [Contient].reference_article = [Article].reference_article WHERE [Contient].reference_commande = '" + reference + "') WHERE reference_commande = '" + reference + "' ", conDataBase);
						SqlDataReader^ myReader8 = cmdDataBase8->ExecuteReader();
						myReader8->Close();

						SqlCommand^ cmdDataBase6 = gcnew SqlCommand("UPDATE Commande SET Montant_total_TVA = (SELECT SUM(Montant_TVA*Quantité_article) FROM Contient INNER JOIN Article ON [Contient].reference_article = [Article].reference_article WHERE [Contient].reference_commande = '"+reference+"') WHERE reference_commande = '"+reference+"' ", conDataBase);
						SqlDataReader^ myReader6 = cmdDataBase6->ExecuteReader();
						myReader6->Close();

						SqlCommand^ cmdDataBase7 = gcnew SqlCommand("UPDATE Commande SET Montant_total_TTC = (SELECT SUM(Montant_TTC*Quantité_article) FROM Contient INNER JOIN Article ON [Contient].reference_article = [Article].reference_article WHERE [Contient].reference_commande = '" + reference + "') WHERE reference_commande = '" + reference + "' ", conDataBase);
						SqlDataReader^ myReader7 = cmdDataBase7->ExecuteReader();
						myReader7->Close();

						SqlCommand^ cmdDataBase9 = gcnew SqlCommand("DELETE FROM Commande WHERE Montant_total_HT IS NULL", conDataBase);
						SqlDataReader^ myReader9 = cmdDataBase9->ExecuteReader();
						myReader9->Close();

						MessageBox::Show("Commande ajouté :'D");
					}
				}
				else {
					SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT ISNULL(MAX(CAST(SUBSTRING(reference_commande,12,LEN(reference_commande) - 11) AS int)),0) FROM Commande", conDataBase);
					SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

					while (myReader1->Read()) {
						textBox14->Text = Convert::ToString(myReader1->GetInt32(0));
					}
					myReader1->Close();

					String^ Inc = textBox14->Text;
					if (textBox14->Text != "") {
						String^ sInc = Inc;
						int iInt = Int32::Parse(sInc);

						iInt++;

						Inc = Convert::ToString(iInt);
					}
					else {
						Inc = "1";
					}

					textBox14->Text = Inc;

					String^ adresseLiv = textBox13->Text;
					String^ dateLiv = textBox2->Text;
					String^ dateEmi = textBox3->Text;
					String^ datePay = textBox4->Text;
					String^ moyen = comboBox1->Text;

					String^ reference = Prenom->Substring(0, 2) + Nom->Substring(0, 2) + dateEmi->Substring(6, 4) + adresseLiv->Substring(0, 3) + Inc;

					textBox11->Text = reference;

					NS_SVC::Gestion_Commande^ commande = gcnew NS_SVC::Gestion_Commande;

					commande->Ajouter(reference, textBox2->Text, textBox3->Text, textBox4->Text, comboBox1->Text, ntextBox11->Text, ntextBox12->Text);
					textBox13->Text = "";
					textBox14->Text = "";

					Panier ajoutArticle(textBox11->Text);

					ajoutArticle.ShowDialog();

					SqlCommand^ cmdDataBase5 = gcnew SqlCommand("UPDATE Commande SET Quantite_Total_Articles = (SELECT SUM(Quantité_article) FROM Contient) WHERE reference_commande = '" + reference + "' ", conDataBase);
					SqlDataReader^ myReader5 = cmdDataBase5->ExecuteReader();
					myReader5->Close();

					SqlCommand^ cmdDataBase6 = gcnew SqlCommand("UPDATE Commande SET Montant_total_TVA = (SELECT SUM(Montant_TVA*Quantité_article) FROM Contient INNER JOIN Article ON [Contient].reference_article = [Article].reference_article WHERE [Contient].reference_commande = '" + reference + "') WHERE reference_commande = '" + reference + "' ", conDataBase);
					SqlDataReader^ myReader6 = cmdDataBase6->ExecuteReader();
					myReader6->Close();

					SqlCommand^ cmdDataBase8 = gcnew SqlCommand("UPDATE Commande SET Montant_total_HT = (SELECT SUM(Montant_HT*Quantité_article) FROM Contient INNER JOIN Article ON [Contient].reference_article = [Article].reference_article WHERE [Contient].reference_commande = '" + reference + "') WHERE reference_commande = '" + reference + "' ", conDataBase);
					SqlDataReader^ myReader8 = cmdDataBase8->ExecuteReader();
					myReader8->Close();

					SqlCommand^ cmdDataBase7 = gcnew SqlCommand("UPDATE Commande SET Montant_total_TTC = (SELECT SUM(Montant_TTC*Quantité_article) FROM Contient INNER JOIN Article ON [Contient].reference_article = [Article].reference_article WHERE [Contient].reference_commande = '" + reference + "') WHERE reference_commande = '" + reference + "' ", conDataBase);
					SqlDataReader^ myReader7 = cmdDataBase7->ExecuteReader();
					myReader7->Close();

					SqlCommand^ cmdDataBase9 = gcnew SqlCommand("DELETE FROM Commande WHERE Montant_total_HT IS NULL", conDataBase);
					SqlDataReader^ myReader9 = cmdDataBase9->ExecuteReader();
					myReader9->Close();

					MessageBox::Show("Commande ajouté :'D");
				}
			}
			else {
				MessageBox::Show("Il faut remplir tout les champs nécessaires");
			}
		}
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT [Commande].reference_commande, Date_de_livraison, Date_d_emission, Date_de_paiement, Moyen_de_paiement, Quantite_Total_Articles, Montant_total_HT, Montant_total_TVA, Montant_total_TTC, Remise, [Commande].Id_Client, Nom, Prenom, [Contient].reference_article, designation, Quantité_article  FROM Commande INNER JOIN Client ON [Commande].Id_Client = [Client].Id_Client INNER JOIN Contient ON [Contient].reference_commande = [Commande].reference_commande INNER JOIN Article ON [Article].reference_article = [Contient].reference_article", conDataBase);
	DataTable^ data = gcnew DataTable();
	dataGridView2->Hide();
	dataGridView1->Show();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView1->DataSource = bindingSource1;
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	comboBox1->Text = "";
	textBox13->Text = "";
	textBox14->Text = "";
	ntextBox11->Text = "";
	ntextBox12->Text = "";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	if (textBox1->Text != "") {
		NS_SVC::Gestion_Commande^ commande = gcnew NS_SVC::Gestion_Commande;

		commande->Afficher(textBox1->Text, textBox1, textBox2, textBox3, textBox4, comboBox1, textBox13);

		if (textBox13->Text == "") {
			MessageBox::Show("référence inexistante");
		}
		else {
			conDataBase->Open();
		int ID = Int32::Parse(textBox13->Text);
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT Nom, Prenom FROM Client WHERE Id_Client = " + ID + " ", conDataBase);

		SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

		while (myReader1->Read()) {
			ntextBox11->Text = myReader1->GetString(0);
			ntextBox12->Text = myReader1->GetString(1);
		}

		myReader1->Close();

		String^ reference = textBox1->Text;

		dataGridView1->Hide();
		dataGridView2->Show();

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT [Commande].reference_commande, Date_de_livraison, Date_d_emission, Date_de_paiement, Moyen_de_paiement, Quantite_Total_Articles, Montant_total_HT, Montant_total_TVA, Montant_total_TTC, Remise, [Commande].Id_Client, Nom, Prenom, [Contient].reference_article, designation, Quantité_article  FROM Commande INNER JOIN Client ON [Commande].Id_Client = [Client].Id_Client INNER JOIN Contient ON [Contient].reference_commande = [Commande].reference_commande INNER JOIN Article ON [Article].reference_article = [Contient].reference_article WHERE [Commande].reference_commande = '"+reference+"' ", conDataBase);
		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataGridView2->DataSource = bindingSource2;
		textBox13->Text = "";
	}
	}
	else {
		MessageBox::Show("Il faut entrer une référence");
	}
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);


		if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && comboBox1->Text != "" && ntextBox11->Text != "" && ntextBox12->Text != "") {
			String^ Nom = ntextBox11->Text;
			String^ Prenom = ntextBox12->Text;

			SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Adresse_Livraison FROM Client WHERE Nom = '" + Nom + "' AND Prenom = '" + Prenom + "' ", conDataBase);
			conDataBase->Open();
			SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read()) {
				textBox13->Text = myReader->GetString(0);
			}
			myReader->Close();

			if (textBox13->Text == "") {
				if (MessageBox::Show("Le Client entrée n'existe pas dans la base de données voulez-vous l'ajouter ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					Subclient ajoutClient(ntextBox11->Text, ntextBox12->Text);

					ajoutClient.ShowDialog();

					SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT Nom, Prenom FROM Client WHERE Id_Client = (SELECT MAX(Id_Client) FROM Client) ", conDataBase);

					SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

					while (myReader->Read()) {
						ntextBox11->Text = myReader->GetString(0);
						ntextBox12->Text = myReader->GetString(1);
					}
					myReader->Close();

					SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT Adresse_Livraison FROM Client WHERE Nom = '" + Nom + "' AND Prenom = '" + Prenom + "' ", conDataBase);
					SqlDataReader^ myReader3 = cmdDataBase3->ExecuteReader();

					while (myReader3->Read()) {
						textBox13->Text = myReader3->GetString(0);
					}
					myReader3->Close();

					String^ reference = textBox1->Text;

					SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT ISNULL(CAST(SUBSTRING(reference_commande,12,LEN(reference_commande) - 11) AS int),0) FROM Commande WHERE reference_commande = '" + reference + "'", conDataBase);
					SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

					while (myReader1->Read()) {
						textBox14->Text = Convert::ToString(myReader1->GetInt32(0));
					}

					myReader1->Close();

					String^ Inc = textBox14->Text;
					if (textBox14->Text != "") {

						Inc = textBox14->Text;
					}
					else {
						MessageBox::Show("Erreur");
					}

					textBox14->Text = Inc;


					String^ adresseLiv = textBox13->Text;
					String^ dateLiv = textBox2->Text;
					String^ dateEmi = textBox3->Text;
					String^ datePay = textBox4->Text;
					String^ moyen = comboBox1->Text;

					String^ reference2 = Prenom->Substring(0, 2) + Nom->Substring(0, 2) + dateEmi->Substring(6, 4) + adresseLiv->Substring(0, 3) + Inc;

					textBox11->Text = reference2;

					if (MessageBox::Show("Voulez vous modifer un/des Article(s) dans cette commande ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
						Panier modifArticle(textBox11->Text, 5);

						modifArticle.ShowDialog();
					}
					else {
						NS_SVC::Gestion_Commande^ commande = gcnew NS_SVC::Gestion_Commande;

						commande->Modifer(reference, textBox2->Text, textBox3->Text, textBox4->Text, comboBox1->Text, ntextBox11->Text, ntextBox12->Text, reference2);
						textBox13->Text = "";
						textBox14->Text = "";
						MessageBox::Show("Commande modifié :'D");
					}
				}
			}
			else {
				String^ reference = textBox1->Text;

				SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT ISNULL(CAST(SUBSTRING(reference_commande,12,LEN(reference_commande) - 11) AS int),0) FROM Commande WHERE reference_commande = '" + reference + "' ", conDataBase);
				SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

				textBox14->Text = "";

				while (myReader1->Read()) {
					textBox14->Text = Convert::ToString(myReader1->GetInt32(0));
				}
				myReader1->Close();

				String^ Inc = textBox14->Text;
				if (textBox14->Text != "") {

					Inc = textBox14->Text;
				}
				else {
					MessageBox::Show("Erreur");
				}



				String^ adresseLiv = textBox13->Text;
				String^ dateLiv = textBox2->Text;
				String^ dateEmi = textBox3->Text;
				String^ datePay = textBox4->Text;
				String^ moyen = comboBox1->Text;

				String^ reference2 = Prenom->Substring(0, 2) + Nom->Substring(0, 2) + dateEmi->Substring(6, 4) + adresseLiv->Substring(0, 3) + Inc;

				textBox11->Text = reference2;

				if (MessageBox::Show("Voulez vous modifer un/des Article(s) dans cette commande ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					Panier modifArticle(textBox11->Text, 5);

					modifArticle.ShowDialog();
				}else{
				NS_SVC::Gestion_Commande^ commande = gcnew NS_SVC::Gestion_Commande;

				commande->Modifer(reference, textBox2->Text, textBox3->Text, textBox4->Text, comboBox1->Text, ntextBox11->Text, ntextBox12->Text, reference2);
				textBox13->Text = "";
				textBox14->Text = "";
				MessageBox::Show("Commande modifié :'D");
			}
			}
		}
		else {
			MessageBox::Show("Il faut remplir tout les champs");
		}
	}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {

		String^ reference = textBox1->Text;

		if (MessageBox::Show("Etes-vous sûr de vouloir supprimer la commande dont la référence est '" + reference + "' ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

			NS_SVC::Gestion_Commande^ commande = gcnew NS_SVC::Gestion_Commande;

			commande->Supprimer(reference);
			MessageBox::Show("Commande supprimé :'D");
		}
		else {
			MessageBox::Show("Commande non supprimé");
		}
	}
	else {
		MessageBox::Show("Il faut entrer une référence");
	}
}
};
}
