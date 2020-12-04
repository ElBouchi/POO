#pragma once

#include "Qtarticle.h"
#include "Gestion_Contient.h"

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Panier
	/// </summary>
	public ref class Panier : public System::Windows::Forms::Form
	{
	public:
		int W = 0;
		Panier(String^ ref)
		{
			InitializeComponent();
			textBox2->Text = ref;
		}

		Panier(String^ ref, int a)
		{
			InitializeComponent();
			textBox2->Text = ref;
			W = 1;
			button1->Hide();
			button3->Show();
			button4->Show();
			button5->Show();
			textBox5->Show();
			label4->Show();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Panier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(151, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter Article";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Panier::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Référence de l\'article";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Quantité";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(180, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(180, 170);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(180, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Référence Commande";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(439, 58);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(473, 288);
			this->dataGridView1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(647, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 26);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Afficher la référence de l\'article";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Panier::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(498, 30);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(70, 263);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 39);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Modifer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Panier::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(238, 263);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 39);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Panier::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(498, 352);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(377, 28);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Afficher la commande";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Panier::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(285, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(195, 216);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(51, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Référence du nouvel article";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 16;
			this->button6->Text = L"CLEAR";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Panier::button6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(525, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(647, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 18;
			// 
			// Panier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(942, 394);
			this->ControlBox = false;
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Panier";
			this->Text = L"Panier";
			this->Load += gcnew System::EventHandler(this, &Panier::Panier_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Panier_Load(System::Object^ sender, System::EventArgs^ e) {
		if (W == 0) {
			button3->Hide();
			button4->Hide();
			button5->Hide();
			textBox4->Hide();
			textBox5->Hide();
			label4->Hide();
			button6->Show();
			textBox6->Hide();
			textBox7->Hide();
		}
		else {
			button1->Show();
			textBox4->Hide();
			button3->Show();
			button4->Show();
			button5->Show();
			textBox5->Show();
			label4->Show();
			button6->Show();
			textBox6->Hide();
			textBox7->Hide();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		conDataBase->Open();
		if (textBox1->Text != "" && textBox2->Text != "" && numericUpDown1->Value != 0 && textBox5->Text == "") {
			String^ referenceA = textBox1->Text;
			int quantite = Int32::Parse(numericUpDown1->Text);
			if (textBox4->Text == textBox1->Text) {
				MessageBox::Show("Article déja ajouté dans la commande, veuillez modifier sa quantité si vous le souhaitez");
				Qtarticle qt(textBox1->Text, textBox2->Text);

				qt.ShowDialog();
			}
			else {
				SqlCommand^ cmdDataBase1 = gcnew SqlCommand("SELECT Quantite FROM Article WHERE reference_article = '" + referenceA + "'  ", conDataBase);

				SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();

				while (myReader1->Read()) {
					textBox6->Text = Convert::ToString(myReader1->GetInt32(0));
				}

				myReader1->Close();

				if (Int32::Parse(textBox6->Text) > 0 && ((Int32::Parse(textBox6->Text)) - Int32::Parse(numericUpDown1->Text) == 0)){
				try {


					NS_SVC::Gestion_Contient^ contient = gcnew NS_SVC::Gestion_Contient;

					contient->Ajouter(textBox2->Text, textBox1->Text, Int32::Parse(numericUpDown1->Text));

					SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Article SET Quantite = Quantite - " + quantite + " WHERE reference_article = '" + referenceA + "'  ", conDataBase);

					SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
					myReader->Close();

				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
					MessageBox::Show("Article non ajouté, vous devez ajouter un autre pour que la commande s'enregistre");
				}

				textBox4->Text = textBox1->Text;

				textBox1->Text = "";
				numericUpDown1->Value = 0;
			}
		else {
					MessageBox::Show("Stock insuffisant");
			}
			}
			if (MessageBox::Show("Voulez-vous ajouter un autre article ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			
			}
			else {
				this->Close();
			}
		}
		else {
			MessageBox::Show("Il faut remplir les champs nécessaires");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text != "") {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		String^ designation = textBox3->Text;
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT reference_article, designation, Couleur_de_l_article FROM Article WHERE designation = '"+designation+"' ", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	else {
		MessageBox::Show("Il faut entrer le Nom d'un article");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text != "" && textBox2->Text != "" && numericUpDown1->Value != 0 && textBox5->Text != "") {
			NS_SVC::Gestion_Contient^ contient = gcnew NS_SVC::Gestion_Contient;

			contient->Modifier(textBox5->Text, textBox2->Text, textBox1->Text, Int32::Parse(numericUpDown1->Text));

			textBox4->Text = textBox1->Text;

			textBox1->Text = "";
			numericUpDown1->Value = 0;
			textBox5->Text == "";


			if (MessageBox::Show("Article modifié dans la commande, voulez-vous modifer un autre article dans la commande ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

			}
			else {
				this->Close();
			}
	}
	else {
		MessageBox::Show("Il faut remplir les champs nécessaires");
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "") {
		String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		String^ reference = textBox2->Text;
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT reference_commande, [Contient].reference_article, Quantité_article, designation FROM Contient, Article WHERE [Contient].reference_article = [Article].reference_article AND reference_commande = '"+reference+"' ", conDataBase);
		DataTable^ data = gcnew DataTable();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView1->DataSource = bindingSource1;
	}
	else {
		MessageBox::Show("Erreur");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	if (textBox1->Text != "" && textBox2->Text != "" && numericUpDown1->Value == 0 && textBox5->Text == "") {
		NS_SVC::Gestion_Contient^ contient = gcnew NS_SVC::Gestion_Contient;

		contient->Supprimer(textBox1->Text, textBox2->Text);



		textBox1->Text = "";
		numericUpDown1->Value = 0;
		textBox5->Text == "";

		if (MessageBox::Show("Article supprimé dans la commande, voulez-vous supprimer un autre article dans la commande ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		}
		else {
			this->Close();
		}
	}
	else {
		MessageBox::Show("Il faut remplir les champs nécessaires (il ne faut pas remplir la case <Référence du nouvel article>)");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = "";
	textBox1->Text = "";
	numericUpDown1->Value = 0;

}
};
}
