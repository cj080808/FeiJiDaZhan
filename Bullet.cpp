//Bullet.cpp

#include <graphics.h>
#include"Bullet.h"

Bullet::Bullet(int px, int py) {
	m_width = 6;
	m_height = 18;
	m_x = px + 27;
	m_y = py - m_height;
	m_speed = 8;
	m_alive = true;
}

void Bullet::draw() {
	if (m_alive) {
		setfillcolor(GREEN);
		solidrectangle(m_x, m_y, m_x + m_height, m_y + m_height);
	}
}

void Bullet::move() {
	if (m_alive) {
		m_y -= m_speed;
		if (m_y < 0) {
			m_alive = false;
		}
	}
}
