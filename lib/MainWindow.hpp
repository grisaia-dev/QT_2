#pragma once
#include <QMainWindow>
#include "ui_MainWindow.h"
#include "DialogWindow.hpp"

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow {
	Q_OBJECT
public:
	MainWindow(QWidget* parent = nullptr) : QMainWindow(parent), ui(new Ui::MainWindow), ui_dialog(new Dialog(this)) { ui->setupUi(this); }
	~MainWindow() { delete ui; }

	//Dialog* getDialogWindow() { return ui_dialog; }

private slots:
	void on_connect_db_clicked() {
		ui_dialog->show();
	}
private:
	Ui::MainWindow* ui;
	Dialog* ui_dialog;
};
