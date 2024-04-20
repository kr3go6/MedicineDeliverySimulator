#pragma once
#include "Medicine.h"
#include "Experiment.h"

namespace PrakCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ initSettingsPanel;
	protected:
	private: System::Windows::Forms::Panel^ discountPanel;
	private: System::Windows::Forms::Panel^ couriersPanel;
	private: System::Windows::Forms::Panel^ ordersPanel;
	private: System::Windows::Forms::Label^ dayLabel;



	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Button^ stepButton;
	private: System::Windows::Forms::Button^ ffwdButton;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Label^ medicineAmountLabel;
	private: System::Windows::Forms::TextBox^ medicineAmountTextBox;
	private: System::Windows::Forms::Label^ durationHintLabel;
	private: System::Windows::Forms::TextBox^ durationTextBox;
	private: System::Windows::Forms::Label^ discountCardLabel;
	private: System::Windows::Forms::TextBox^ discountCard;
	private: System::Windows::Forms::Label^ retailMarginLabel;
	private: System::Windows::Forms::TextBox^ retailMarginTextBox;
	private: System::Windows::Forms::Label^ discountsLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ couriersAmountTextBox;

	private: System::Windows::Forms::Label^ couriersPanelLabel;
	private: System::Windows::Forms::Label^ ordersAmountLabel;

	private: System::Windows::Forms::TextBox^ ordersAmountFromTextBox;

	private: System::Windows::Forms::Label^ ordersPanelLabel;
	private: System::Windows::Forms::TextBox^ ordersAmountToTextBox;
	private: System::Windows::Forms::TextBox^ partsInOrderToTextBox;
	private: System::Windows::Forms::Label^ partsInOrder;
	private: System::Windows::Forms::TextBox^ partsInOrderFromTextBox;
	private: System::Windows::Forms::RichTextBox^ couriersStatsPanel;
	private: System::Windows::Forms::RichTextBox^ whStatePanel;
	private: System::Windows::Forms::RichTextBox^ ordersListPanel;
	private: System::Windows::Forms::Label^ discountLabel;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->initSettingsPanel = (gcnew System::Windows::Forms::Panel());
			this->medicineAmountLabel = (gcnew System::Windows::Forms::Label());
			this->medicineAmountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->durationHintLabel = (gcnew System::Windows::Forms::Label());
			this->durationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->discountPanel = (gcnew System::Windows::Forms::Panel());
			this->discountLabel = (gcnew System::Windows::Forms::Label());
			this->discountCardLabel = (gcnew System::Windows::Forms::Label());
			this->discountCard = (gcnew System::Windows::Forms::TextBox());
			this->retailMarginLabel = (gcnew System::Windows::Forms::Label());
			this->retailMarginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->discountsLabel = (gcnew System::Windows::Forms::Label());
			this->couriersPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->couriersAmountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->couriersPanelLabel = (gcnew System::Windows::Forms::Label());
			this->ordersPanel = (gcnew System::Windows::Forms::Panel());
			this->partsInOrderToTextBox = (gcnew System::Windows::Forms::TextBox());
			this->partsInOrder = (gcnew System::Windows::Forms::Label());
			this->partsInOrderFromTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ordersAmountToTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ordersAmountLabel = (gcnew System::Windows::Forms::Label());
			this->ordersAmountFromTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ordersPanelLabel = (gcnew System::Windows::Forms::Label());
			this->dayLabel = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->stepButton = (gcnew System::Windows::Forms::Button());
			this->ffwdButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->couriersStatsPanel = (gcnew System::Windows::Forms::RichTextBox());
			this->whStatePanel = (gcnew System::Windows::Forms::RichTextBox());
			this->ordersListPanel = (gcnew System::Windows::Forms::RichTextBox());
			this->initSettingsPanel->SuspendLayout();
			this->discountPanel->SuspendLayout();
			this->couriersPanel->SuspendLayout();
			this->ordersPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// initSettingsPanel
			// 
			this->initSettingsPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->initSettingsPanel->Controls->Add(this->medicineAmountLabel);
			this->initSettingsPanel->Controls->Add(this->medicineAmountTextBox);
			this->initSettingsPanel->Controls->Add(this->durationHintLabel);
			this->initSettingsPanel->Controls->Add(this->durationTextBox);
			this->initSettingsPanel->Location = System::Drawing::Point(-5, -4);
			this->initSettingsPanel->Name = L"initSettingsPanel";
			this->initSettingsPanel->Size = System::Drawing::Size(201, 167);
			this->initSettingsPanel->TabIndex = 0;
			// 
			// medicineAmountLabel
			// 
			this->medicineAmountLabel->AutoSize = true;
			this->medicineAmountLabel->Location = System::Drawing::Point(3, 121);
			this->medicineAmountLabel->Name = L"medicineAmountLabel";
			this->medicineAmountLabel->Size = System::Drawing::Size(185, 16);
			this->medicineAmountLabel->TabIndex = 3;
			this->medicineAmountLabel->Text = L"Количество лекарств (5-15)";
			// 
			// medicineAmountTextBox
			// 
			this->medicineAmountTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->medicineAmountTextBox->Location = System::Drawing::Point(3, 84);
			this->medicineAmountTextBox->Name = L"medicineAmountTextBox";
			this->medicineAmountTextBox->Size = System::Drawing::Size(197, 34);
			this->medicineAmountTextBox->TabIndex = 2;
			this->medicineAmountTextBox->Text = L"10";
			this->medicineAmountTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// durationHintLabel
			// 
			this->durationHintLabel->AutoSize = true;
			this->durationHintLabel->Location = System::Drawing::Point(4, 49);
			this->durationHintLabel->Name = L"durationHintLabel";
			this->durationHintLabel->Size = System::Drawing::Size(184, 16);
			this->durationHintLabel->TabIndex = 1;
			this->durationHintLabel->Text = L"Продолжительность (10-25)";
			this->durationHintLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// durationTextBox
			// 
			this->durationTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->durationTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->durationTextBox->Location = System::Drawing::Point(3, 12);
			this->durationTextBox->Name = L"durationTextBox";
			this->durationTextBox->Size = System::Drawing::Size(197, 34);
			this->durationTextBox->TabIndex = 0;
			this->durationTextBox->Text = L"10";
			this->durationTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// discountPanel
			// 
			this->discountPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->discountPanel->Controls->Add(this->discountLabel);
			this->discountPanel->Controls->Add(this->discountCardLabel);
			this->discountPanel->Controls->Add(this->discountCard);
			this->discountPanel->Controls->Add(this->retailMarginLabel);
			this->discountPanel->Controls->Add(this->retailMarginTextBox);
			this->discountPanel->Controls->Add(this->discountsLabel);
			this->discountPanel->Location = System::Drawing::Point(-5, 169);
			this->discountPanel->Name = L"discountPanel";
			this->discountPanel->Size = System::Drawing::Size(201, 197);
			this->discountPanel->TabIndex = 1;
			// 
			// discountLabel
			// 
			this->discountLabel->AutoSize = true;
			this->discountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->discountLabel->Location = System::Drawing::Point(63, 111);
			this->discountLabel->Name = L"discountLabel";
			this->discountLabel->Size = System::Drawing::Size(78, 22);
			this->discountLabel->TabIndex = 8;
			this->discountLabel->Text = L"Скидка";
			// 
			// discountCardLabel
			// 
			this->discountCardLabel->AutoSize = true;
			this->discountCardLabel->Location = System::Drawing::Point(3, 173);
			this->discountCardLabel->Name = L"discountCardLabel";
			this->discountCardLabel->Size = System::Drawing::Size(196, 16);
			this->discountCardLabel->TabIndex = 7;
			this->discountCardLabel->Text = L"Скидка по дисконт. карте (%)";
			// 
			// discountCard
			// 
			this->discountCard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->discountCard->Location = System::Drawing::Point(3, 136);
			this->discountCard->Name = L"discountCard";
			this->discountCard->Size = System::Drawing::Size(197, 34);
			this->discountCard->TabIndex = 6;
			this->discountCard->Text = L"5";
			this->discountCard->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// retailMarginLabel
			// 
			this->retailMarginLabel->AutoSize = true;
			this->retailMarginLabel->Location = System::Drawing::Point(4, 61);
			this->retailMarginLabel->Name = L"retailMarginLabel";
			this->retailMarginLabel->Size = System::Drawing::Size(160, 16);
			this->retailMarginLabel->TabIndex = 5;
			this->retailMarginLabel->Text = L"Розничная наценка (%)";
			this->retailMarginLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// retailMarginTextBox
			// 
			this->retailMarginTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->retailMarginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->retailMarginTextBox->Location = System::Drawing::Point(3, 24);
			this->retailMarginTextBox->Name = L"retailMarginTextBox";
			this->retailMarginTextBox->Size = System::Drawing::Size(197, 34);
			this->retailMarginTextBox->TabIndex = 4;
			this->retailMarginTextBox->Text = L"30";
			this->retailMarginTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// discountsLabel
			// 
			this->discountsLabel->AutoSize = true;
			this->discountsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->discountsLabel->Location = System::Drawing::Point(63, 0);
			this->discountsLabel->Name = L"discountsLabel";
			this->discountsLabel->Size = System::Drawing::Size(90, 22);
			this->discountsLabel->TabIndex = 3;
			this->discountsLabel->Text = L"Наценка";
			// 
			// couriersPanel
			// 
			this->couriersPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->couriersPanel->Controls->Add(this->label1);
			this->couriersPanel->Controls->Add(this->couriersAmountTextBox);
			this->couriersPanel->Controls->Add(this->couriersPanelLabel);
			this->couriersPanel->Location = System::Drawing::Point(-5, 372);
			this->couriersPanel->Name = L"couriersPanel";
			this->couriersPanel->Size = System::Drawing::Size(201, 105);
			this->couriersPanel->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Количество курьеров (3-9)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// couriersAmountTextBox
			// 
			this->couriersAmountTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->couriersAmountTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->couriersAmountTextBox->Location = System::Drawing::Point(3, 25);
			this->couriersAmountTextBox->Name = L"couriersAmountTextBox";
			this->couriersAmountTextBox->Size = System::Drawing::Size(197, 34);
			this->couriersAmountTextBox->TabIndex = 7;
			this->couriersAmountTextBox->Text = L"3";
			this->couriersAmountTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->couriersAmountTextBox->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// couriersPanelLabel
			// 
			this->couriersPanelLabel->AutoSize = true;
			this->couriersPanelLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->couriersPanelLabel->Location = System::Drawing::Point(10, 0);
			this->couriersPanelLabel->Name = L"couriersPanelLabel";
			this->couriersPanelLabel->Size = System::Drawing::Size(173, 22);
			this->couriersPanelLabel->TabIndex = 6;
			this->couriersPanelLabel->Text = L"Служба доставки";
			this->couriersPanelLabel->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// ordersPanel
			// 
			this->ordersPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ordersPanel->Controls->Add(this->partsInOrderToTextBox);
			this->ordersPanel->Controls->Add(this->partsInOrder);
			this->ordersPanel->Controls->Add(this->partsInOrderFromTextBox);
			this->ordersPanel->Controls->Add(this->ordersAmountToTextBox);
			this->ordersPanel->Controls->Add(this->ordersAmountLabel);
			this->ordersPanel->Controls->Add(this->ordersAmountFromTextBox);
			this->ordersPanel->Controls->Add(this->ordersPanelLabel);
			this->ordersPanel->Location = System::Drawing::Point(-5, 483);
			this->ordersPanel->Name = L"ordersPanel";
			this->ordersPanel->Size = System::Drawing::Size(201, 260);
			this->ordersPanel->TabIndex = 1;
			// 
			// partsInOrderToTextBox
			// 
			this->partsInOrderToTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->partsInOrderToTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->partsInOrderToTextBox->Location = System::Drawing::Point(118, 143);
			this->partsInOrderToTextBox->Name = L"partsInOrderToTextBox";
			this->partsInOrderToTextBox->Size = System::Drawing::Size(70, 34);
			this->partsInOrderToTextBox->TabIndex = 15;
			this->partsInOrderToTextBox->Text = L"7";
			this->partsInOrderToTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// partsInOrder
			// 
			this->partsInOrder->AutoSize = true;
			this->partsInOrder->Location = System::Drawing::Point(37, 117);
			this->partsInOrder->Name = L"partsInOrder";
			this->partsInOrder->Size = System::Drawing::Size(126, 16);
			this->partsInOrder->TabIndex = 14;
			this->partsInOrder->Text = L"Позиций в заказе";
			this->partsInOrder->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// partsInOrderFromTextBox
			// 
			this->partsInOrderFromTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->partsInOrderFromTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->partsInOrderFromTextBox->Location = System::Drawing::Point(16, 143);
			this->partsInOrderFromTextBox->Name = L"partsInOrderFromTextBox";
			this->partsInOrderFromTextBox->Size = System::Drawing::Size(70, 34);
			this->partsInOrderFromTextBox->TabIndex = 13;
			this->partsInOrderFromTextBox->Text = L"1";
			this->partsInOrderFromTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ordersAmountToTextBox
			// 
			this->ordersAmountToTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ordersAmountToTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ordersAmountToTextBox->Location = System::Drawing::Point(118, 57);
			this->ordersAmountToTextBox->Name = L"ordersAmountToTextBox";
			this->ordersAmountToTextBox->Size = System::Drawing::Size(70, 34);
			this->ordersAmountToTextBox->TabIndex = 12;
			this->ordersAmountToTextBox->Text = L"10";
			this->ordersAmountToTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ordersAmountLabel
			// 
			this->ordersAmountLabel->AutoSize = true;
			this->ordersAmountLabel->Location = System::Drawing::Point(37, 31);
			this->ordersAmountLabel->Name = L"ordersAmountLabel";
			this->ordersAmountLabel->Size = System::Drawing::Size(130, 16);
			this->ordersAmountLabel->TabIndex = 11;
			this->ordersAmountLabel->Text = L"Количество в день";
			this->ordersAmountLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ordersAmountFromTextBox
			// 
			this->ordersAmountFromTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ordersAmountFromTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ordersAmountFromTextBox->Location = System::Drawing::Point(16, 57);
			this->ordersAmountFromTextBox->Name = L"ordersAmountFromTextBox";
			this->ordersAmountFromTextBox->Size = System::Drawing::Size(70, 34);
			this->ordersAmountFromTextBox->TabIndex = 10;
			this->ordersAmountFromTextBox->Text = L"5";
			this->ordersAmountFromTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ordersPanelLabel
			// 
			this->ordersPanelLabel->AutoSize = true;
			this->ordersPanelLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ordersPanelLabel->Location = System::Drawing::Point(63, 0);
			this->ordersPanelLabel->Name = L"ordersPanelLabel";
			this->ordersPanelLabel->Size = System::Drawing::Size(78, 22);
			this->ordersPanelLabel->TabIndex = 9;
			this->ordersPanelLabel->Text = L"Заказы";
			// 
			// dayLabel
			// 
			this->dayLabel->AutoSize = true;
			this->dayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dayLabel->Location = System::Drawing::Point(611, 9);
			this->dayLabel->Name = L"dayLabel";
			this->dayLabel->Size = System::Drawing::Size(97, 36);
			this->dayLabel->TabIndex = 2;
			this->dayLabel->Text = L"Day 1";
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(1027, 453);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(92, 68);
			this->startButton->TabIndex = 6;
			this->startButton->Text = L"СТАРТ";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MainForm::startButton_Click);
			// 
			// stepButton
			// 
			this->stepButton->Location = System::Drawing::Point(1027, 527);
			this->stepButton->Name = L"stepButton";
			this->stepButton->Size = System::Drawing::Size(92, 68);
			this->stepButton->TabIndex = 7;
			this->stepButton->Text = L"ШАГ";
			this->stepButton->UseVisualStyleBackColor = true;
			this->stepButton->Click += gcnew System::EventHandler(this, &MainForm::stepButton_Click);
			// 
			// ffwdButton
			// 
			this->ffwdButton->Location = System::Drawing::Point(1027, 601);
			this->ffwdButton->Name = L"ffwdButton";
			this->ffwdButton->Size = System::Drawing::Size(92, 68);
			this->ffwdButton->TabIndex = 8;
			this->ffwdButton->Text = L"ДО КОНЦА";
			this->ffwdButton->UseVisualStyleBackColor = true;
			this->ffwdButton->Click += gcnew System::EventHandler(this, &MainForm::ffwdButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(1027, 675);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(92, 68);
			this->exitButton->TabIndex = 9;
			this->exitButton->Text = L"ВЫХОД";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &MainForm::exitButton_Click);
			// 
			// couriersStatsPanel
			// 
			this->couriersStatsPanel->BackColor = System::Drawing::SystemColors::MenuBar;
			this->couriersStatsPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->couriersStatsPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->couriersStatsPanel->Location = System::Drawing::Point(202, 453);
			this->couriersStatsPanel->Name = L"couriersStatsPanel";
			this->couriersStatsPanel->ReadOnly = true;
			this->couriersStatsPanel->Size = System::Drawing::Size(819, 290);
			this->couriersStatsPanel->TabIndex = 10;
			this->couriersStatsPanel->Text = L"";
			// 
			// whStatePanel
			// 
			this->whStatePanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->whStatePanel->Location = System::Drawing::Point(203, 58);
			this->whStatePanel->Name = L"whStatePanel";
			this->whStatePanel->ReadOnly = true;
			this->whStatePanel->Size = System::Drawing::Size(354, 389);
			this->whStatePanel->TabIndex = 11;
			this->whStatePanel->Text = L"";
			// 
			// ordersListPanel
			// 
			this->ordersListPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ordersListPanel->Location = System::Drawing::Point(563, 58);
			this->ordersListPanel->Name = L"ordersListPanel";
			this->ordersListPanel->ReadOnly = true;
			this->ordersListPanel->Size = System::Drawing::Size(544, 389);
			this->ordersListPanel->TabIndex = 12;
			this->ordersListPanel->Text = L"";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1119, 742);
			this->Controls->Add(this->ordersListPanel);
			this->Controls->Add(this->whStatePanel);
			this->Controls->Add(this->couriersStatsPanel);
			this->Controls->Add(this->ffwdButton);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->stepButton);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->dayLabel);
			this->Controls->Add(this->ordersPanel);
			this->Controls->Add(this->couriersPanel);
			this->Controls->Add(this->discountPanel);
			this->Controls->Add(this->initSettingsPanel);
			this->Name = L"MainForm";
			this->Text = L"Medicine Delivery Simulator";
			this->initSettingsPanel->ResumeLayout(false);
			this->initSettingsPanel->PerformLayout();
			this->discountPanel->ResumeLayout(false);
			this->discountPanel->PerformLayout();
			this->couriersPanel->ResumeLayout(false);
			this->couriersPanel->PerformLayout();
			this->ordersPanel->ResumeLayout(false);
			this->ordersPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: int ValidateTextBox(System::String^ setting, int minValue, int maxValue, bool isRequired) {
	if (setting->Empty && !isRequired) {
		return -1;
	}

	try {
		int param = Int32::Parse(setting);

		if (param < minValue || param > maxValue) {
			throw gcnew InvalidOperationException(
				"Параметр должен лежать в [" +
				minValue.ToString() + "," + maxValue.ToString() +
				"]");
		}

		couriersStatsPanel->Text = setting;
		return param;
	}
	catch (FormatException^ exc) {
		couriersStatsPanel->Text = "Неверный формат ввода";
		return -1;
	}
	catch (InvalidOperationException^ exc) {
		couriersStatsPanel->Text = exc->Message;
		return -1;
	}
}

	   static Experiment^ exp;

