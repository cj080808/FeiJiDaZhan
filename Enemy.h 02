#ifndef ENEMY_H_
#define ENEMY_H_

class Enemy {

private:
	int m_x, m_y;
	int m_width, m_height;
	int m_speed;
	bool m_alive;

public:
	Enemy();
	void draw();
	void move();

	//判断敌机是否存活
	bool isAlive() const { return m_alive; }

	//设置敌机状态
	void setAlive(bool status) { m_alive = status; }

	//碰撞检测
	bool checkCollision(int px, int py, int pw, int ph) const {
		return (m_alive &&
			m_x < px + pw &&  // 敌机左侧是否在玩家右侧左侧
			m_x + m_width > px &&  // 敌机右侧是否在玩家左侧右侧
			m_y < py + ph &&  // 敌机顶部是否在玩家底部上方
			m_y + m_height > py);  // 敌机底部是否在玩家顶部下方
	}
};


#endif
