#pragma once
#include "ui_DialogWindow.h"
#include <QDialog>

namespace Ui { class Dialog; }

class Dialog : public QDialog {
	Q_OBJECT
public:
	Dialog(QWidget* parent = nullptr) : QDialog(parent), ui(new Ui::Dialog) { ui->setupUi(this); }
	~Dialog() { delete ui; }

	QString getHost() { return ui->login_var->text(); }
	QString getDB() { return ui->db_var->text(); }
	uint getPort() { return ui->port_var->value(); }
	QString getLogin() { return ui->login_var->text(); }
	QString getPass() { return ui->pass_var->text(); }

private:
	Ui::Dialog* ui;
};