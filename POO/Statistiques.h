#pragma once

#include "Simulation.h"
#include "Gestion_Statistiques.h"

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de Statistiques
	/// </summary>
	public ref class Statistiques : public System::Windows::Forms::Form
	{
	public:
		Statistiques(void)
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
		~Statistiques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Statistiques::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(337, 54);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(471, 386);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Calculer le panier moyen (après remise)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Statistiques::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Calculer le chiffre d’affaire sur un mois en particulier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Statistiques::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 170);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 37);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Identifier les produits sous le seuil de réapprovisionnement";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Statistiques::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 222);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(203, 37);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Calculer le montant total des achats pour un client";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Statistiques::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 274);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(203, 37);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Identifier les 10 articles les plus vendus";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Statistiques::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 326);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(203, 37);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Identifier les 10 articles les moins vendus";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Statistiques::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 379);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(203, 37);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Calculer la valeur d’achat du stock";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Statistiques::button7_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(241, 128);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(56, 20);
			this->numericUpDown1->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(241, 231);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(56, 20);
			this->textBox1->TabIndex = 9;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(439, 20);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(263, 28);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Afficher les Clients";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Statistiques::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(662, 473);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(128, 47);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Simulation";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Statistiques::button9_Click);
			// 
			// Statistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 547);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Statistiques";
			this->Text = L"Statistiques";
			this->Load += gcnew System::EventHandler(this, &Statistiques::Statistiques_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Statistiques_Load(System::Object^ sender, System::EventArgs^ e) {
	numericUpDown1->Minimum = 1;
	numericUpDown1->Maximum = 12;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

	statistiques->Panier(bindingSource1, dataGridView1);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

	statistiques->AffTout(bindingSource1, dataGridView1);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

	statistiques->Seuil(bindingSource1, dataGridView1);
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

	statistiques->pVendus(bindingSource1, dataGridView1);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

	statistiques->mVendus(bindingSource1, dataGridView1);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

	statistiques->ChiffreAff(Int32::Parse(numericUpDown1->Text), bindingSource1, dataGridView1);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {

		NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

		statistiques->TotalAchat(Int32::Parse(textBox1->Text), bindingSource1, dataGridView1);
	}
	else {
		MessageBox::Show("Il faut entrer un ID");
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

	statistiques->ValeurAchat(bindingSource1, dataGridView1);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Simulation^ a = gcnew Simulation;
		a->Show();
}
};
}
