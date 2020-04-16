#include "promotiondialog.h"

PromotionDialog::PromotionDialog(Farbe col, QWidget* parent) : QDialog(parent)
{
	ui.setupUi(this);
	farbe = col;

	connect(ui.buttonBox, &QDialogButtonBox::accepted, this, &PromotionDialog::accepted);
	connect(ui.buttonBox, &QDialogButtonBox::rejected, this, &PromotionDialog::rejected);

	for (auto i : findChildren<cQlabel*>())
	{
		connect(i, &cQlabel::clicked, this, &PromotionDialog::clickedLabel);
		i->deselect();
	}
	if (farbe == Farbe::white)
	{
		ui.label_1->setText(QString(static_cast<char16_t>(Piece::white_bishop)));
		ui.label_2->setText(QString(static_cast<char16_t>(Piece::white_knight)));
		ui.label_3->setText(QString(static_cast<char16_t>(Piece::white_rook)));
		ui.label_4->setText(QString(static_cast<char16_t>(Piece::white_queen)));//Piece::white_queen;
	}
	else
	{
		ui.label_1->setText(QString(static_cast<char16_t>(Piece::black_bishop)));
		ui.label_2->setText(QString(static_cast<char16_t>(Piece::black_knight)));
		ui.label_3->setText(QString(static_cast<char16_t>(Piece::black_rook)));
		ui.label_4->setText(QString(static_cast<char16_t>(Piece::black_queen)));
	}
	currentSelection = Piece::none;
}

PromotionDialog::~PromotionDialog()
{
}

Piece PromotionDialog::getCurrentSelection()
{
	return currentSelection;
}

bool PromotionDialog::getAccepted()
{
	return accept;
}

void PromotionDialog::accepted()
{
	accept = true;
	close();
}

void PromotionDialog::rejected()
{
	close();
}

void PromotionDialog::clickedLabel()
{
	cQlabel* _label = dynamic_cast<cQlabel*>(sender());

	for (auto i : findChildren<cQlabel*>())
	{
		i->deselect();
	}
	_label->select();
	currentSelection = static_cast<Piece>(_label->text().at(0).unicode());
}