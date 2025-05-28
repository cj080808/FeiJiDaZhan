//Player.cpp

#include <graphics.h>
#include"Player.h"
#include <stdio.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

// 将 char* 转换为 TCHAR* (兼容 Unicode 和多字节字符集)
TCHAR* charToTCHAR(const char* str) {
	static TCHAR buffer[1024];
	MultiByteToWideChar(CP_ACP, 0, str, -1, buffer, 1024);
	return buffer;
}


Player::Player() {
	m_width = 60;
	m_height = 60;
	m_x = (SCREEN_WIDTH - m_width) / 2;	//初始位置居中
	m_y = SCREEN_HEIGHT - m_height - 20;	//底部上方20像素
	m_speed = 5;
	m_lives = 3;
}

void Player::draw() {
	//绘制飞机（用矩形代替）
	setfillcolor(YELLOW);
	solidrectangle(m_x, m_y, m_x + m_width, m_y + m_height);

	//绘制生命值
	settextcolor(WHITE);
	char livesText[20];
	sprintf_s(livesText, sizeof(livesText), "生命值：%d", m_lives);
	outtextxy(10, 10, charToTCHAR(livesText));
}

void Player::move(char direction) {
	switch (direction) {
	case 'w': if (m_y > 0) m_y -= m_speed; break;
	case 's': if (m_y < SCREEN_HEIGHT - m_height) m_y += m_speed; break;
	case 'a': if (m_x > 0) m_x -= m_speed; break;
	case 'd': if (m_x < SCREEN_WIDTH - m_width) m_x += m_speed; break;
	}
}
