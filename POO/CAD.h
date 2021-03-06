#pragma once

namespace NS_Composants
{
	public ref class CAD
	{
	private:
		System::String^ cnx;
		System::String^ rq_sql;
		System::Data::SqlClient::SqlConnection^ CNX;
		System::Data::SqlClient::SqlCommand^ CMD;
		System::Data::SqlClient::SqlDataAdapter^ DA;
		System::Data::DataTable^ TAB;
		System::Data::SqlClient::SqlDataReader^ READ;
		void setSQL(System::String^ rq_sql) {
			if (rq_sql == "" || rq_sql == "RIEN")
			{
				this->rq_sql = "RIEN";
			}
			else
			{
				this->rq_sql = rq_sql;
			}
		}
	public:
		CAD() {
			this->rq_sql = "RIEN";
			this->cnx = "Data Source=(local);Initial Catalog=POO;Integrated Security=True";
			this->CNX = gcnew System::Data::SqlClient::SqlConnection(this->cnx);
			this->CMD = gcnew System::Data::SqlClient::SqlCommand(this->rq_sql, this->CNX);
			this->DA = gcnew System::Data::SqlClient::SqlDataAdapter(this->CMD);
			this->TAB = gcnew System::Data::DataTable();
			this->CMD->CommandType = System::Data::CommandType::Text;

		}
		void requete(System::String^ rq_sql)
		{
			this->setSQL(rq_sql);
			this->CMD->CommandText = this->rq_sql;
			this->CNX->Open();
			this->READ = CMD->ExecuteReader();
		}
		void readClient(System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6, System::Windows::Forms::TextBox^ textBox7) {
			while (this->READ->Read()) {
				textBox1->Text = System::Convert::ToString(READ->GetInt32(0));
				textBox2->Text = READ->GetString(1);
				textBox3->Text = READ->GetString(2);
				textBox4->Text = System::Convert::ToString(READ->GetDateTime(3));
				textBox5->Text = System::Convert::ToString(READ->GetDateTime(4));
				textBox6->Text = READ->GetString(5);
				textBox7->Text = READ->GetString(6);
			}
			this->READ->Close();
		}
		void readStock(System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox5, System::Windows::Forms::TextBox^ textBox6, System::Windows::Forms::TextBox^ textBox9, System::Windows::Forms::TextBox^ textBox8, System::Windows::Forms::TextBox^ textBox4) {
			while (this->READ->Read()) {
				textBox3->Text = System::Convert::ToString(READ->GetInt32(0));
				textBox1->Text = READ->GetString(1);
				textBox2->Text = READ->GetString(2);
				textBox5->Text = System::Convert::ToString(READ->GetInt32(3));
				textBox6->Text = System::Convert::ToString(READ->GetDouble(4));
				textBox9->Text = System::Convert::ToString(READ->GetInt32(7));
				textBox8->Text = READ->GetString(8);
				textBox4->Text = READ->GetString(9);
			}
			this->READ->Close();
		}
		void readPersonnel(System::Windows::Forms::TextBox^ textBox7, System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox8) {
			while (this->READ->Read()) {
				textBox7->Text = System::Convert::ToString(READ->GetInt32(0));
				textBox1->Text = READ->GetString(1);
				textBox2->Text = READ->GetString(2);
				textBox4->Text = READ->GetString(3);
				textBox3->Text = System::Convert::ToString(READ->GetDateTime(4));
				textBox8->Text = System::Convert::ToString(READ->GetBoolean(5));
			}
			this->READ->Close();
		}
		void readCommande(System::Windows::Forms::TextBox^ textBox1, System::Windows::Forms::TextBox^ textBox2, System::Windows::Forms::TextBox^ textBox3, System::Windows::Forms::TextBox^ textBox4, System::Windows::Forms::ComboBox^ comboBox1, System::Windows::Forms::TextBox^ textBox13) {
			while (this->READ->Read()) {
				textBox1->Text = READ->GetString(0);
				textBox2->Text = System::Convert::ToString(READ->GetDateTime(1));
				textBox3->Text = System::Convert::ToString(READ->GetDateTime(2));
				textBox4->Text = System::Convert::ToString(READ->GetDateTime(3));
				comboBox1->Text = READ->GetString(4);
				textBox13->Text = System::Convert::ToString(READ->GetInt32(10));
			}
			this->READ->Close();
		}
		void close() {
			while (this->READ->Read()) {
			}
			this->READ->Close();
		}
		void datagrid(System::String^ rq_sql, System::Windows::Forms::BindingSource^ bindingsource, System::Windows::Forms::DataGridView^ datagridview) {
			this->setSQL(rq_sql);
			TAB->Clear();
			DA->Fill(TAB);
			bindingsource->DataSource = TAB;
			datagridview->DataSource = bindingsource;
		}
	};
}

