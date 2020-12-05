#pragma once

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
	/// Description résumée de Simulation
	/// </summary
	

	public ref class Simulation : public System::Windows::Forms::Form
	{
	public:
		Simulation(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		String^ rq1(String^ MC, String^ RC, String^ DI) {
			return "SELECT SUM(Quantite*((Montant_HT+Montant_HT*0.19))-((Montant_HT+Montant_HT*0.19)*" + MC + ")-((Montant_HT+Montant_HT*0.19)*" + RC + ")-((Montant_HT+Montant_HT*0.19)*" + DI + ")) AS Valeur_Stock FROM Article";
		}
		String^ rq2(String^ MC, String^ RC, String^ DI) {
			return "SELECT SUM(Quantite*((Montant_HT+Montant_HT*0.25))-((Montant_HT+Montant_HT*0.25)*" + MC + ")-((Montant_HT+Montant_HT*0.25)*" + RC + ")-((Montant_HT+Montant_HT*0.25)*" + DI + ")) AS Valeur_Stock FROM Article";
		}
		String^ rq3(String^ MC, String^ RC, String^ DI) {
			return "SELECT SUM(Quantite*((Montant_HT+Montant_HT*0.35))-((Montant_HT+Montant_HT*0.35)*" + MC + ")-((Montant_HT+Montant_HT*0.35)*" + RC + ")-((Montant_HT+Montant_HT*0.35)*" + DI + ")) AS Valeur_Stock FROM Article";
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Simulation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::BindingSource^ bindingSource1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Simulation::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(126, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(494, 319);
			this->dataGridView1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(181, 348);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Marge Commerciale";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(320, 348);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Remise Commerciale";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(462, 348);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Démarque Inconnue";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(313, 364);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(454, 364);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 7;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(169, 364);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(188, 407);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 52);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Simuler (TVA 19%)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Simulation::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(309, 407);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 52);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Simuler (TVA 25%)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Simulation::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(432, 407);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 52);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Simuler (TVA 35%)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Simulation::button3_Click);
			// 
			// Simulation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 471);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Simulation";
			this->Text = L"Simulation";
			this->Load += gcnew System::EventHandler(this, &Simulation::Simulation_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Simulation_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox3->Items->Add("0.05");
		comboBox3->Items->Add("0.1");
		comboBox3->Items->Add("0.15");
		comboBox2->Items->Add("0.02");
		comboBox2->Items->Add("0.03");
		comboBox2->Items->Add("0.05");
		comboBox1->Items->Add("0.05");
		comboBox1->Items->Add("0.06");

		comboBox1->Text = "0.05";
		comboBox2->Text = "0.02";
		comboBox3->Text = "0.05";				
}

	delegate String^ FuncRequDelegate(String^ MC, String^ RC, String^ DI);

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	if (comboBox1->Text != "" && comboBox2->Text != "" && comboBox3->Text != "") {

		Simulation^ sim = gcnew Simulation;

		FuncRequDelegate^ instance = gcnew FuncRequDelegate(sim, &Simulation::rq1);

		NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

		statistiques->Afficher(comboBox1->Text, comboBox2->Text, comboBox3->Text, instance->Invoke(comboBox1->Text, comboBox2->Text, comboBox3->Text), bindingSource1, dataGridView1);
	}
	else {
		MessageBox::Show("Il faut remplir tout les champs");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (comboBox1->Text != "" && comboBox2->Text != "" && comboBox3->Text != "") {

		Simulation^ sim = gcnew Simulation;

		FuncRequDelegate^ instance = gcnew FuncRequDelegate(sim, &Simulation::rq2);

		NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

		statistiques->Afficher(comboBox1->Text, comboBox2->Text, comboBox3->Text, instance->Invoke(comboBox1->Text, comboBox2->Text, comboBox3->Text), bindingSource1, dataGridView1);
	}
	else {
		MessageBox::Show("Il faut remplir tout les champs");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (comboBox1->Text != "" && comboBox2->Text != "" && comboBox3->Text != "") {

		Simulation^ sim = gcnew Simulation;

		FuncRequDelegate^ instance = gcnew FuncRequDelegate(sim, &Simulation::rq3);

		NS_SVC::Gestion_Statistiques^ statistiques = gcnew NS_SVC::Gestion_Statistiques;

		statistiques->Afficher(comboBox1->Text, comboBox2->Text, comboBox3->Text, instance->Invoke(comboBox1->Text, comboBox2->Text, comboBox3->Text), bindingSource1, dataGridView1);
	}
	else {
		MessageBox::Show("Il faut remplir tout les champs");
	}
}
};
}
