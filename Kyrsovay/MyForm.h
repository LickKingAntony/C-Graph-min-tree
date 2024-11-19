#pragma once
using namespace System::IO;
#include "MyForm2.h";
#include <fstream>
#include<iostream>
#include <string>
namespace Kyrsovay {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ perv_label;
	private: System::Windows::Forms::Button^ vxod_button;

	private: System::Windows::Forms::Button^ registr_button;
	private: System::Windows::Forms::Button^ vxod_podtver_button;
	private: System::Windows::Forms::TextBox^ vxod_name_textbox;
	private: System::Windows::Forms::TextBox^ vxod_parol_textbox;
	private: System::Windows::Forms::Label^ vxod_labbel;
	private: System::Windows::Forms::Button^ back_button;
	private: System::Windows::Forms::TextBox^ registr_name_textbox;
	private: System::Windows::Forms::TextBox^ registr_parol_textbox;
	private: System::Windows::Forms::Button^ registr_podtver_button;
	private: System::Windows::Forms::Label^ registr_label;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::Label^ neprav_labbel;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;



	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->perv_label = (gcnew System::Windows::Forms::Label());
			this->vxod_button = (gcnew System::Windows::Forms::Button());
			this->registr_button = (gcnew System::Windows::Forms::Button());
			this->vxod_podtver_button = (gcnew System::Windows::Forms::Button());
			this->vxod_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->vxod_parol_textbox = (gcnew System::Windows::Forms::TextBox());
			this->vxod_labbel = (gcnew System::Windows::Forms::Label());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->registr_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->registr_parol_textbox = (gcnew System::Windows::Forms::TextBox());
			this->registr_podtver_button = (gcnew System::Windows::Forms::Button());
			this->registr_label = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->neprav_labbel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// perv_label
			// 
			this->perv_label->AutoSize = true;
			this->perv_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->perv_label->ForeColor = System::Drawing::SystemColors::ControlText;
			this->perv_label->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->perv_label->Location = System::Drawing::Point(12, 28);
			this->perv_label->Name = L"perv_label";
			this->perv_label->Size = System::Drawing::Size(346, 50);
			this->perv_label->TabIndex = 0;
			this->perv_label->Text = L"             ����� ���������� \r\n�������� ���������� ��������";
			// 
			// vxod_button
			// 
			this->vxod_button->Location = System::Drawing::Point(31, 123);
			this->vxod_button->Name = L"vxod_button";
			this->vxod_button->Size = System::Drawing::Size(95, 23);
			this->vxod_button->TabIndex = 1;
			this->vxod_button->Text = L"����";
			this->vxod_button->UseVisualStyleBackColor = true;
			this->vxod_button->Click += gcnew System::EventHandler(this, &MyForm::vxod_button_Click);
			// 
			// registr_button
			// 
			this->registr_button->Location = System::Drawing::Point(229, 123);
			this->registr_button->Name = L"registr_button";
			this->registr_button->Size = System::Drawing::Size(111, 23);
			this->registr_button->TabIndex = 2;
			this->registr_button->Text = L"�����������";
			this->registr_button->UseVisualStyleBackColor = true;
			this->registr_button->Click += gcnew System::EventHandler(this, &MyForm::registr_button_Click);
			// 
			// vxod_podtver_button
			// 
			this->vxod_podtver_button->Location = System::Drawing::Point(142, 166);
			this->vxod_podtver_button->Name = L"vxod_podtver_button";
			this->vxod_podtver_button->Size = System::Drawing::Size(75, 23);
			this->vxod_podtver_button->TabIndex = 5;
			this->vxod_podtver_button->Text = L"����";
			this->vxod_podtver_button->UseVisualStyleBackColor = true;
			this->vxod_podtver_button->Visible = false;
			this->vxod_podtver_button->Click += gcnew System::EventHandler(this, &MyForm::vxod_podtver_button_Click);
			// 
			// vxod_name_textbox
			// 
			this->vxod_name_textbox->Location = System::Drawing::Point(129, 81);
			this->vxod_name_textbox->Name = L"vxod_name_textbox";
			this->vxod_name_textbox->Size = System::Drawing::Size(100, 22);
			this->vxod_name_textbox->TabIndex = 6;
			this->vxod_name_textbox->Visible = false;
			this->vxod_name_textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::vxod_name_textbox_MouseClick);
			// 
			// vxod_parol_textbox
			// 
			this->vxod_parol_textbox->Location = System::Drawing::Point(129, 123);
			this->vxod_parol_textbox->Name = L"vxod_parol_textbox";
			this->vxod_parol_textbox->Size = System::Drawing::Size(100, 22);
			this->vxod_parol_textbox->TabIndex = 7;
			this->vxod_parol_textbox->Visible = false;
			this->vxod_parol_textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::vxod_parol_textbox_MouseClick);
			// 
			// vxod_labbel
			// 
			this->vxod_labbel->AutoSize = true;
			this->vxod_labbel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vxod_labbel->Location = System::Drawing::Point(55, 40);
			this->vxod_labbel->Name = L"vxod_labbel";
			this->vxod_labbel->Size = System::Drawing::Size(265, 22);
			this->vxod_labbel->TabIndex = 8;
			this->vxod_labbel->Text = L"������� ������ ��� �����";
			this->vxod_labbel->Visible = false;
			// 
			// back_button
			// 
			this->back_button->Location = System::Drawing::Point(17, 259);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(75, 23);
			this->back_button->TabIndex = 9;
			this->back_button->Text = L"�����";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Visible = false;
			this->back_button->Click += gcnew System::EventHandler(this, &MyForm::back_button_Click);
			// 
			// registr_name_textbox
			// 
			this->registr_name_textbox->Location = System::Drawing::Point(129, 95);
			this->registr_name_textbox->Name = L"registr_name_textbox";
			this->registr_name_textbox->Size = System::Drawing::Size(100, 22);
			this->registr_name_textbox->TabIndex = 10;
			this->registr_name_textbox->Visible = false;
			this->registr_name_textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::registr_name_textbox_MouseClick);
			// 
			// registr_parol_textbox
			// 
			this->registr_parol_textbox->Location = System::Drawing::Point(129, 138);
			this->registr_parol_textbox->Name = L"registr_parol_textbox";
			this->registr_parol_textbox->Size = System::Drawing::Size(100, 22);
			this->registr_parol_textbox->TabIndex = 11;
			this->registr_parol_textbox->Visible = false;
			this->registr_parol_textbox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::registr_parol_textbox_MouseClick);
			// 
			// registr_podtver_button
			// 
			this->registr_podtver_button->Location = System::Drawing::Point(129, 195);
			this->registr_podtver_button->Name = L"registr_podtver_button";
			this->registr_podtver_button->Size = System::Drawing::Size(106, 23);
			this->registr_podtver_button->TabIndex = 12;
			this->registr_podtver_button->Text = L"�����������";
			this->registr_podtver_button->UseVisualStyleBackColor = true;
			this->registr_podtver_button->Visible = false;
			this->registr_podtver_button->Click += gcnew System::EventHandler(this, &MyForm::registr_podtver_button_Click);
			// 
			// registr_label
			// 
			this->registr_label->AutoSize = true;
			this->registr_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->registr_label->Location = System::Drawing::Point(32, 56);
			this->registr_label->Name = L"registr_label";
			this->registr_label->Size = System::Drawing::Size(326, 22);
			this->registr_label->TabIndex = 13;
			this->registr_label->Text = L"������� ������ ��� �����������";
			this->registr_label->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(402, 28);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->toolStripMenuItem1, this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(56, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->toolStripMenuItem1->Text = L"������";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// neprav_labbel
			// 
			this->neprav_labbel->AutoSize = true;
			this->neprav_labbel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->neprav_labbel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->neprav_labbel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->neprav_labbel->Location = System::Drawing::Point(98, 231);
			this->neprav_labbel->Name = L"neprav_labbel";
			this->neprav_labbel->Size = System::Drawing::Size(242, 25);
			this->neprav_labbel->TabIndex = 15;
			this->neprav_labbel->Text = L"�� ���������� ������";
			this->neprav_labbel->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 294);
			this->Controls->Add(this->neprav_labbel);
			this->Controls->Add(this->registr_label);
			this->Controls->Add(this->registr_podtver_button);
			this->Controls->Add(this->registr_parol_textbox);
			this->Controls->Add(this->registr_name_textbox);
			this->Controls->Add(this->back_button);
			this->Controls->Add(this->vxod_labbel);
			this->Controls->Add(this->vxod_parol_textbox);
			this->Controls->Add(this->vxod_name_textbox);
			this->Controls->Add(this->vxod_podtver_button);
			this->Controls->Add(this->registr_button);
			this->Controls->Add(this->vxod_button);
			this->Controls->Add(this->perv_label);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"���� �����������";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool yellow = false;
		bool red = false;
		bool green = false;
		bool ru = true;
		bool bel = false;
		bool angl = false;
		String^password;
		String^ login;
		String^ s(string a)
		{
			string str = a;
			String^ str3 = gcnew String(str.c_str());
			return str3;
		}
		string MarshalString(String^ s, string& os)
		{
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s).ToPointer());
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
			return os;
		}
	private: System::Void vxod_button_Click(System::Object^ sender, System::EventArgs^ e) {
		perv_label->Visible = false;
		registr_button->Visible = false;
		vxod_button->Visible = false;
		vxod_name_textbox -> Visible = true;
		vxod_parol_textbox->Visible = true;
		vxod_podtver_button->Visible = true;
		
		vxod_labbel->Visible = true;
		back_button->Visible = true;
	}
	private: System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e) {
		vxod_labbel -> Visible = false;
		vxod_name_textbox->Visible = false;
		vxod_parol_textbox->Visible = false;
		vxod_podtver_button->Visible = false;
		perv_label->Visible = true;
		vxod_button->Visible = true;
		registr_button->Visible = true;
		back_button->Visible = false;
		registr_name_textbox->Visible = false;
		registr_parol_textbox->Visible = false;
		registr_podtver_button->Visible = false;
		registr_label->Visible = false;
	}
