#include "player.h"

Player::Player(QObject *parent, Farbe _col) : QObject(parent)
{
	color = _col;
}

Player::~Player()
{
}

Farbe Player::getColor()
{
	return color;
}

void Player::setColor(Farbe _col)
{
	color = _col;
}