private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
	startButton->Text = "СТАРТ";

	int duration = ValidateTextBox(durationTextBox->Text, 10, 25, true); if (duration == -1) return;
	int meds_amount = ValidateTextBox(medicineAmountTextBox->Text, 5, 15, true); if (meds_amount == -1) return;
	int orders_from = ValidateTextBox(ordersAmountFromTextBox->Text, 1, 100, true); if (orders_from == -1) return;
	int orders_to = ValidateTextBox(ordersAmountToTextBox->Text, 1, 100, true); if (orders_to == -1 || orders_to < orders_from) return;
	int orders_items_from = ValidateTextBox(partsInOrderFromTextBox->Text, 1, 10, true); if (orders_items_from == -1) return;
	int orders_items_to = ValidateTextBox(partsInOrderToTextBox->Text, 1, 10, true); if (orders_items_from == -1 || orders_items_to < orders_items_from) return;
	int retail_margin = ValidateTextBox(retailMarginTextBox->Text, 0, 500, true); if (retail_margin == -1) return;
	int discount = ValidateTextBox(discountCard->Text, 0, 100, true); if (discount == -1) return;
	int couriers_cnt = ValidateTextBox(couriersAmountTextBox->Text, 3, 9, true); if (couriers_cnt == -1) return;

	durationTextBox->Enabled = true;
	medicineAmountTextBox->Enabled = true;
	retailMarginTextBox->Enabled = true;
	discountCard->Enabled = true;
	couriersAmountTextBox->Enabled = true;
	ordersAmountFromTextBox->Enabled = true;
	ordersAmountToTextBox->Enabled = true;
	partsInOrderFromTextBox->Enabled = true;
	partsInOrderToTextBox->Enabled = true;

	exp = %Experiment(duration, couriers_cnt, orders_from, orders_to, orders_items_from, orders_items_to, retail_margin, discount, meds_amount);
	whStatePanel->Text = exp->wh->GetStateLog();
	couriersStatsPanel->Text = exp->service->GetDeliveryLog();
	ordersListPanel->Text = "";
	dayLabel->Text = "Day " + exp->cur_day.ToString();
}
private: System::Void stepButton_Click(System::Object^ sender, System::EventArgs^ e) {
	auto start_balance = exp->balance.ToString();
	auto start_spent_on_resupply = exp->spent_on_resupply;
	startButton->Text = "ЗАНОВО";
	exp->MakeStep();
	auto expenses = exp->spent_on_resupply - start_spent_on_resupply;
	couriersStatsPanel->Text = exp->service->GetDeliveryLog();
	couriersStatsPanel->Text += "=======\n" + "Start of the day: " + start_balance + "\n";
	couriersStatsPanel->Text += "Income:    " + exp->income_today + "\n";
	couriersStatsPanel->Text += "Expenses: " + expenses + "\n";
	couriersStatsPanel->Text += "Profit:       " + (exp->income_today - expenses) + "\n";
	couriersStatsPanel->Text += "End of the day: " + exp->balance.ToString();
	ordersListPanel->Text = exp->orders_log;
	dayLabel->Text = "Day " + exp->cur_day.ToString();
	whStatePanel->Text = exp->wh->GetStateLog();
	exp->average_courier_load += exp->service->EndDay();

	durationTextBox->Enabled = false;
	medicineAmountTextBox->Enabled = false;
	retailMarginTextBox->Enabled = false;
	discountCard->Enabled = false;
	couriersAmountTextBox->Enabled = false;
	ordersAmountFromTextBox->Enabled = false;
	ordersAmountToTextBox->Enabled = false;
	partsInOrderFromTextBox->Enabled = false;
	partsInOrderToTextBox->Enabled = false;
}
private: System::Void ffwdButton_Click(System::Object^ sender, System::EventArgs^ e) {
	exp->FfwdToEnd();
	couriersStatsPanel->Text = exp->service->GetDeliveryLog();
	couriersStatsPanel->Text += "Balance: " + exp->balance.ToString();
	ordersListPanel->Text = exp->orders_log;
	dayLabel->Text = "Day " + exp->cur_day.ToString();
	whStatePanel->Text = exp->wh->GetStateLog();

	durationTextBox->Enabled = true;
	medicineAmountTextBox->Enabled = true;
	retailMarginTextBox->Enabled = true;
	discountCard->Enabled = true;
	couriersAmountTextBox->Enabled = true;
	ordersAmountFromTextBox->Enabled = true;
	ordersAmountToTextBox->Enabled = true;
	partsInOrderFromTextBox->Enabled = true;
	partsInOrderToTextBox->Enabled = true;
}
private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
