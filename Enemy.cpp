//Enemy.cpp

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

#include <graphics.h>
#include"Enemy.h"

Enemy::Enemy() {
	m_width = 50;
	m_height = 50;
	m_x = rand() % (SCREEN_WIDTH - m_width);
	m_y = -m_height;
	m_speed = 3;
	m_alive = true;
}

void Enemy::draw() {
	if (m_alive) {
		//绘制红色矩形表示敌机
		setfillcolor(RED);
		solidrectangle(m_x, m_y, m_x + m_width, m_y + m_height);
	}
}

void Enemy::move() {
	if (m_alive) {
		m_y += m_speed;	//敌机向下移动

		//如果敌机飞出屏幕底部，标记为死亡
		if (m_y > SCREEN_HEIGHT) {
			m_alive = false;
		}
	}
}