private: System::Void registr_button_Click(System::Object^ sender, System::EventArgs^ e) {
	perv_label->Visible = false;
	registr_button->Visible = false;
	vxod_button->Visible = false;
	back_button->Visible = true;
	registr_name_textbox->Visible = true;
	registr_parol_textbox->Visible = true;
	registr_podtver_button->Visible = true;
	registr_label->Visible = true;
	
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	vxod_name_textbox->Text = "���";
	vxod_parol_textbox->Text = "������";
	registr_name_textbox->Text = "���";
	registr_parol_textbox->Text = "������";
}

private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	����ToolStripMenuItem->Text = "Language";
	perv_label->Text = "Welcome choose next steps";
	vxod_labbel->Text = "Select login information";
	registr_label->Text = "Select registration details";
	vxod_button->Text = "Entrance";
	registr_button->Text = "Registration";
	back_button->Text = "back";
	registr_name_textbox->Text = "Nick";
	registr_parol_textbox->Text = "login";
	vxod_name_textbox->Text = "Nick";
	vxod_parol_textbox->Text = "login";
	vxod_podtver_button->Text = "Entrance";
	registr_podtver_button->Text = "Registration";
	angl = true;
	ru = false;
	bel = false;
	Text = "Registration Window";
	����ToolStripMenuItem->Text = "Color";
	�������ToolStripMenuItem->Text = "Red";
	toolStripMenuItem1->Text = "Yellow";
	�������ToolStripMenuItem->Text="Green";
    
}

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	����ToolStripMenuItem->Text = "����";
	perv_label->Text = "����� ����������\n�������� ���������� ��������";
	vxod_labbel->Text = "������� ������ ��� �����";
	registr_label->Text = "������� ������ ��� �����������";
	vxod_button->Text = "����";
	registr_button->Text = "�����������";
	back_button->Text = "�����";
	vxod_name_textbox->Text = "���";
	vxod_parol_textbox->Text = "������";
	registr_name_textbox->Text = "���";
	registr_parol_textbox->Text = "������";
	vxod_podtver_button->Text = "����";
	registr_podtver_button->Text = "�����������";
	ru = true;
	angl = false;
	bel = false;
	Text = "���� �����������";
	����ToolStripMenuItem->Text = "����";
	�������ToolStripMenuItem->Text = "�������";
	toolStripMenuItem1->Text = "������";
	�������ToolStripMenuItem->Text = "�������";
	
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	����ToolStripMenuItem->Text = "����";
	perv_label->Text = "�������� ��������� \n�������� �������� �������";
	vxod_labbel->Text = "������� �������� ��� �������";
	registr_label->Text = "������� �������� ��� ����������";
	vxod_button->Text = "������";
	registr_button->Text = "����������";
	back_button->Text = "�����";
	vxod_name_textbox->Text = "ͳ�";
	vxod_parol_textbox->Text = "������";
	registr_name_textbox->Text = "ͳ�";
	registr_parol_textbox->Text = "������";
	vxod_podtver_button->Text = "������";
	registr_podtver_button->Text = "����������";
	bel = true;
	ru = false;
	angl = false;
	Text = "���� �����������";
	����ToolStripMenuItem->Text = "�����";
	�������ToolStripMenuItem->Text = "�������";
	toolStripMenuItem1->Text = "����";
	�������ToolStripMenuItem->Text = "������";
}

