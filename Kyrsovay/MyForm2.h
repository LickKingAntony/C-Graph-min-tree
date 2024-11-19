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
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(bool ru, bool bel, bool angl, bool red, bool yellow, bool green)
		{

			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			vertices = gcnew List<Point>(); //создает новый управляемый объект типа List<Point> и присваивает его переменной vertices
			edges = gcnew List<Edge>();//создает новый управляемый объект типа  List<Edge>  и присваивает его переменной edges
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
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ЯзыкToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ цветToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ красныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ желтыйToolStripMenuItem;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->ЯзыкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белорусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->красныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->желтыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->button7->Text = L"Об Авторе";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 191);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(183, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Открыть граф";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 162);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(183, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Сохранить граф";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Очистить";
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
			this->button4->Text = L"Соединить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Добавить Вершину";
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
			this->label2->Text = L"Вес по методу Краскала";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 307);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Алгоритм Краскала";
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
				this->ЯзыкToolStripMenuItem,
					this->цветToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(773, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ЯзыкToolStripMenuItem
			// 
			this->ЯзыкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->английскийToolStripMenuItem,
					this->белорусскийToolStripMenuItem, this->toolStripMenuItem1
			});
			this->ЯзыкToolStripMenuItem->Name = L"ЯзыкToolStripMenuItem";
			this->ЯзыкToolStripMenuItem->Size = System::Drawing::Size(57, 24);
			this->ЯзыкToolStripMenuItem->Text = L"Язык";
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::английскийToolStripMenuItem_Click);
			// 
			// белорусскийToolStripMenuItem
			// 
			this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->белорусскийToolStripMenuItem->Text = L"Белорусский";
			this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::белорусскийToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->toolStripMenuItem1->Text = L"Русский";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm2::toolStripMenuItem1_Click);
			// 
			// цветToolStripMenuItem1
			// 
			this->цветToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->зеленыйToolStripMenuItem,
					this->красныйToolStripMenuItem, this->желтыйToolStripMenuItem
			});
			this->цветToolStripMenuItem1->Name = L"цветToolStripMenuItem1";
			this->цветToolStripMenuItem1->Size = System::Drawing::Size(56, 24);
			this->цветToolStripMenuItem1->Text = L"Цвет";
			// 
			// зеленыйToolStripMenuItem
			// 
			this->зеленыйToolStripMenuItem->Name = L"зеленыйToolStripMenuItem";
			this->зеленыйToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->зеленыйToolStripMenuItem->Text = L"Зеленый";
			this->зеленыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::зеленыйToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->красныйToolStripMenuItem->Text = L"Красный";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::красныйToolStripMenuItem_Click);
			// 
			// желтыйToolStripMenuItem
			// 
			this->желтыйToolStripMenuItem->Name = L"желтыйToolStripMenuItem";
			this->желтыйToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->желтыйToolStripMenuItem->Text = L"Желтый";
			this->желтыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::желтыйToolStripMenuItem_Click);
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
			List<Point>^ vertices;//Этот список используется для хранения вершин (точек) графа или другой геометрической структуры. Каждый элемент списка представляет собой объект типа Point, который содержит координаты X и Y.
			List<Edge>^ edges;//Этот список используется для хранения ребер графа. Каждый элемент списка представляет собой объект типа Edge
			List<int>^ parent;//Этот список,используется в алгоритме объединения-поиска (union-find) для представления родительских связей элементов множества. Каждый элемент в этом списке указывает на родительский элемент текущего элемента в дереве множеств.
			List<int>^ rank;//Этот список также используется в алгоритме объединения-поиска для представления ранга (высоты) деревьев, что помогает оптимизировать операции объединения (union) путем присоединения меньшего дерева к корню большего дерева.

			void MakeSet(int n) {
				// Создаем новый список для хранения родителей каждого элемента
				parent = gcnew List<int>();

				// Создаем новый список для хранения рангов (глубины) каждого элемента
				rank = gcnew List<int>();

				// Итерируем от 0 до n-1, чтобы инициализировать каждый элемент множества
				for (int i = 0; i < n; i++) {
					// Устанавливаем, что каждый элемент является своим собственным родителем
					parent->Add(i);

					// Устанавливаем начальный ранг (глубину) каждого элемента равным 0
					rank->Add(0);
				}
			}


			int Find(int u) {
				if (parent[u] != u)
					parent[u] = Find(parent[u]); // Рекурсивно находим корень и делаем сжатие пути
				return parent[u]; // Возвращаем корень множества
			}

			void Union(int u, int v) {
				int rootU = Find(u); // Находим корень множества для u
				int rootV = Find(v); // Находим корень множества для v
				if (rootU != rootV) { // Если корни разные, объединяем множества
					if (rank[rootU] > rank[rootV])
						parent[rootV] = rootU; // Присоединяем меньшее дерево к большему
					else if (rank[rootU] < rank[rootV])
						parent[rootU] = rootV; // Присоединяем меньшее дерево к большему
					else {
						parent[rootV] = rootU; // Присоединяем одно дерево к другому и увеличиваем ранг
						rank[rootU]++;
					}
				}
			}

			static int CompareEdges(Edge a, Edge b) {
				return a.weight - b.weight; // Сравниваем веса двух ребер
			}

			int vertexNumber = 1;//Указываем с какого номера пойдет нумирация
			void RedrawVerticesAndEdges(Graphics^ g) { //Эта функция рисует вершины и ребра графа на графическом контексте.
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

				// Рисуем вершины
				for (int i = 0; i < vertices->Count; i++) {
					Point p = vertices[i];
					g->DrawEllipse(pen, p.X - 10, p.Y - 10, 20, 20);
					g->FillEllipse(brush, p.X - 10, p.Y - 10, 20, 20);
					g->DrawString((i + 1).ToString(), font, Brushes::Black, System::Drawing::Rectangle(p.X - 10, p.Y - 10, 20, 20), format);
				}

				// Рисуем рёбра
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

				// Рисуем рёбра текущего MST красным цветом
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
	//Случайные координаты
	int x = rand() % (pictureBox1->Width - 20); //
	int y = rand() % (pictureBox1->Height - 20);//будут хранить координаты новой вершины.

	Graphics^ g = pictureBox1->CreateGraphics();
	g->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;

	SolidBrush^ brush = gcnew SolidBrush(Color::Yellow);//создание кисти
	Pen^ pen = gcnew Pen(brush, 2);//создание пера
	g->DrawEllipse(pen, x, y, 20, 20);//рисование контура эллипса с центром в (x, y) и размерами 20x20 пикселей.
	g->FillEllipse(brush, x, y, 20, 20);//

	//Рисование новой вершины
	String^ vertexLabel = (vertices->Count + 1).ToString();//содержит  номер новой вершины
	System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 8);
	StringFormat^ format = gcnew StringFormat();
	format->Alignment = StringAlignment::Center;
	format->LineAlignment = StringAlignment::Center;
	g->DrawString(vertexLabel, font, Brushes::Black, System::Drawing::Rectangle(x, y, 20, 20), format);

	vertices->Add(Point(x, y));//добавление новой вершины

	delete brush;    //
	delete pen;      //
	delete font;     //+ память
	delete format;   //
	delete g;        //
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int v1, v2;
	if (Int32::TryParse(textBox1->Text, v1) && Int32::TryParse(textBox2->Text, v2)) { //попытка преобразовать текст из textBox1 и textBox2 в целые числа
		v1--; //
		v2--; // уменьшение номеров вершин на 1 для перехода от 1-индексации к 0-индексации.

		if (v1 >= 0 && v1 < vertices->Count && v2 >= 0 && v2 < vertices->Count && v1 != v2) { //Проверка, что номера вершин находятся в допустимых пределах и не равны друг другу.
		
				Graphics^ g = pictureBox1->CreateGraphics();
				g->SmoothingMode = Drawing2D::SmoothingMode::AntiAlias;
				Pen^ pen = gcnew Pen(Color::Black, 2);

				Point p1 = vertices[v1];//
				Point p2 = vertices[v2];//получение координат вершин 


				double dx = p2.X - p1.X;//вычисление разницы по X и Y между двумя вершинами.
				double dy = p2.Y - p1.Y;
				double length = Math::Sqrt(dx * dx + dy * dy);//вычисление расстояния между вершинами.


				double radius = 10;
				Point adjP1 = Point((int)(p1.X + radius * dx / length) + 10, (int)(p1.Y + radius * dy / length) + 10);//вычисление новых координат для рисования линии, чтобы не пересекать круги, представляющие вершины.
				Point adjP2 = Point((int)(p2.X - radius * dx / length) + 10, (int)(p2.Y - radius * dy / length) + 10);


				g->DrawLine(pen, adjP1, adjP2);//рисование линии между смещенными точками


				Random^ rnd = gcnew Random();
				int edgeWeight = rnd->Next(1, 11);  //генерация случайного веса ребра от 1 до 10.


				int textX = (adjP1.X + adjP2.X) / 2;//ищет середину в ребре и наносит туда вес
				int textY = (adjP1.Y + adjP2.Y) / 2;


				System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 10);
				g->DrawString(edgeWeight.ToString(), font, Brushes::Blue, textX, textY);//рисование строки с весом


				edges->Add(Edge{ v1, v2, edgeWeight });//добавление нового ребра в список

				delete g;  //
				delete pen;//+ память
				delete font;//
			
		}
		else {
			MessageBox::Show("Неверные номера вершин или одна и та же вершина. Введите разные допустимые номера вершин.");
		}
	}
	else {
		MessageBox::Show("Введите допустимые числа для обеих вершин.");
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
	saveFileDialog->Filter = "PNG Image|*.png";//установка фильтра, чтобы разрешить сохранение только в формате PNG.
	saveFileDialog->Title = "Save an Image File";//установка заголовка диалога сохранения.
	saveFileDialog->ShowDialog();//отображение диалога сохранения и ожидание выбора пользователем пути и имени файла.
	
	if (saveFileDialog->FileName != "") {
		// Если имя файла в диалоге сохранения не пустое (то есть пользователь выбрал или ввел имя файла)

		Bitmap^ bitmap = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		// Создаем новый объект Bitmap с размерами PictureBox (ширина и высота PictureBox1)

		pictureBox1->DrawToBitmap(bitmap, System::Drawing::Rectangle(0, 0, pictureBox1->Width, pictureBox1->Height));
		// Рисуем содержимое PictureBox1 на созданном Bitmap в прямоугольнике, охватывающем всю его область

		bitmap->Save(saveFileDialog->FileName);
		// Сохраняем изображение Bitmap в файл с именем, выбранным в диалоге сохранения


		String^ dataFileName = System::IO::Path::ChangeExtension(saveFileDialog->FileName, ".txt");
		// Меняем расширение имени файла на .txt, чтобы создать файл для хранения данных о вершинах и ребрах

		System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(dataFileName);
		// Создаем объект StreamWriter для записи текстовых данных в новый файл с расширением .txt

		writer->WriteLine(vertices->Count);
		// Записываем количество вершин в первую строку файла

		for each (Point vertex in vertices) {
			writer->WriteLine("{0} {1}", vertex.X, vertex.Y);
			// Для каждой вершины записываем ее координаты (X и Y) в отдельную строку
		}

		writer->WriteLine(edges->Count);
		// Записываем количество ребер в следующую строку файла

		for each (Edge edge in edges) {
			writer->WriteLine("{0} {1} {2}", edge.u, edge.v, edge.weight);
			// Для каждого ребра записываем его параметры (начальная вершина u, конечная вершина v и вес weight) в отдельную строку
		}

		writer->Close();
		// Закрываем StreamWriter, чтобы сохранить все данные в файл
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	// Создаем новый объект OpenFileDialog для выбора файла изображения

	openFileDialog->Filter = "PNG Image|*.png";
	// Устанавливаем фильтр для диалога открытия файлов, чтобы он отображал только файлы с расширением .png

	openFileDialog->Title = "Open an Image File";
	// Устанавливаем заголовок для диалога открытия файлов

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		// Если пользователь нажал кнопку "OK" в диалоге открытия файла

		if (openFileDialog->FileName != "") {
			// Если имя файла не пустое (то есть пользователь выбрал файл)

			button1_Click(sender, e);
			// Выполняем метод button1_Click, который очищает PictureBox 

			pictureBox1->Image = gcnew Bitmap(openFileDialog->FileName);
			// Загружаем выбранное изображение в PictureBox, создавая новый объект Bitmap из файла

			String^ dataFileName = System::IO::Path::ChangeExtension(openFileDialog->FileName, ".txt");
			// Создаем имя файла данных, изменяя расширение выбранного файла на .txt

			if (System::IO::File::Exists(dataFileName)) {
				// Проверяем, существует ли файл с данными (с таким же именем, но с расширением .txt)

				System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(dataFileName);
				// Создаем объект StreamReader для чтения данных из файла

				vertices->Clear();
				// Очищаем список вершин

				int vertexCount = Int32::Parse(reader->ReadLine());
				// Считываем количество вершин из первой строки файла

				for (int i = 0; i < vertexCount; i++) {
					array<String^>^ parts = reader->ReadLine()->Split(' ');
					// Считываем строку с координатами вершины и разделяем ее на части (X и Y)

					int x = Int32::Parse(parts[0]);
					// Парсим координату X

					int y = Int32::Parse(parts[1]);
					// Парсим координату Y

					vertices->Add(Point(x, y));
					// Добавляем вершину с координатами (x, y) в список вершин
				}

				edges->Clear();
				// Очищаем список ребер

				int edgeCount = Int32::Parse(reader->ReadLine());
				// Считываем количество ребер из следующей строки файла

				for (int i = 0; i < edgeCount; i++) {
					array<String^>^ parts = reader->ReadLine()->Split(' ');
					// Считываем строку с параметрами ребра и разделяем ее на части (u, v и weight)

					int u = Int32::Parse(parts[0]);
					// Парсим начальную вершину ребра u

					int v = Int32::Parse(parts[1]);
					// Парсим конечную вершину ребра v

					int weight = Int32::Parse(parts[2]);
					// Парсим вес ребра weight

					Edge edge;
					edge.u = u;
					edge.v = v;
					edge.weight = weight;
					// Создаем объект Edge и заполняем его параметры

					edges->Add(edge);
					// Добавляем ребро в список ребер
				}

				reader->Close();
				// Закрываем StreamReader, завершая чтение данных из файла

				Graphics^ g = pictureBox1->CreateGraphics();
				// Создаем объект Graphics для рисования на PictureBox

				RedrawVerticesAndEdges(g);
				// Перерисовываем вершины и ребра на PictureBox с использованием метода RedrawVerticesAndEdges

				delete g;
				// Удаляем объект Graphics после завершения рисования
			}
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (rus == true)
	{
		MessageBox::Show("Маскальков\n Как пользоваться?\n Кнопка Добавить вершину - создает на рандомном месте вершину с нумерацией\n Кнопка Сохранить граф - Сохраняет граф как картинкку\n Кнопка Открыть граф - позволяет загрузить картинку а также с ним работать\n Кнопка Очистить - полностью очищает холст\n Кнопка Соединить - соединяет вершины которые благополучно мы создали\n Кнопка Алгоритм Краскала - рассчитывает минимальный вес вершин которые мы сделали ранее ", "Автор");
	}
	else if(angl==true)
	{
		MessageBox::Show("Maskalkov\n How to use it?\n The Add vertex button - creates a numbered vertex at a random place\n The Save graph button - Saves the graph as an image\n The Open graph button - allows you to upload an image and also work with it\n The Clear button - completely cleans the canvas\n The Connect button - connects the vertices that we created safely\n The Algorithm button Kraskala - calculates the minimum weight of the vertices that we made earlier", "Author");
	}
	else if (bel == true)
	{
		MessageBox::Show("Маскалков, як гэтым карыстацца?\n Кнопка Дадаць вяршыню-стварае пранумараваную вяршыню ў адвольным месцы \n Кнопка Захаваць графік-захоўвае графік ў выглядзе малюнка \n Кнопка Адкрыць графік-дазваляе загружаць малюнак, а таксама працаваць з ім \n Кнопка Ачысціць-цалкам ачышчае палатно \n Кнопка падключыць кнопка-надзейна злучае вяршыні, якія мы стварылі \n Кнопка алгарытму Краскала-вылічае мінімальны вага вяршыняў, якія мы стварылі раней", "Аутор");
	}
}
private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
	ЯзыкToolStripMenuItem->Text = "Language";
	английскийToolStripMenuItem->Text = "English";
	белорусскийToolStripMenuItem->Text = "Belorussian";
	toolStripMenuItem1->Text = "Russian";
	цветToolStripMenuItem1->Text = "Color";
	красныйToolStripMenuItem->Text = "Red";
	зеленыйToolStripMenuItem->Text = "Green";
	желтыйToolStripMenuItem->Text = "Yellow";
}
private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	angl = false;
	bel = true;
	rus = false;
	button1->Text = "ачысціць";
	button2->Text = "Алгарытм Краскала";
	button3->Text = "Дадаць Вяршыню";
	button4->Text = "Дадаць";
	button5->Text = "Захаваць граф";
	button6->Text = "Адкрыць граф";
	button7->Text = "Пра Аўтара";
	label2->Text = "Вага па метадзе Краскала";
	ЯзыкToolStripMenuItem->Text = "Мова";
	английскийToolStripMenuItem->Text = "Англыскый";
	белорусскийToolStripMenuItem->Text = "Беларускы";
	toolStripMenuItem1->Text = "Рускі";
	цветToolStripMenuItem1->Text = "Колер";
	красныйToolStripMenuItem->Text = "Чырвоны";
	зеленыйToolStripMenuItem->Text = "Зялёны";
	желтыйToolStripMenuItem->Text = "Жоўты";
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	angl = false;
	bel = false;
	rus = true;
	button1->Text = "Очистить";
	button2->Text = "Алгоритм Краскала";
	button3->Text = "Добавить Вершины";
	button4->Text = "Добавить";
	button5->Text = "Сохранить граф";
	button6->Text = "Открыть граф";
	button7->Text = "Про автора";
	label2->Text = "Вес по методу Краскала";
	ЯзыкToolStripMenuItem->Text = "Язык";
	английскийToolStripMenuItem->Text = "Англиский";
	белорусскийToolStripMenuItem->Text = "Беларусский";
	toolStripMenuItem1->Text = "Русский";
	цветToolStripMenuItem1->Text = "Цвет";
	красныйToolStripMenuItem->Text = "Красный";
	зеленыйToolStripMenuItem->Text = "Зеленый";
	желтыйToolStripMenuItem->Text = "Желтый";
}
private: System::Void зеленыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	yellow = false;
	red = false;
	green = true;
	this->BackColor = Color::Green;
}
private: System::Void красныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	yellow = false;
	red = true;
	green = false;
	this->BackColor = Color::Red;
}
private: System::Void желтыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
		button1->Text = "Очистить";
		button2->Text = "Алгоритм Краскала";
		button3->Text = "Добавить Вершины";
		button4->Text = "Добавить";
		button5->Text = "Сохранить граф";
		button6->Text = "Открыть граф";
		button7->Text = "Про автора";
		label2->Text = "Вес по методу Краскала";
		ЯзыкToolStripMenuItem->Text = "Язык";
		английскийToolStripMenuItem->Text = "Англиский";
		белорусскийToolStripMenuItem->Text = "Беларусский";
		toolStripMenuItem1->Text = "Русский";
		цветToolStripMenuItem1->Text = "Цвет";
		красныйToolStripMenuItem->Text = "Красный";
		зеленыйToolStripMenuItem->Text = "Зеленый";
		желтыйToolStripMenuItem->Text = "Желтый";
	}
	else if (angl == true)
	{
		button1->Text = "ачысціць";
		button2->Text = "Алгарытм Краскала";
		button3->Text = "Дадаць Вяршыню";
		button4->Text = "Дадаць";
		button5->Text = "Захаваць граф";
		button6->Text = "Адкрыць граф";
		button7->Text = "Пра Аўтара";
		label2->Text = "Вага па метадзе Краскала";
		ЯзыкToolStripMenuItem->Text = "Мова";
		английскийToolStripMenuItem->Text = "Англыскый";
		белорусскийToolStripMenuItem->Text = "Беларускы";
		toolStripMenuItem1->Text = "Рускі";
		цветToolStripMenuItem1->Text = "Колер";
		красныйToolStripMenuItem->Text = "Чырвоны";
		зеленыйToolStripMenuItem->Text = "Зялёны";
		желтыйToolStripMenuItem->Text = "Жоўты";
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
		ЯзыкToolStripMenuItem->Text = "Language";
		английскийToolStripMenuItem->Text = "English";
		белорусскийToolStripMenuItem->Text = "Belorussian";
		toolStripMenuItem1->Text = "Russian";
		цветToolStripMenuItem1->Text = "Color";
		красныйToolStripMenuItem->Text = "Red";
		зеленыйToolStripMenuItem->Text = "Green";
		желтыйToolStripMenuItem->Text = "Yellow";
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
