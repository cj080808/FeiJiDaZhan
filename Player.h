#ifndef PLAYER_H_
#define PLAYER_H_
#include"GameObject.h"

class Player {

private:
	int m_x, m_y;	//飞机位置
	int m_width, m_height;	//飞机尺寸
	int m_speed;	//移动速度
	int m_lives;	//生命值

public:
	Player();	//初始化
	void draw();	//绘制飞机
	void move(char);	//移动

	int getX() const { return m_x; }
	int getY() const { return m_y; }
	int getWidth() const { return m_width; }
	int getHeight() const { return m_height; }
	int getLives() const { return m_lives; }

	void loseLife() { m_lives--; }
};

#endif