private: System::Void vxod_podtver_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
	login = vxod_name_textbox->Text;
	password = vxod_parol_textbox->Text;
	fstream f("C:\\Users\\Admin\\Desktop\\cours\\o.txt", ios::in);
	if (!f)
	{
		if (ru == true)
		{
			MessageBox::Show("�� ������� ����� :(", "������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if(bel==true)
		{
			MessageBox::Show("�� ���������� ������� :(", "�������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (angl == true)
		{
			MessageBox::Show("Failed to log in :(", "Mistake!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	else
	{
		string a;
		string b;
		bool c = true;
		f >> a;
		f >> b;
		while (!f.eof())
		{
			if (s(a) == password && s(b) == login)
			{
				if (ru == true)
				{
					MessageBox::Show("����� ����������, " + login + " :)", "���� ��������!", MessageBoxButtons::OK);
					c = false;
					MyForm2^ f = gcnew MyForm2(ru,angl,bel, red, yellow, green);
					f->Show();
					this->Visible = false;
					break;
					
				}
				else if (bel == true)
				{
					MessageBox::Show("³���, " + login + " :)", "������ ��������!", MessageBoxButtons::OK);
					c = false;
					MyForm2^ f = gcnew MyForm2(ru, angl, bel,red,yellow,green);
					f->Show();
					this->Visible = false;
					break;
				}
				else if (angl == true)
				{
					MessageBox::Show("Welcome, " + login + " :)", "The login is completed!", MessageBoxButtons::OK);
					c = false;
					MyForm2^ f = gcnew MyForm2(ru, angl, bel, red, yellow, green);
					f->Show();
					this->Visible = false;
					break;
				}
			}
			f >> a;
			f >> b;
		}
		if (c == true)
		{
			if (ru == true)
			{
				MessageBox::Show("�������� ����� ��� ������ ", "���� �� ��������!", MessageBoxButtons::OK);
			}
			else if (bel == true)
			{
				MessageBox::Show("���������� ���� ��� ������ ", "������ �� ��������!", MessageBoxButtons::OK);
			}
			else if (angl == true)
			{
				MessageBox::Show("Incorrect username or password ", "The login has not been completed!", MessageBoxButtons::OK);
			}
		}
		
		f.close();
	}

}

private: System::Void registr_podtver_button_Click(System::Object^ sender, System::EventArgs^ e) {
	
		string a, v;
		string b, j;
		login = registr_name_textbox->Text;
		password = registr_parol_textbox->Text;
		a = MarshalString(login, a);
		b = MarshalString(password, b);
		fstream f("C:\\Users\\Admin\\Desktop\\cours\\o.txt", ios::in);
		if (!f)
		{
			if (ru == true)
			{
				MessageBox::Show("�� ������� ������� ������� ������ :(", "������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (bel == true)
			{
				MessageBox::Show("�� ���������� �������� ������ ���� :(", "�������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (angl == true)
			{
				MessageBox::Show("Failed to create an account :(", "Mistake!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		bool c = true;
		while (!f.eof())
		{
			f >> v;
			f >> j;
			if (v == b && j == a)
			{
				if (ru == true)
				{
					MessageBox::Show("����� ������������ ��� ���� " + " :(", "����������� �� ���������!", MessageBoxButtons::OK);
					c = false;
					break;
				}
				else if (bel == true)
				{
					MessageBox::Show("��� ����������� ��� ���� " + " :(", "���������� �� ��������!", MessageBoxButtons::OK);
					c = false;
					break;
				}
				else if (angl == true)
				{
					MessageBox::Show("There is already such a user " + " :(", "Registration failed!", MessageBoxButtons::OK);
					c = false;
					break;
				}
			}
		}
		f.close();
		if (c == true)
		{
			if (ru == true)
			{
				f.open("C:\\Users\\Admin\\Desktop\\cours\\o.txt", ios::out | ios::app);
				f << b << ' ' << a << endl;
				f.close();
				MessageBox::Show("����� ����������, " + login + " :)", "����������� ���������!", MessageBoxButtons::OK);
			}
			else if (bel == true)
			{
				f.open("C:\\Users\\Admin\\Desktop\\cours\\o.txt", ios::out | ios::app);
				f << b << ' ' << a << endl;
				f.close();
				MessageBox::Show("�������� ����������, " + login + " :)", "���������� ��������!", MessageBoxButtons::OK);
			}
			else if (angl == true)
			{
				f.open("C:\\Users\\Admin\\Desktop\\cours\\o.txt", ios::out | ios::app);
				f << b << ' ' << a << endl;
				f.close();
				MessageBox::Show("Welcome, " + login + " :)", "Registration is completed!", MessageBoxButtons::OK);
			}
		}
	}

private: System::Void registr_name_textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	registr_name_textbox->Text = "";
}
   
private: System::Void registr_parol_textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	registr_parol_textbox->Text = "";
}
private: System::Void vxod_parol_textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	vxod_parol_textbox->Text = "";
}
private: System::Void vxod_name_textbox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	vxod_name_textbox->Text = "";
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	red = true;
	yellow = false;
	green = false;
	this->BackColor = Color::Red;
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	red = false;
	yellow = true;
	green = false;
	this->BackColor = Color::Yellow;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	red = false;
	yellow = false;
	green = true;
	this->BackColor = Color::Green;
}
};
}
