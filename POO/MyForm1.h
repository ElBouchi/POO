#pragma once

#include "Gestion_Stock.h"
#include <string>


namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(136, 482);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(166, 131);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 172);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(166, 398);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(166, 217);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(166, 260);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(166, 353);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 8;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(166, 306);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Référence Article";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Désignation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Quantité";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 263);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Montant HT";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 309);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Seuil de réapprovisionement";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 356);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Nature de l\'article";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 401);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Couleur de l\'article";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(298, 482);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 39);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(454, 482);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 39);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(617, 482);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 39);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Afficher";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(337, 54);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(471, 386);
			this->dataGridView1->TabIndex = 22;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(411, 22);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(330, 26);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Afficher la liste des articles";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(337, 54);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(471, 386);
			this->dataGridView2->TabIndex = 24;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(95, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 25;
			this->button6->Text = L"CLEAR";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"ID";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(166, 85);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 27;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 547);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"Gestion Stock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text != "" && textBox2->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox9->Text != "" && textBox8->Text != "" && textBox4->Text != "") {
			try {

				NS_SVC::Gestion_Stock^ stock = gcnew NS_SVC::Gestion_Stock;

				stock->Ajouter(textBox1->Text, textBox2->Text, Int32::Parse(textBox5->Text), double::Parse(textBox6->Text), Int32::Parse(textBox9->Text), textBox8->Text, textBox4->Text);

				MessageBox::Show("Article enregistré :'D");
			}
			catch (Exception^ ex) {

				MessageBox::Show(ex->Message);
			}
		}
		else {
			MessageBox::Show("Il faut remplir tout les champs nécessaires");
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Article", conDataBase);
	DataTable^ data = gcnew DataTable();
	dataGridView2->Hide();
	dataGridView1->Show();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView1->DataSource = bindingSource1;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		NS_SVC::Gestion_Stock^ stock = gcnew NS_SVC::Gestion_Stock;

		stock->afficherByRef(textBox1->Text, textBox3, textBox1, textBox2, textBox5, textBox6, textBox9, textBox8, textBox4, bindingSource2, dataGridView2);

		dataGridView1->Hide();
		dataGridView2->Show();
	}
	else if (textBox2->Text != "") {
		NS_SVC::Gestion_Stock^ stock = gcnew NS_SVC::Gestion_Stock;

		stock->afficherByDesignation(textBox2->Text, textBox3, textBox1, textBox2, textBox5, textBox6, textBox9, textBox8, textBox4, bindingSource2, dataGridView2);

		dataGridView1->Hide();
		dataGridView2->Show();
	}
	else if (textBox3->Text != "") {
		NS_SVC::Gestion_Stock^ stock = gcnew NS_SVC::Gestion_Stock;

		stock->afficherById(Int32::Parse(textBox3->Text), textBox3, textBox1, textBox2, textBox5, textBox6, textBox9, textBox8, textBox4, bindingSource2, dataGridView2);

		dataGridView1->Hide();
		dataGridView2->Show();
	}
	else {
		MessageBox::Show("Il faut remplir l'ID ou le nom d'un Article");
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	if (textBox3->Text != "" && textBox1->Text != "" && textBox2->Text != "" && textBox5->Text != "" && textBox6->Text != "" && textBox9->Text != "" && textBox8->Text != "" && textBox4->Text != "") {

		try {
			NS_SVC::Gestion_Stock^ stock = gcnew NS_SVC::Gestion_Stock;

			stock->Modifier(Int32::Parse(textBox3->Text), textBox1->Text, textBox2->Text, Int32::Parse(textBox5->Text), Double::Parse(textBox6->Text), Int32::Parse(textBox9->Text), textBox8->Text, textBox4->Text);

			MessageBox::Show("Article modifié :'D");
		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message);

		}	

	}
	else {
		MessageBox::Show("Il faut remplir tout les champs nécessaires");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);

	if (textBox1->Text != "") {
		NS_SVC::Gestion_Stock^ stock = gcnew NS_SVC::Gestion_Stock;

		stock->Supprimer(textBox1->Text);
		MessageBox::Show("Article supprimé :'D");
	}
	else {
		MessageBox::Show("Il faut entrer une réference");
	}
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
}
};
}
