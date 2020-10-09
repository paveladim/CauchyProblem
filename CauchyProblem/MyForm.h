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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  v;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  v2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vv2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ���;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  h;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  u;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  uv;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->v = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vv2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->��� = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"��������", L"�������� 1", L"�������� 2" });
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
			this->checkBox1->Text = L"� ��������� ��������� �����������";
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
			this->label1->Text = L"������� ��������� �������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"�������� ������";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->button1->Location = System::Drawing::Point(14, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 51);
			this->button1->TabIndex = 7;
			this->button1->Text = L"���������";
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
			this->label5->Text = L"������� ��� ��������������";
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
			this->label6->Text = L"������� �������� eps";
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->x,
					this->v, this->v2, this->vv2, this->���, this->h, this->C1, this->C2, this->u, this->uv
			});
			this->dataGridView1->Location = System::Drawing::Point(733, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(431, 406);
			this->dataGridView1->TabIndex = 15;
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
			// v
			// 
			this->v->HeaderText = L"v";
			this->v->Name = L"v";
			// 
			// v2
			// 
			this->v2->HeaderText = L"v2";
			this->v2->Name = L"v2";
			// 
			// vv2
			// 
			this->vv2->HeaderText = L"v-v2";
			this->vv2->Name = L"vv2";
			// 
			// ���
			// 
			this->���->HeaderText = L"���";
			this->���->Name = L"���";
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
			this->label8->Text = L"������ ������� ������� ��������������:";
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
			this->label9->Text = L"������������ ���������� ��������:";
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
			this->label11->Text = L"����������� a:";
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1176, 433);
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
		// ��������� ����� ����������, ����� �������� ���� ���������
		ZedGraph::GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();

		// ������ ������ �����
		ZedGraph::PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		ZedGraph::PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		double xmin = Convert::ToDouble(textBox1->Text);						// ��������� ��������� �������
		double xmax = Convert::ToDouble(textBox5->Text);

		double vmin = Convert::ToDouble(textBox2->Text);						// ��������� ��������� �������
		double v = vmin;

		double c = vmin * exp(0.5 * xmin);										// ��������� ��� ������� �������
		double h = Convert::ToDouble(textBox4->Text);							// ��� ��������������

		unsigned int maxIter = Convert::ToUInt32(textBox6->Text);

		RungeKutta RK1;
		RK1.seth(h);

		point curPoint;
		curPoint.x = xmin;
		curPoint.y = v;

		double itx = xmin;														// ��� ��������

		int selectedTask = comboBox1->SelectedIndex;
		bool isEps = checkBox1->Checked;

		double(*func)(point& out);												// ��� ������ ������

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


		if ((func == task1) && (!isEps))
		{
			f1_list->Add(itx, f1(itx, c));
			f2_list->Add(curPoint.x, curPoint.y);

			dataGridView1->Rows->Clear();

			for (unsigned int i = 1; (i < maxIter) && (itx < xmax); i++, itx += h)
			{
				point curPointCopy;
				curPointCopy.x = curPoint.x;
				curPointCopy.y = curPoint.y;
				// ������� ����� �� ��������
				curPoint = RK1.Calculate(curPoint, func);
				// ������� ����� ������� �����
				RK1.seth(0.5 * h);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				RK1.seth(h);

				f1_list->Add(itx, f1(itx, c));
				f2_list->Add(curPoint.x, curPoint.y);

				double difference = curPoint.y - curPointCopy.y;
				double trueU = f1(itx, c);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy.y;
				dataGridView1->Rows[i]->Cells[4]->Value = difference;
				dataGridView1->Rows[i]->Cells[5]->Value = difference / 15.0 * 16.0;
				dataGridView1->Rows[i]->Cells[6]->Value = h;
				dataGridView1->Rows[i]->Cells[7]->Value = 0;
				dataGridView1->Rows[i]->Cells[8]->Value = 0;
				dataGridView1->Rows[i]->Cells[9]->Value = trueU;
				dataGridView1->Rows[i]->Cells[10]->Value = trueU - curPoint.y;
			}

			ZedGraph::LineItem Curve1 = panel->AddCurve("����������", f1_list, Color::Red, ZedGraph::SymbolType::None);
			ZedGraph::LineItem Curve2 = panel->AddCurve("��������", f2_list, Color::Blue, ZedGraph::SymbolType::None);
		}

		if ((func == task1) && (isEps))
		{
			f1_list->Add(itx, f1(itx, c));
			f2_list->Add(curPoint.x, curPoint.y);

			dataGridView1->Rows->Clear();

			double eps = Convert::ToDouble(textBox3->Text);

			for (unsigned int i = 1; (i < maxIter) && (itx < xmax); i++, itx += h)
			{
				RK1.setEps(eps);
				point curPointCopy;
				curPointCopy.x = curPoint.x;
				curPointCopy.y = curPoint.y;
				point curPointBack;
				curPointBack.x = curPoint.x;
				curPointBack.y = curPoint.y;
				// ������� ����� �� ��������
				curPoint = RK1.Calculate(curPoint, func);
				// ������� ����� ������� �����
				RK1.seth(0.5 * h);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				RK1.seth(h);
				bool c1 = false;
				bool c2 = false;

				// ������������� ����
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

				double difference = curPoint.y - curPointCopy.y;
				double trueU = f1(itx, c);

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy.y;
				dataGridView1->Rows[i]->Cells[4]->Value = difference;
				dataGridView1->Rows[i]->Cells[5]->Value = difference / 15.0 * 16.0;
				dataGridView1->Rows[i]->Cells[6]->Value = h;
				dataGridView1->Rows[i]->Cells[7]->Value = 0;
				dataGridView1->Rows[i]->Cells[8]->Value = 0;
				if (c1)
					dataGridView1->Rows[i]->Cells[7]->Value = 1;
				if (c2)
					dataGridView1->Rows[i]->Cells[8]->Value = 1;
				dataGridView1->Rows[i]->Cells[9]->Value = trueU;
				dataGridView1->Rows[i]->Cells[10]->Value = trueU - curPoint.y;
			}

			ZedGraph::LineItem Curve1 = panel->AddCurve("����������", f1_list, Color::Red, ZedGraph::SymbolType::None);
			ZedGraph::LineItem Curve2 = panel->AddCurve("��������", f2_list, Color::Blue, ZedGraph::SymbolType::None);
		}

		if ((func == task2) && (!isEps))
		{
			f1_list->Add(itx, f1(itx, c));
			f2_list->Add(curPoint.x, curPoint.y);

			dataGridView1->Rows->Clear();

			for (unsigned int i = 1; (i < maxIter) && (itx < xmax); i++, itx += h)
			{
				point curPointCopy;
				curPointCopy.x = curPoint.x;
				curPointCopy.y = curPoint.y;
				// ������� ����� �� ��������
				curPoint = RK1.Calculate(curPoint, func);
				// ������� ����� ������� �����
				RK1.seth(0.5 * h);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				RK1.seth(h);

				f1_list->Add(itx, f1(itx, c));
				f2_list->Add(curPoint.x, curPoint.y);

				double difference = curPoint.y - curPointCopy.y;

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy.y;
				dataGridView1->Rows[i]->Cells[4]->Value = difference;
				dataGridView1->Rows[i]->Cells[5]->Value = difference / 15.0 * 16.0;
				dataGridView1->Rows[i]->Cells[6]->Value = h;
				dataGridView1->Rows[i]->Cells[7]->Value = 0;
				dataGridView1->Rows[i]->Cells[8]->Value = 0;
			}

			ZedGraph::LineItem Curve2 = panel->AddCurve("��������", f2_list, Color::Blue, ZedGraph::SymbolType::None);
		}

		if ((func == task2) && (isEps))
		{
			f1_list->Add(itx, f1(itx, c));
			f2_list->Add(curPoint.x, curPoint.y);

			dataGridView1->Rows->Clear();

			double eps = Convert::ToDouble(textBox3->Text);

			for (unsigned int i = 1; (i < maxIter) && (itx < xmax); i++, itx += h)
			{
				RK1.setEps(eps);
				point curPointCopy;
				curPointCopy.x = curPoint.x;
				curPointCopy.y = curPoint.y;
				point curPointBack;
				curPointBack.x = curPoint.x;
				curPointBack.y = curPoint.y;
				// ������� ����� �� ��������
				curPoint = RK1.Calculate(curPoint, func);
				// ������� ����� ������� �����
				RK1.seth(0.5 * h);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				curPointCopy = RK1.Calculate(curPointCopy, func);
				RK1.seth(h);
				bool c1 = false;
				bool c2 = false;

				// ������������� ����
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

				double difference = curPoint.y - curPointCopy.y;

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy.y;
				dataGridView1->Rows[i]->Cells[4]->Value = difference;
				dataGridView1->Rows[i]->Cells[5]->Value = difference / 15.0 * 16.0;
				dataGridView1->Rows[i]->Cells[6]->Value = h;
				dataGridView1->Rows[i]->Cells[7]->Value = 0;
				dataGridView1->Rows[i]->Cells[8]->Value = 0;
				if (c1)
					dataGridView1->Rows[i]->Cells[7]->Value = 1;
				if (c2)
					dataGridView1->Rows[i]->Cells[8]->Value = 1;
			}

			ZedGraph::LineItem Curve2 = panel->AddCurve("��������", f2_list, Color::Blue, ZedGraph::SymbolType::None);
		}

		if ((func == task3) && (!isEps))
		{
			f1_list->Add(itx, f1(itx, c));
			f2_list->Add(curPoint.x, curPoint.y);

			double a = Convert::ToDouble(textBox8->Text);
			RK1.seta(a);

			double v2 = Convert::ToDouble(textBox7->Text);
			point curPoint2;
			curPoint2.x = xmin;
			curPoint2.y = v2;

			dataGridView1->Rows->Clear();

			for (unsigned int i = 1; (i < maxIter) && (itx < xmax); i++, itx += h)
			{
				point curPointCopy1, curPointCopy2;
				curPointCopy1.x = curPoint.x;
				curPointCopy1.y = curPoint.y;
				curPointCopy2.x = curPoint2.x;
				curPointCopy2.y = curPoint2.y;
				// ������� ����� �� ��������
				curPoint = RK1.Calculate(curPoint, forTask3);
				curPoint2 = RK1.Calculate(curPoint2, func);
				// ������� ����� ������� �����
				RK1.seth(0.5 * h);
				curPointCopy1 = RK1.Calculate(curPointCopy1, forTask3);
				curPointCopy1 = RK1.Calculate(curPointCopy1, forTask3);
				curPointCopy2 = RK1.Calculate(curPointCopy2, func);
				curPointCopy2 = RK1.Calculate(curPointCopy2, func);
				RK1.seth(h);

				f2_list->Add(curPoint.y, curPoint2.y);

				double difference = curPoint.y - curPointCopy1.y;

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy1.y;
				dataGridView1->Rows[i]->Cells[4]->Value = difference;
				dataGridView1->Rows[i]->Cells[5]->Value = difference / 15.0 * 16.0;
				dataGridView1->Rows[i]->Cells[6]->Value = h;
				dataGridView1->Rows[i]->Cells[7]->Value = 0;
				dataGridView1->Rows[i]->Cells[8]->Value = 0;
			}

			ZedGraph::LineItem Curve2 = panel->AddCurve("��������", f2_list, Color::Blue, ZedGraph::SymbolType::None);
		}

		if ((func == task3) && (isEps))
		{
			f1_list->Add(itx, f1(itx, c));
			f2_list->Add(curPoint.x, curPoint.y);

			double a = Convert::ToDouble(textBox8->Text);
			RK1.seta(a);

			double v2 = Convert::ToDouble(textBox7->Text);
			point curPoint2;
			curPoint2.x = xmin;
			curPoint2.y = v2;

			dataGridView1->Rows->Clear();

			for (unsigned int i = 1; (i < maxIter) && (itx < xmax); i++, itx += h)
			{
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
				// ������� ����� �� ��������
				curPoint = RK1.Calculate(curPoint, forTask3);
				curPoint2 = RK1.Calculate(curPoint2, func);
				// ������� ����� ������� �����
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

				// ��������� ����� �������� ��������� �����������
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

				f2_list->Add(curPoint.y, curPoint2.y);

				double difference = curPoint.y - curPointCopy1.y;

				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = itx;
				dataGridView1->Rows[i]->Cells[2]->Value = curPoint.y;
				dataGridView1->Rows[i]->Cells[3]->Value = curPointCopy1.y;
				dataGridView1->Rows[i]->Cells[4]->Value = difference;
				dataGridView1->Rows[i]->Cells[5]->Value = difference / 15.0 * 16.0;
				dataGridView1->Rows[i]->Cells[6]->Value = h;
				dataGridView1->Rows[i]->Cells[7]->Value = 0;
				dataGridView1->Rows[i]->Cells[8]->Value = 0;
			}

			ZedGraph::LineItem Curve2 = panel->AddCurve("��������", f2_list, Color::Blue, ZedGraph::SymbolType::None);
		}

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
};
}