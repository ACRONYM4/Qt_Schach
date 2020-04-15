#pragma once

#include <QDialog>
#include "ui_promotiondialog.h"
#include "misc.h"

class PromotionDialog : public QDialog
{
	Q_OBJECT

public:
	PromotionDialog(Farbe col, QWidget *parent = Q_NULLPTR);
	~PromotionDialog();
	Piece getCurrentSelection();
	bool getAccepted();

private slots:
	void clickedLabel();
	void accepted();
	void rejected();
private:
	Ui::PromotionDialog ui;
	Farbe farbe;
	Piece currentSelection;
	bool accept = false;
};
