#pragma once
#include <cstdlib>
namespace Kyrsovay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// ������ ��� MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(bool ru, bool bel, bool angl, bool red, bool yellow, bool green)
		{

			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			vertices = gcnew List<Point>(); //������� ����� ����������� ������ ���� List<Point> � ����������� ��� ���������� vertices
			edges = gcnew List<Edge>();//������� ����� ����������� ������ ����  List<Edge>  � ����������� ��� ���������� edges
			Random^ rnd = gcnew Random();
			currentMST = gcnew List<Edge>();
			this->rus = ru;
			this->bel = bel;
			this->angl = angl;
			this->red = red;
			this->yellow = yellow;
			this->green = green;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		bool angl;
		bool rus;
		bool bel;
		bool yellow;
		bool red;
		bool green;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(561, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 336);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(6, 133);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(183, 23);
			this->button7->TabIndex = 12;
			this->button7->Text = L"�� ������";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 191);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(183, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"������� ����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 162);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(183, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"��������� ����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(52, 105);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(33, 22);
			this->textBox1->TabIndex = 7;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 278);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(188, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"���������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"�������� �������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"��� �� ������ ��������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 307);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"�������� ��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm2::button2_MouseClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(543, 318);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::pictureBox1_Paint);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->����ToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(773, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����������ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->toolStripMenuItem1
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::����������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::�����������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->toolStripMenuItem1->Text = L"�������";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm2::toolStripMenuItem1_Click);
			// 
			// ����ToolStripMenuItem1
			// 
			this->����ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->����ToolStripMenuItem1->Name = L"����ToolStripMenuItem1";
			this->����ToolStripMenuItem1->Size = System::Drawing::Size(56, 24);
			this->����ToolStripMenuItem1->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::�������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::������ToolStripMenuItem_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 360);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm2";
			this->Text = L"Graph Kyrsach";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm2::MyForm2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
		public:
			value struct Edge
			{
				int u, v; 
				int weight; 
			};
			List<Point>^ vertices;//���� ������ ������������ ��� �������� ������ (�����) ����� ��� ������ �������������� ���������. ������ ������� ������ ������������ ����� ������ ���� Point, ������� �������� ���������� X � Y.
			List<Edge>^ edges;//���� ������ ������������ ��� �������� ����� �����. ������ ������� ������ ������������ ����� ������ ���� Edge
			List<int>^ parent;//���� ������,������������ � ��������� �����������-������ (union-find) ��� ������������� ������������ ������ ��������� ���������. ������ ������� � ���� ������ ��������� �� ������������ ������� �������� �������� � ������ ��������.
			List<int>^ rank;//���� ������ ����� ������������ � ��������� �����������-������ ��� ������������� ����� (������) ��������, ��� �������� �������������� �������� ����������� (union) ����� ������������� �������� ������ � ����� �������� ������.

			void MakeSet(int n) {
				// ������� ����� ������ ��� �������� ��������� ������� ��������
				parent = gcnew List<int>();

				// ������� ����� ������ ��� �������� ������ (�������) ������� ��������
				rank = gcnew List<int>();

				// ��������� �� 0 �� n-1, ����� ���������������� ������ ������� ���������
				for (int i = 0; i < n; i++) {
					// �������������, ��� ������ ������� �������� ����� ����������� ���������
					parent->Add(i);

					// ������������� ��������� ���� (�������) ������� �������� ������ 0
					rank->Add(0);
				}
			}


			int Find(int u) {
				if (parent[u] != u)
					parent[u] = Find(parent[u]); // ���������� ������� ������ � ������ ������ ����
				return parent[u]; // ���������� ������ ���������
			}

			void Union(int u, int v) {
				int rootU = Find(u); // ������� ������ ��������� ��� u
				int rootV = Find(v); // ������� ������ ��������� ��� v
				if (rootU != rootV) { // ���� ����� ������, ���������� ���������
					if (rank[rootU] > rank[rootV])
						parent[rootV] = rootU; // ������������ ������� ������ � ��������
					else if (rank[rootU] < rank[rootV])
						parent[rootU] = rootV; // ������������ ������� ������ � ��������
					else {
						parent[rootV] = rootU; // ������������ ���� ������ � ������� � ����������� ����
						rank[rootU]++;
					}
				}
			}

			static int CompareEdges(Edge a, Edge b) {
				return a.weight - b.weight; // ���������� ���� ���� �����
			}

			int vertexNumber = 1;//��������� � ������ ������ ������ ���������
			void RedrawVerticesAndEdges(Graphics^ g) { //��� ������� ������ ������� � ����� ����� �� ����������� ���������.
				if (g == nullptr)
					return;

				g->Clear(Color::White);
				g->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

				SolidBrush^ brush = gcnew SolidBrush(Color::Yellow);
				Pen^ pen = gcnew Pen(brush, 2);
				System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 8);
				StringFormat^ format = gcnew StringFormat();
				format->Alignment = StringAlignment::Center;
				format->LineAlignment = StringAlignment::Center;

				// ������ �������
				for (int i = 0; i < vertices->Count; i++) {
					Point p = vertices[i];
					g->DrawEllipse(pen, p.X - 10, p.Y - 10, 20, 20);
					g->FillEllipse(brush, p.X - 10, p.Y - 10, 20, 20);
					g->DrawString((i + 1).ToString(), font, Brushes::Black, System::Drawing::Rectangle(p.X - 10, p.Y - 10, 20, 20), format);
				}

				// ������ ����
				pen->Color = Color::Black;
				for each (Edge edge in edges) {
					Point p1 = vertices[edge.u];
					Point p2 = vertices[edge.v];

					double dx = p2.X - p1.X;
					double dy = p2.Y - p1.Y;
					double length = Math::Sqrt(dx * dx + dy * dy);

					double radius = 10;
					Point adjP1 = Point((int)(p1.X + radius * dx / length), (int)(p1.Y + radius * dy / length));
					Point adjP2 = Point((int)(p2.X - radius * dx / length), (int)(p2.Y - radius * dy / length));

					g->DrawLine(pen, adjP1, adjP2);

					int textX = (adjP1.X + adjP2.X) / 2;
					int textY = (adjP1.Y + adjP2.Y) / 2;

					g->DrawString(edge.weight.ToString(), font, Brushes::Blue, textX, textY);
				}

				// ������ ���� �������� MST ������� ������
				pen->Color = Color::Red;
				for each (Edge edge in currentMST) {
					Point p1 = vertices[edge.u];
					Point p2 = vertices[edge.v];
					g->DrawLine(pen, p1, p2);
				}

				delete brush;
				delete pen;
				delete font;
				delete format;
			}
			
	
			List<Edge>^ previousMST = gcnew List<Edge>();
			List<Edge>^ currentMST;
