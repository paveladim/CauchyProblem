#pragma once
#include <iostream>
#include <cmath>
#include "RungeKutta.h"

namespace CauchyProblem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label9;











	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vcomp1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v2comp1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vv2comp1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vcomp2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v2comp2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vv2comp2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ОЛП;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ u;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ uv;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ iter;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ bxn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ maxolp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c1final;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ c2final;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ maxh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xmaxh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ minh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xminh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ maxuv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xmaxuv;









	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vcomp1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2comp1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vv2comp1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vcomp2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2comp2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vv2comp2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ОЛП = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->uv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->iter = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bxn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maxolp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c1final = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->c2final = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maxh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xmaxh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->minh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xminh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maxuv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xmaxuv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тестовая", L"Основная 1", L"Основная 2" });
			this->comboBox1->Location = System::Drawing::Point(112, 15);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(133, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(133, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(133, 255);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(13, 232);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(217, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"С контролем локальной погрешности";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Введите начальные условия";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Выберите задачу";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button1->Location = System::Drawing::Point(14, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 51);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"x";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"u";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Введите шаг интегрирования";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(133, 206);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Введите параметр eps";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 209);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"h";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(239, 15);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(488, 406);
			this->zedGraphControl1->TabIndex = 14;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(14) {
				this->i, this->x,
					this->vcomp1, this->v2comp1, this->vv2comp1, this->vcomp2, this->v2comp2, this->vv2comp2, this->ОЛП, this->h, this->C1, this->C2,
					this->u, this->uv
			});
			this->dataGridView1->Location = System::Drawing::Point(733, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(431, 406);
			this->dataGridView1->TabIndex = 15;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			// 
			// x
			// 
			this->x->HeaderText = L"x";
			this->x->Name = L"x";
			// 
			// vcomp1
			// 
			this->vcomp1->HeaderText = L"v(1)";
			this->vcomp1->Name = L"vcomp1";
			// 
			// v2comp1
			// 
			this->v2comp1->HeaderText = L"v2(1)";
			this->v2comp1->Name = L"v2comp1";
			// 
			// vv2comp1
			// 
			this->vv2comp1->HeaderText = L"v(1)-v2(1)";
			this->vv2comp1->Name = L"vv2comp1";
			// 
			// vcomp2
			// 
			this->vcomp2->HeaderText = L"v(2)";
			this->vcomp2->Name = L"vcomp2";
			// 
			// v2comp2
			// 
			this->v2comp2->HeaderText = L"v2(2)";
			this->v2comp2->Name = L"v2comp2";
			// 
			// vv2comp2
			// 
			this->vv2comp2->HeaderText = L"v(2)-v2(2)";
			this->vv2comp2->Name = L"vv2comp2";
			// 
			// ОЛП
			// 
			this->ОЛП->HeaderText = L"ОЛП";
			this->ОЛП->Name = L"ОЛП";
			// 
			// h
			// 
			this->h->HeaderText = L"h";
			this->h->Name = L"h";
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->Name = L"C1";
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->Name = L"C2";
			// 
			// u
			// 
			this->u->HeaderText = L"u";
			this->u->Name = L"u";
			// 
			// uv
			// 
			this->uv->HeaderText = L"u-v";
			this->uv->Name = L"uv";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 278);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(221, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Правая граница отрезка интегрирования:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(133, 294);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(133, 333);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 317);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(198, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Максимальное количество итераций:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 136);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"u\'";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(133, 133);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 21;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 169);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Коэффициент a:";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(133, 166);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 23;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->iter, this->bxn,
					this->maxolp, this->c1final, this->c2final, this->maxh, this->xmaxh, this->minh, this->xminh, this->maxuv, this->xmaxuv
			});
			this->dataGridView2->Location = System::Drawing::Point(15, 427);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(1149, 150);
			this->dataGridView2->TabIndex = 24;
			// 
			// iter
			// 
			this->iter->HeaderText = L"Количество итераций ";
			this->iter->Name = L"iter";
			// 
			// bxn
			// 
			this->bxn->HeaderText = L"b - xn";
			this->bxn->Name = L"bxn";
			// 
			// maxolp
			// 
			this->maxolp->HeaderText = L"Максимум модуля ОЛП";
			this->maxolp->Name = L"maxolp";
			// 
			// c1final
			// 
			this->c1final->HeaderText = L"Общее число удвоений шага";
			this->c1final->Name = L"c1final";
			// 
			// c2final
			// 
			this->c2final->HeaderText = L"Общее число делений шага";
			this->c2final->Name = L"c2final";
			// 
			// maxh
			// 
			this->maxh->HeaderText = L"Максимальный шаг";
			this->maxh->Name = L"maxh";
			// 
			// xmaxh
			// 
			this->xmaxh->HeaderText = L"x, при котором шаг был максимальным";
			this->xmaxh->Name = L"xmaxh";
			// 
			// minh
			// 
			this->minh->HeaderText = L"Минимальный шаг";
			this->minh->Name = L"minh";
			// 
			// xminh
			// 
			this->xminh->HeaderText = L"x, при котором шаг был минимальным";
			this->xminh->Name = L"xminh";
			// 
			// maxuv
			// 
			this->maxuv->HeaderText = L"Максимум модуля оценки глобальной погрешности";
			this->maxuv->Name = L"maxuv";
			// 
			// xmaxuv
			// 
			this->xmaxuv->HeaderText = L"x, при котором достигается максимум модуля ГП";
			this->xmaxuv->Name = L"xmaxuv";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1176, 593);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double f1(const double& x, const double& c)
		{
			return c*exp(-0.5 * x);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		// поставить потом обработчик, чтобы кнопочка была неактивна
		ZedGraph::GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();

		// Создаём список точек
		ZedGraph::PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		ZedGraph::PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		ZedGraph::PointPairList^ f3_list = gcnew ZedGraph::PointPairList();

		double xmin = Convert::ToDouble(textBox1->Text);						// извлекаем начальные условия
		double xmax = Convert::ToDouble(textBox5->Text);

		double vmin = Convert::ToDouble(textBox2->Text);						// извлекаем начальные условия
		double v = vmin;

		double c = vmin * exp(0.5 * xmin);										// константа для точного решения
		double h = Convert::ToDouble(textBox4->Text);							// шаг интегрирования

		unsigned int maxIter = Convert::ToUInt32(textBox6->Text);

		RungeKutta RK1;
		RK1.seth(h);

		point curPoint;
		curPoint.x = xmin;
		curPoint.y = v;

		double itx = xmin;														// для итерации

		int selectedTask = comboBox1->SelectedIndex;
		bool isEps = checkBox1->Checked;

		double(*func)(point& out);												// для выбора задачи

		// для статистики
		unsigned int finalIter;
		double lastPoint;
		double maxOLP = 0;
		unsigned int sumC1 = 0;
		unsigned int sumC2 = 0;
		double maxh = 0;
		double xmaxh;
		double minh = h;
		double xminh;
		double maxUV = 0;
		double xmaxUV;

		switch (selectedTask)
		{
		case 0:
			func = task1;
			break;
		case 1:
			func = task2;
			break;
		case 2:
			func = task3;
		}

		if (func == task1)
			f1_list->Add(itx, f1(itx, c));

		f2_list->Add(curPoint.x, curPoint.y);

		dataGridView2->Rows->Clear();

		if ((func == task1) && (!isEps))
		{
			dataGridView1->Rows->Clear();
			unsigned int i = 0;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = itx;
			dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
			dataGridView1->Rows[i]->Cells[12]->Value = v;
			dataGridView1->Rows[i]->Cells[13]->Value = v - curPoint.y;

			while ((itx < xmax) && (i < maxIter))
			{
				i++;
				itx += h;
				point curPointCopy;
				curPointCopy.x = curPoint.x;
				curPointCopy.y = curPoint.y;
				// считаем точку по обычному
				curPoint = RK1.Calculate(curPoint, func);
				// считаем точку двойным шагом
				RK1.seth(0.5 * h);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				RK1.seth(h);

				f1_list->Add(curPoint.x, f1(curPoint.x, c));
				f2_list->Add(curPoint.x, curPoint.y);

				double controlValue = RK1.giveControlValue(curPoint, curPointCopy);
				double trueU = f1(curPoint.x, c);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = curPoint.x;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy.y;
				dataGridView1->Rows[i]->Cells[4]->Value = curPoint.y - curPointCopy.y;
				dataGridView1->Rows[i]->Cells[8]->Value = controlValue * ORDER;
				dataGridView1->Rows[i]->Cells[9]->Value = h;
				dataGridView1->Rows[i]->Cells[10]->Value = 0;
				dataGridView1->Rows[i]->Cells[11]->Value = 0;
				dataGridView1->Rows[i]->Cells[12]->Value = trueU;
				dataGridView1->Rows[i]->Cells[13]->Value = trueU - curPoint.y;

				// статистика
				finalIter = i;
				lastPoint = curPoint.x;
				if (abs(controlValue * ORDER) > maxOLP) maxOLP = abs(controlValue * ORDER);

				if (h > maxh)
				{
					maxh = h;
					xmaxh = itx;
				}

				if (h < minh)
				{
					minh = h;
					xminh = curPoint.x;
				}

				if (abs(trueU - curPoint.y) > maxUV)
				{
					maxUV = abs(trueU - curPoint.y);
					xmaxUV = curPoint.x;
				}
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[0]->Cells[0]->Value = finalIter;
			dataGridView2->Rows[0]->Cells[1]->Value = xmax - lastPoint;
			dataGridView2->Rows[0]->Cells[2]->Value = maxOLP;
			dataGridView2->Rows[0]->Cells[5]->Value = maxh;
			dataGridView2->Rows[0]->Cells[6]->Value = xmaxh;
			dataGridView2->Rows[0]->Cells[7]->Value = minh;
			dataGridView2->Rows[0]->Cells[8]->Value = xminh;
			dataGridView2->Rows[0]->Cells[9]->Value = maxUV;
			dataGridView2->Rows[0]->Cells[10]->Value = xmaxUV;

			ZedGraph::LineItem Curve1 = panel->AddCurve("Истинное решение", f1_list, Color::Red, ZedGraph::SymbolType::None);
			ZedGraph::LineItem Curve2 = panel->AddCurve("Численное решение", f2_list, Color::DarkCyan, ZedGraph::SymbolType::None);
		}

		if ((func == task1) && (isEps))
		{
			dataGridView1->Rows->Clear();

			double eps = Convert::ToDouble(textBox3->Text);
			unsigned int i = 0;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = itx;
			dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
			dataGridView1->Rows[i]->Cells[12]->Value = v;
			dataGridView1->Rows[i]->Cells[13]->Value = v - curPoint.y;

			while ((itx < xmax) && (i < maxIter))
			{
				RK1.setEps(eps);
				i++;
				itx += h;
				point curPointCopy;
				curPointCopy.x = curPoint.x;
				curPointCopy.y = curPoint.y;
				point curPointBack;
				curPointBack.x = curPoint.x;
				curPointBack.y = curPoint.y;
				// считаем точку по обычному
				curPoint = RK1.Calculate(curPoint, func);
				// считаем точку двойным шагом
				RK1.seth(0.5 * h);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				RK1.seth(h);
				bool c1 = false;
				bool c2 = false;

				// корректировка шага
				curPoint = RK1.localErrorConrol(curPoint, curPointCopy, curPointBack);
				if (0.5 * h == RK1.giveh())
				{
					itx -= h * 0.5;
					h = h * 0.5;
					c1 = true;
				}
				else if (2.0 * h == RK1.giveh())
				{
					h = 2.0 * h;
					c2 = true;
				}

				f1_list->Add(itx, f1(itx, c));
				f2_list->Add(curPoint.x, curPoint.y);

				double controlValue = RK1.giveControlValue(curPoint, curPointCopy);
				double trueU = f1(itx, c);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy.y;
				dataGridView1->Rows[i]->Cells[4]->Value = curPoint.y - curPointCopy.y;
				dataGridView1->Rows[i]->Cells[8]->Value = controlValue * ORDER;
				dataGridView1->Rows[i]->Cells[9]->Value = h;
				dataGridView1->Rows[i]->Cells[10]->Value = 0;
				dataGridView1->Rows[i]->Cells[11]->Value = 0;
				if (c1)
				{
					dataGridView1->Rows[i]->Cells[10]->Value = 1;
					sumC1 += 1;
				}

				if (c2)
				{
					dataGridView1->Rows[i]->Cells[11]->Value = 1;
					sumC2 += 1;
				}

				dataGridView1->Rows[i]->Cells[12]->Value = trueU;
				dataGridView1->Rows[i]->Cells[13]->Value = trueU - curPoint.y;

				// статистика
				finalIter = i;
				lastPoint = itx;
				if ((abs(controlValue * ORDER) > maxOLP) && (!c1)) maxOLP = abs(controlValue * ORDER);

				if (h > maxh)
				{
					maxh = h;
					xmaxh = itx;
				}

				if (h < minh)
				{
					minh = h;
					xminh = itx;
				}

				if (abs(trueU - curPoint.y) > maxUV)
				{
					maxUV = abs(trueU - curPoint.y);
					xmaxUV = itx;
				}
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[0]->Cells[0]->Value = finalIter;
			dataGridView2->Rows[0]->Cells[1]->Value = xmax - lastPoint;
			dataGridView2->Rows[0]->Cells[2]->Value = maxOLP;
			dataGridView2->Rows[0]->Cells[3]->Value = sumC2;
			dataGridView2->Rows[0]->Cells[4]->Value = sumC1;
			dataGridView2->Rows[0]->Cells[5]->Value = maxh;
			dataGridView2->Rows[0]->Cells[6]->Value = xmaxh;
			dataGridView2->Rows[0]->Cells[7]->Value = minh;
			dataGridView2->Rows[0]->Cells[8]->Value = xminh;
			dataGridView2->Rows[0]->Cells[9]->Value = maxUV;
			dataGridView2->Rows[0]->Cells[10]->Value = xmaxUV;

			ZedGraph::LineItem Curve1 = panel->AddCurve("Истинное решение", f1_list, Color::Red, ZedGraph::SymbolType::None);
			ZedGraph::LineItem Curve2 = panel->AddCurve("Численное решение", f2_list, Color::DarkCyan, ZedGraph::SymbolType::None);
		}

		if ((func == task2) && (!isEps))
		{
			dataGridView1->Rows->Clear();

			unsigned int i = 0;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = itx;
			dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;

			while ((itx < xmax) && (i < maxIter))
			{
				i++;
				itx += h;
				point curPointCopy;
				curPointCopy.x = curPoint.x;
				curPointCopy.y = curPoint.y;
				// считаем точку по обычному
				curPoint = RK1.Calculate(curPoint, func);
				// считаем точку двойным шагом
				RK1.seth(0.5 * h);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				RK1.seth(h);

				f2_list->Add(curPoint.x, curPoint.y);

				double controlValue = RK1.giveControlValue(curPoint, curPointCopy);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy.y;
				dataGridView1->Rows[i]->Cells[4]->Value = curPoint.y - curPointCopy.y;
				dataGridView1->Rows[i]->Cells[8]->Value = controlValue * ORDER;
				dataGridView1->Rows[i]->Cells[9]->Value = h;
				dataGridView1->Rows[i]->Cells[10]->Value = 0;
				dataGridView1->Rows[i]->Cells[11]->Value = 0;

				// статистика
				finalIter = i;
				lastPoint = itx;
				if (abs(controlValue * ORDER) > maxOLP) maxOLP = abs(controlValue * ORDER);
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[0]->Cells[0]->Value = finalIter;
			dataGridView2->Rows[0]->Cells[1]->Value = xmax - lastPoint;
			dataGridView2->Rows[0]->Cells[2]->Value = maxOLP;
			dataGridView2->Rows[0]->Cells[5]->Value = h;
			dataGridView2->Rows[0]->Cells[6]->Value = xmin;
			dataGridView2->Rows[0]->Cells[7]->Value = h;
			dataGridView2->Rows[0]->Cells[8]->Value = xmin;

			ZedGraph::LineItem Curve2 = panel->AddCurve("Численное решение", f2_list, Color::Coral, ZedGraph::SymbolType::None);
		}

		if ((func == task2) && (isEps))
		{
			f2_list->Add(curPoint.x, curPoint.y);

			dataGridView1->Rows->Clear();

			double eps = Convert::ToDouble(textBox3->Text);
			RK1.setEps(eps);
			unsigned int i = 0;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = itx;
			dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;

			while ((itx < xmax) && (i < maxIter))
			{
				i++;
				itx += h;
				point curPointCopy;
				curPointCopy.x = curPoint.x;
				curPointCopy.y = curPoint.y;
				point curPointBack;
				curPointBack.x = curPoint.x;
				curPointBack.y = curPoint.y;
				// считаем точку по обычному
				curPoint = RK1.Calculate(curPoint, func);
				// считаем точку двойным шагом
				RK1.seth(0.5 * h);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				RK1.seth(h);
				bool c1 = false;
				bool c2 = false;

				// корректировка шага
				curPoint = RK1.localErrorConrol(curPoint, curPointCopy, curPointBack);
				if (0.5 * h == RK1.giveh())
				{
					itx -= h * 0.5;
					h = h * 0.5;
					c1 = true;
				}
				else if (2.0 * h == RK1.giveh())
				{
					h = 2.0 * h;
					c2 = true;
				}

				f2_list->Add(curPoint.x, curPoint.y);

				double controlValue = RK1.giveControlValue(curPoint, curPointCopy);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy.y;
				dataGridView1->Rows[i]->Cells[4]->Value = curPoint.y - curPointCopy.y;
				dataGridView1->Rows[i]->Cells[8]->Value = controlValue * ORDER;
				dataGridView1->Rows[i]->Cells[9]->Value = h;
				dataGridView1->Rows[i]->Cells[10]->Value = 0;
				dataGridView1->Rows[i]->Cells[11]->Value = 0;
				if (c1)
				{
					dataGridView1->Rows[i]->Cells[10]->Value = 1;
					sumC1 += 1;
				}

				if (c2)
				{
					dataGridView1->Rows[i]->Cells[11]->Value = 1;
					sumC2 += 1;
				}

				// статистика
				finalIter = i;
				lastPoint = itx;
				if ((abs(controlValue * ORDER) > maxOLP) && (!c1)) maxOLP = abs(controlValue * ORDER);

				if (h > maxh)
				{
					maxh = h;
					xmaxh = itx;
				}

				if (h < minh)
				{
					minh = h;
					xminh = itx;
				}
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[0]->Cells[0]->Value = finalIter;
			dataGridView2->Rows[0]->Cells[1]->Value = xmax - lastPoint;
			dataGridView2->Rows[0]->Cells[2]->Value = maxOLP;
			dataGridView2->Rows[0]->Cells[3]->Value = sumC2;
			dataGridView2->Rows[0]->Cells[4]->Value = sumC1;
			dataGridView2->Rows[0]->Cells[5]->Value = maxh;
			dataGridView2->Rows[0]->Cells[6]->Value = xmaxh;
			dataGridView2->Rows[0]->Cells[7]->Value = minh;
			dataGridView2->Rows[0]->Cells[8]->Value = xminh;

			ZedGraph::LineItem Curve2 = panel->AddCurve("Численное решение", f2_list, Color::Coral, ZedGraph::SymbolType::None);
		}

		if ((func == task3) && (!isEps))
		{
			double v2 = Convert::ToDouble(textBox7->Text);
			point curPoint2;
			curPoint2.x = xmin;
			curPoint2.y = v2;

			f1_list->Add(curPoint.y, curPoint2.y);
			f2_list->Add(curPoint.x, curPoint.y);
			f3_list->Add(curPoint2.x, curPoint2.y);

			double a = Convert::ToDouble(textBox8->Text);
			RK1.seta(a);

			dataGridView1->Rows->Clear();

			unsigned int i = 0;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = itx;
			dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
			dataGridView1->Rows[i]->Cells[5]->Value = curPoint2.y;

			while ((itx < xmax) && (i < maxIter))
			{
				i++;
				itx += h;
				point curPointCopy1, curPointCopy2;
				curPointCopy1.x = curPoint.x;
				curPointCopy1.y = curPoint.y;
				curPointCopy2.x = curPoint2.x;
				curPointCopy2.y = curPoint2.y;
				// считаем точку по обычному
				curPoint = RK1.Calculate(curPoint, forTask3);
				curPoint2 = RK1.Calculate(curPoint2, func);
				// считаем точку двойным шагом
				RK1.seth(0.5 * h);
				curPointCopy1 = RK1.Calculate(curPointCopy1, forTask3);
				curPointCopy1 = RK1.Calculate(curPointCopy1, forTask3);
				curPointCopy2 = RK1.Calculate(curPointCopy2, func);
				curPointCopy2 = RK1.Calculate(curPointCopy2, func);
				RK1.seth(h);

				f1_list->Add(curPoint.y, curPoint2.y);
				f2_list->Add(curPoint.x, curPoint.y);
				f3_list->Add(curPoint2.x, curPoint2.y);

				double controlValue1 = abs(RK1.giveControlValue(curPoint, curPointCopy1));
				double controlValue2 = abs(RK1.giveControlValue(curPoint2, curPointCopy2));
				controlValue1 = sqrt(controlValue1 * controlValue1 + controlValue2 * controlValue2);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy1.y;
				dataGridView1->Rows[i]->Cells[4]->Value = (curPoint.y - curPointCopy1.y);
				dataGridView1->Rows[i]->Cells[5]->Value = curPoint2.y;
				dataGridView1->Rows[i]->Cells[6]->Value = curPointCopy2.y;
				dataGridView1->Rows[i]->Cells[7]->Value = (curPoint2.y - curPointCopy2.y);
				dataGridView1->Rows[i]->Cells[8]->Value = controlValue1 * ORDER;
				dataGridView1->Rows[i]->Cells[9]->Value = h;
				dataGridView1->Rows[i]->Cells[10]->Value = 0;
				dataGridView1->Rows[i]->Cells[11]->Value = 0;

				// статистика
				finalIter = i;
				lastPoint = itx;
				if (abs(controlValue1 * ORDER) > maxOLP) maxOLP = abs(controlValue1 * ORDER);

				if (h > maxh)
				{
					maxh = h;
					xmaxh = itx;
				}

				if (h < minh)
				{
					minh = h;
					xminh = itx;
				}
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[0]->Cells[0]->Value = finalIter;
			dataGridView2->Rows[0]->Cells[1]->Value = xmax - lastPoint;
			dataGridView2->Rows[0]->Cells[2]->Value = maxOLP;
			dataGridView2->Rows[0]->Cells[5]->Value = maxh;
			dataGridView2->Rows[0]->Cells[6]->Value = xmaxh;
			dataGridView2->Rows[0]->Cells[7]->Value = minh;
			dataGridView2->Rows[0]->Cells[8]->Value = xminh;

			ZedGraph::LineItem Curve1 = panel->AddCurve("Фазовый портрет", f1_list, Color::Coral, ZedGraph::SymbolType::None);
			ZedGraph::LineItem Curve2 = panel->AddCurve("Численное решение 1", f2_list, Color::SeaGreen, ZedGraph::SymbolType::None);
			ZedGraph::LineItem Curve3 = panel->AddCurve("Численное решение 2", f3_list, Color::BlueViolet, ZedGraph::SymbolType::None);
		}

		if ((func == task3) && (isEps))
		{
			double v2 = Convert::ToDouble(textBox7->Text);
			point curPoint2;
			curPoint2.x = xmin;
			curPoint2.y = v2;

			f1_list->Add(curPoint.y, curPoint2.y);
			f2_list->Add(curPoint.x, curPoint.y);
			f3_list->Add(curPoint2.x, curPoint2.y);

			double a = Convert::ToDouble(textBox8->Text);
			RK1.seta(a);
			double eps = Convert::ToDouble(textBox3->Text);
			RK1.setEps(eps);

			dataGridView1->Rows->Clear();

			unsigned int i = 0;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = itx;
			dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
			dataGridView1->Rows[i]->Cells[5]->Value = curPoint2.y;

			while ((itx < xmax) && (i < maxIter))
			{
				i++;
				itx += h;
				point curPointCopy1, curPointCopy2;
				curPointCopy1.x = curPoint.x;
				curPointCopy1.y = curPoint.y;
				curPointCopy2.x = curPoint2.x;
				curPointCopy2.y = curPoint2.y;
				point curPointBack1;
				curPointBack1.x = curPoint.x;
				curPointBack1.y = curPoint.y;
				point curPointBack2;
				curPointBack2.x = curPoint2.x;
				curPointBack2.y = curPoint2.y;
				// считаем точку по обычному
				curPoint = RK1.Calculate(curPoint, forTask3);
				curPoint2 = RK1.Calculate(curPoint2, func);
				// считаем точку двойным шагом
				RK1.seth(0.5 * h);
				curPointCopy1 = RK1.Calculate(curPointCopy1, forTask3);
				curPointCopy1 = RK1.Calculate(curPointCopy1, forTask3);
				curPointCopy2 = RK1.Calculate(curPointCopy2, func);
				curPointCopy2 = RK1.Calculate(curPointCopy2, func);
				RK1.seth(h);
				bool c1 = false;
				bool c2 = false;

				curPoint = RK1.localErrorConrol(curPoint, curPointCopy1, curPointBack1);
				double h1 = RK1.giveh();
				RK1.seth(h);
				curPoint2 = RK1.localErrorConrol(curPoint2, curPointCopy2, curPointBack2);
				double h2 = RK1.giveh();
				RK1.seth(h);

				// отдельный метод контроля локальной погрешности
				point backUpPoint;
				backUpPoint.x = curPointBack1.y;
				backUpPoint.y = curPointBack2.y;

				backUpPoint = RK1.localErrorControlForSystem(curPoint, curPointCopy1, curPoint2, curPointCopy2, backUpPoint);

				if (0.5 * h == RK1.giveh())
				{
					itx -= h * 0.5;
					h = h * 0.5;
					curPoint.x = itx;
					curPoint.y = backUpPoint.x;
					curPoint2.x = itx;
					curPoint2.y = backUpPoint.y;
					c1 = true;
				}
				else if (2.0 * h == RK1.giveh())
				{
					h = 2.0 * h;
					c2 = true;
				}

				f1_list->Add(curPoint.y, curPoint2.y);
				f2_list->Add(curPoint.x, curPoint.y);
				f3_list->Add(curPoint2.x, curPoint2.y);

				double controlValue1 = abs(RK1.giveControlValue(curPoint, curPointCopy1));
				double controlValue2 = abs(RK1.giveControlValue(curPoint2, curPointCopy2));
				controlValue1 = sqrt(controlValue1 * controlValue1 + controlValue2 * controlValue2);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy1.y;
				dataGridView1->Rows[i]->Cells[4]->Value = (curPoint.y - curPointCopy1.y);
				dataGridView1->Rows[i]->Cells[5]->Value = curPoint2.y;
				dataGridView1->Rows[i]->Cells[6]->Value = curPointCopy2.y;
				dataGridView1->Rows[i]->Cells[7]->Value = (curPoint2.y - curPointCopy2.y);
				dataGridView1->Rows[i]->Cells[8]->Value = controlValue1 * ORDER;
				dataGridView1->Rows[i]->Cells[9]->Value = h;
				dataGridView1->Rows[i]->Cells[10]->Value = 0;
				dataGridView1->Rows[i]->Cells[11]->Value = 0;
				if (c1)
				{
					dataGridView1->Rows[i]->Cells[10]->Value = 1;
					sumC1 += 1;
				}

				if (c2)
				{
					dataGridView1->Rows[i]->Cells[11]->Value = 1;
					sumC2 += 1;
				}

				// статистика
				finalIter = i;
				lastPoint = itx;
				if ((abs(controlValue1 * ORDER) > maxOLP) && (!c1)) maxOLP = abs(controlValue1 * ORDER);

				if (h > maxh)
				{
					maxh = h;
					xmaxh = itx;
				}

				if (h < minh)
				{
					minh = h;
					xminh = itx;
				}
			}

			dataGridView2->Rows->Add();
			dataGridView2->Rows[0]->Cells[0]->Value = finalIter;
			dataGridView2->Rows[0]->Cells[1]->Value = xmax - lastPoint;
			dataGridView2->Rows[0]->Cells[2]->Value = maxOLP;
			dataGridView2->Rows[0]->Cells[3]->Value = sumC2;
			dataGridView2->Rows[0]->Cells[4]->Value = sumC1;
			dataGridView2->Rows[0]->Cells[5]->Value = maxh;
			dataGridView2->Rows[0]->Cells[6]->Value = xmaxh;
			dataGridView2->Rows[0]->Cells[7]->Value = minh;
			dataGridView2->Rows[0]->Cells[8]->Value = xminh;

			ZedGraph::LineItem Curve1 = panel->AddCurve("Фазовый портрет", f1_list, Color::Coral, ZedGraph::SymbolType::None);
			ZedGraph::LineItem Curve2 = panel->AddCurve("Численное решение 1", f2_list, Color::SeaGreen, ZedGraph::SymbolType::None);
			ZedGraph::LineItem Curve3 = panel->AddCurve("Численное решение 2", f3_list, Color::BlueViolet, ZedGraph::SymbolType::None);
		}

		lastPoint = xmax - lastPoint;

		panel->XAxis->Scale->Min = xmin - 1;
		panel->XAxis->Scale->Max = xmax + 1;

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}

	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (checkBox1->Checked.Equals(true)) this->textBox3->Enabled = true;
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		textBox3->Enabled = checkBox1->Checked;
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (comboBox1->Text->Length > 0) this->textBox1->Enabled = true;
		if (this->textBox1->Text->Length > 0) textBox2->Enabled = true;
		else textBox2->Enabled = false;
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (this->comboBox1->Text->Length > 0) textBox1->Enabled = true;
		else textBox1->Enabled = false;

		if (this->comboBox1->SelectedIndex == 2)
		{
			textBox7->Enabled = true;
			textBox8->Enabled = true;
		}
		else
		{
			textBox7->Enabled = false;
			textBox8->Enabled = false;
		}
	}

	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (textBox1->Text->Length > 0) this->textBox2->Enabled = true;
		if ((this->textBox2->Text->Length > 0) && (this->textBox2->Enabled)) textBox4->Enabled = true;
		else textBox4->Enabled = false;
	}

	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if ((textBox2->Text->Length > 0) && (textBox2->Enabled)) this->textBox4->Enabled = true;
		else this->textBox4->Enabled = false;
	}

	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (comboBox1->SelectedIndex == 2) this->textBox7->Enabled = true;
		else this->textBox7->Enabled = false;
	}

	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (comboBox1->SelectedIndex == 2) this->textBox8->Enabled = true;
		else this->textBox8->Enabled = false;
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
	}
};
}