private: System::Void button2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	MakeSet(vertices->Count);
	List<Edge>^ mst = gcnew List<Edge>();

	edges->Sort(gcnew Comparison<Edge>(CompareEdges));

	for each (Edge edge in edges) {
		if (Find(edge.u) != Find(edge.v)) {
			mst->Add(edge);
			Union(edge.u, edge.v);
			if (mst->Count == vertices->Count - 1)
				break;
		}
	}

	currentMST = mst;

	System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();
	for each (Edge edge in mst) {
		result->AppendFormat("({0}, {1}) -> {2}\n", edge.u + 1, edge.v + 1, edge.weight);
	}
	label1->Text = result->ToString();

	Graphics^ g = pictureBox1->CreateGraphics();
	RedrawVerticesAndEdges(g);

	Pen^ pen = gcnew Pen(Color::Red, 2);
	for each (Edge edge in mst) {
		Point p1 = vertices[edge.u];
		Point p2 = vertices[edge.v];
		g->DrawLine(pen, p1, p2);
	}

	delete pen;
	delete g;
		   
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//��������� ����������
	int x = rand() % (pictureBox1->Width - 20); //
	int y = rand() % (pictureBox1->Height - 20);//����� ������� ���������� ����� �������.

	Graphics^ g = pictureBox1->CreateGraphics();
	g->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

	SolidBrush^ brush = gcnew SolidBrush(Color::Yellow);//�������� �����
	Pen^ pen = gcnew Pen(brush, 2);//�������� ����
	g->DrawEllipse(pen, x, y, 20, 20);//��������� ������� ������� � ������� � (x, y) � ��������� 20x20 ��������.
	g->FillEllipse(brush, x, y, 20, 20);//

	//��������� ����� �������
	String^ vertexLabel = (vertices->Count + 1).ToString();//��������  ����� ����� �������
	System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 8);
	StringFormat^ format = gcnew StringFormat();
	format->Alignment = StringAlignment::Center;
	format->LineAlignment = StringAlignment::Center;
	g->DrawString(vertexLabel, font, Brushes::Black, System::Drawing::Rectangle(x, y, 20, 20), format);

	vertices->Add(Point(x, y));//���������� ����� �������

	delete brush;    //
	delete pen;      //
	delete font;     //+ ������
	delete format;   //
	delete g;        //
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int v1, v2;
	if (Int32::TryParse(textBox1->Text, v1) && Int32::TryParse(textBox2->Text, v2)) { //������� ������������� ����� �� textBox1 � textBox2 � ����� �����
		v1--; //
		v2--; // ���������� ������� ������ �� 1 ��� �������� �� 1-���������� � 0-����������.

		if (v1 >= 0 && v1 < vertices->Count && v2 >= 0 && v2 < vertices->Count && v1 != v2) { //��������, ��� ������ ������ ��������� � ���������� �������� � �� ����� ���� �����.
		
				Graphics^ g = pictureBox1->CreateGraphics();
				g->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;
				Pen^ pen = gcnew Pen(Color::Black, 2);

				Point p1 = vertices[v1];//
				Point p2 = vertices[v2];//��������� ��������� ������ 


				double dx = p2.X - p1.X;//���������� ������� �� X � Y ����� ����� ���������.
				double dy = p2.Y - p1.Y;
				double length = Math::Sqrt(dx * dx + dy * dy);//���������� ���������� ����� ���������.


				double radius = 10;
				Point adjP1 = Point((int)(p1.X + radius * dx / length) + 10, (int)(p1.Y + radius * dy / length) + 10);//���������� ����� ��������� ��� ��������� �����, ����� �� ���������� �����, �������������� �������.
				Point adjP2 = Point((int)(p2.X - radius * dx / length) + 10, (int)(p2.Y - radius * dy / length) + 10);


				g->DrawLine(pen, adjP1, adjP2);//��������� ����� ����� ���������� �������


				Random^ rnd = gcnew Random();
				int edgeWeight = rnd->Next(1, 11);  //��������� ���������� ���� ����� �� 1 �� 10.


				int textX = (adjP1.X + adjP2.X) / 2;//���� �������� � ����� � ������� ���� ���
				int textY = (adjP1.Y + adjP2.Y) / 2;


				System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 10);
				g->DrawString(edgeWeight.ToString(), font, Brushes::Blue, textX, textY);//��������� ������ � �����


				edges->Add(Edge{ v1, v2, edgeWeight });//���������� ������ ����� � ������

				delete g;  //
				delete pen;//+ ������
				delete font;//
			
		}
		else {
			MessageBox::Show("�������� ������ ������ ��� ���� � �� �� �������. ������� ������ ���������� ������ ������.");
		}
	}
	else {
		MessageBox::Show("������� ���������� ����� ��� ����� ������.");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	vertices->Clear();
	edges->Clear();

	
	if (pictureBox1->Image != nullptr) {
		delete pictureBox1->Image;
		pictureBox1->Image = nullptr;
	}
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	graphics->Clear(Color::White);
	delete graphics;

	
	label1->Text = "";
}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	RedrawVerticesAndEdges(e->Graphics);
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "PNG Image|*.png";//��������� �������, ����� ��������� ���������� ������ � ������� PNG.
	saveFileDialog->Title = "Save an Image File";//��������� ��������� ������� ����������.
	saveFileDialog->ShowDialog();//����������� ������� ���������� � �������� ������ ������������� ���� � ����� �����.
	
	if (saveFileDialog->FileName != "") {
		// ���� ��� ����� � ������� ���������� �� ������ (�� ���� ������������ ������ ��� ���� ��� �����)

		Bitmap^ bitmap = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		// ������� ����� ������ Bitmap � ��������� PictureBox (������ � ������ PictureBox1)

		pictureBox1->DrawToBitmap(bitmap, System::Drawing::Rectangle(0, 0, pictureBox1->Width, pictureBox1->Height));
		// ������ ���������� PictureBox1 �� ��������� Bitmap � ��������������, ������������ ��� ��� �������

		bitmap->Save(saveFileDialog->FileName);
		// ��������� ����������� Bitmap � ���� � ������, ��������� � ������� ����������


		String^ dataFileName = System::IO::Path::ChangeExtension(saveFileDialog->FileName, ".txt");
		// ������ ���������� ����� ����� �� .txt, ����� ������� ���� ��� �������� ������ � �������� � ������

		System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(dataFileName);
		// ������� ������ StreamWriter ��� ������ ��������� ������ � ����� ���� � ����������� .txt

		writer->WriteLine(vertices->Count);
		// ���������� ���������� ������ � ������ ������ �����

		for each (Point vertex in vertices) {
			writer->WriteLine("{0} {1}", vertex.X, vertex.Y);
			// ��� ������ ������� ���������� �� ���������� (X � Y) � ��������� ������
		}

		writer->WriteLine(edges->Count);
		// ���������� ���������� ����� � ��������� ������ �����

		for each (Edge edge in edges) {
			writer->WriteLine("{0} {1} {2}", edge.u, edge.v, edge.weight);
			// ��� ������� ����� ���������� ��� ��������� (��������� ������� u, �������� ������� v � ��� weight) � ��������� ������
		}

		writer->Close();
		// ��������� StreamWriter, ����� ��������� ��� ������ � ����
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	// ������� ����� ������ OpenFileDialog ��� ������ ����� �����������

	openFileDialog->Filter = "PNG Image|*.png";
	// ������������� ������ ��� ������� �������� ������, ����� �� ��������� ������ ����� � ����������� .png

	openFileDialog->Title = "Open an Image File";
	// ������������� ��������� ��� ������� �������� ������

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// ���� ������������ ����� ������ "OK" � ������� �������� �����

		if (openFileDialog->FileName != "") {
			// ���� ��� ����� �� ������ (�� ���� ������������ ������ ����)

			button1_Click(sender, e);
			// ��������� ����� button1_Click, ������� ������� PictureBox 

			pictureBox1->Image = gcnew Bitmap(openFileDialog->FileName);
			// ��������� ��������� ����������� � PictureBox, �������� ����� ������ Bitmap �� �����

			String^ dataFileName = System::IO::Path::ChangeExtension(openFileDialog->FileName, ".txt");
			// ������� ��� ����� ������, ������� ���������� ���������� ����� �� .txt

			if (System::IO::File::Exists(dataFileName)) {
				// ���������, ���������� �� ���� � ������� (� ����� �� ������, �� � ����������� .txt)

				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(dataFileName);
				// ������� ������ StreamReader ��� ������ ������ �� �����

				vertices->Clear();
				// ������� ������ ������

				int vertexCount = Int32::Parse(reader->ReadLine());
				// ��������� ���������� ������ �� ������ ������ �����

				for (int i = 0; i < vertexCount; i++) {
					array<String^>^ parts = reader->ReadLine()->Split(' ');
					// ��������� ������ � ������������ ������� � ��������� �� �� ����� (X � Y)

					int x = Int32::Parse(parts[0]);
					// ������ ���������� X

					int y = Int32::Parse(parts[1]);
					// ������ ���������� Y

					vertices->Add(Point(x, y));
					// ��������� ������� � ������������ (x, y) � ������ ������
				}

				edges->Clear();
				// ������� ������ �����

				int edgeCount = Int32::Parse(reader->ReadLine());
				// ��������� ���������� ����� �� ��������� ������ �����

				for (int i = 0; i < edgeCount; i++) {
					array<String^>^ parts = reader->ReadLine()->Split(' ');
					// ��������� ������ � ����������� ����� � ��������� �� �� ����� (u, v � weight)

					int u = Int32::Parse(parts[0]);
					// ������ ��������� ������� ����� u

					int v = Int32::Parse(parts[1]);
					// ������ �������� ������� ����� v

					int weight = Int32::Parse(parts[2]);
					// ������ ��� ����� weight

					Edge edge;
					edge.u = u;
					edge.v = v;
					edge.weight = weight;
					// ������� ������ Edge � ��������� ��� ���������

					edges->Add(edge);
					// ��������� ����� � ������ �����
				}

				reader->Close();
				// ��������� StreamReader, �������� ������ ������ �� �����

				Graphics^ g = pictureBox1->CreateGraphics();
				// ������� ������ Graphics ��� ��������� �� PictureBox

				RedrawVerticesAndEdges(g);
				// �������������� ������� � ����� �� PictureBox � �������������� ������ RedrawVerticesAndEdges

				delete g;
				// ������� ������ Graphics ����� ���������� ���������
			}
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (rus == true)
	{
		MessageBox::Show("����������\n ��� ������������?\n ������ �������� ������� - ������� �� ��������� ����� ������� � ����������\n ������ ��������� ���� - ��������� ���� ��� ���������\n ������ ������� ���� - ��������� ��������� �������� � ����� � ��� ��������\n ������ �������� - ��������� ������� �����\n ������ ��������� - ��������� ������� ������� ������������ �� �������\n ������ �������� �������� - ������������ ����������� ��� ������ ������� �� ������� ����� ", "�����");
	}
	else if(angl==true)
	{
		MessageBox::Show("Maskalkov\n How to use it?\n The Add vertex button - creates a numbered vertex at a random place\n The Save graph button - Saves the graph as an image\n The Open graph button - allows you to upload an image and also work with it\n The Clear button - completely cleans the canvas\n The Connect button - connects the vertices that we created safely\n The Algorithm button Kraskala - calculates the minimum weight of the vertices that we made earlier", "Author");
	}
	else if (bel == true)
	{
		MessageBox::Show("���������, �� ����� ����������?\n ������ ������ �������-������� �������������� ������� � ��������� ����� \n ������ �������� ������-������� ������ � �������� ������� \n ������ ������� ������-�������� ��������� �������, � ������� ��������� � �� \n ������ ��������-������ ������� ������� \n ������ ���������� ������-�������� ������ ������, ��� �� ������� \n ������ ��������� ��������-������ �������� ���� ��������, ��� �� ������� �����", "�����");
	}
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	angl = true;
	bel = false;
	rus = false;
	button1->Text = "Clear";
	button2->Text = "Algorithm Kraskal";
	button3->Text = "Add Verticle";
	button4->Text = "Connect";
	button5->Text = "Save graph";
	button6->Text = "Open graph";
	button7->Text = "About Author";
	label2->Text = "Weight method about Kraskal";
	����ToolStripMenuItem->Text = "Language";
	����������ToolStripMenuItem->Text = "English";
	�����������ToolStripMenuItem->Text = "Belorussian";
	toolStripMenuItem1->Text = "Russian";
	����ToolStripMenuItem1->Text = "Color";
	�������ToolStripMenuItem->Text = "Red";
	�������ToolStripMenuItem->Text = "Green";
	������ToolStripMenuItem->Text = "Yellow";
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	angl = false;
	bel = true;
	rus = false;
	button1->Text = "��������";
	button2->Text = "�������� ��������";
	button3->Text = "������ �������";
	button4->Text = "������";
	button5->Text = "�������� ����";
	button6->Text = "������� ����";
	button7->Text = "��� ������";
	label2->Text = "���� �� ������� ��������";
	����ToolStripMenuItem->Text = "����";
	����������ToolStripMenuItem->Text = "���������";
	�����������ToolStripMenuItem->Text = "���������";
	toolStripMenuItem1->Text = "����";
	����ToolStripMenuItem1->Text = "�����";
	�������ToolStripMenuItem->Text = "�������";
	�������ToolStripMenuItem->Text = "�����";
	������ToolStripMenuItem->Text = "����";
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	angl = false;
	bel = false;
	rus = true;
	button1->Text = "��������";
	button2->Text = "�������� ��������";
	button3->Text = "�������� �������";
	button4->Text = "��������";
	button5->Text = "��������� ����";
	button6->Text = "������� ����";
	button7->Text = "��� ������";
	label2->Text = "��� �� ������ ��������";
	����ToolStripMenuItem->Text = "����";
	����������ToolStripMenuItem->Text = "���������";
	�����������ToolStripMenuItem->Text = "�����������";
	toolStripMenuItem1->Text = "�������";
	����ToolStripMenuItem1->Text = "����";
	�������ToolStripMenuItem->Text = "�������";
	�������ToolStripMenuItem->Text = "�������";
	������ToolStripMenuItem->Text = "������";
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	yellow = false;
	red = false;
	green = true;
	this->BackColor = Color::Green;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	yellow = false;
	red = true;
	green = false;
	this->BackColor = Color::Red;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	 yellow=true;
	 red=false;
	 green=false;
	this->BackColor = Color::Yellow;
}
private: System::Void MyForm2_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	if (rus == true)
	{
		button1->Text = "��������";
		button2->Text = "�������� ��������";
		button3->Text = "�������� �������";
		button4->Text = "��������";
		button5->Text = "��������� ����";
		button6->Text = "������� ����";
		button7->Text = "��� ������";
		label2->Text = "��� �� ������ ��������";
		����ToolStripMenuItem->Text = "����";
		����������ToolStripMenuItem->Text = "���������";
		�����������ToolStripMenuItem->Text = "�����������";
		toolStripMenuItem1->Text = "�������";
		����ToolStripMenuItem1->Text = "����";
		�������ToolStripMenuItem->Text = "�������";
		�������ToolStripMenuItem->Text = "�������";
		������ToolStripMenuItem->Text = "������";
	}
	else if (angl == true)
	{
		button1->Text = "��������";
		button2->Text = "�������� ��������";
		button3->Text = "������ �������";
		button4->Text = "������";
		button5->Text = "�������� ����";
		button6->Text = "������� ����";
		button7->Text = "��� ������";
		label2->Text = "���� �� ������� ��������";
		����ToolStripMenuItem->Text = "����";
		����������ToolStripMenuItem->Text = "���������";
		�����������ToolStripMenuItem->Text = "���������";
		toolStripMenuItem1->Text = "����";
		����ToolStripMenuItem1->Text = "�����";
		�������ToolStripMenuItem->Text = "�������";
		�������ToolStripMenuItem->Text = "�����";
		������ToolStripMenuItem->Text = "����";
	}
	else if (bel == true)
	{
		button1->Text = "Clear";
		button2->Text = "Algorithm Kraskal";
		button3->Text = "Add Verticle";
		button4->Text = "Connect";
		button5->Text = "Save graph";
		button6->Text = "Open graph";
		button7->Text = "About Author";
		label2->Text = "Weight method about Kraskal";
		����ToolStripMenuItem->Text = "Language";
		����������ToolStripMenuItem->Text = "English";
		�����������ToolStripMenuItem->Text = "Belorussian";
		toolStripMenuItem1->Text = "Russian";
		����ToolStripMenuItem1->Text = "Color";
		�������ToolStripMenuItem->Text = "Red";
		�������ToolStripMenuItem->Text = "Green";
		������ToolStripMenuItem->Text = "Yellow";
	}
	if (yellow == true)
	{
		this->BackColor = Color::Yellow;
	}
	else if (red == true)
	{
		this->BackColor = Color::Red;
	}
	else if (green == true)
	{
		this->BackColor = Color::Green;
	}
}
};
}
