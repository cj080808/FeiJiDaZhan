#ifndef BULLET_H_
#define BULLET_H_

class Bullet {

private:
	int m_x, m_y;
	int m_width, m_height;
	int m_speed;
	bool m_alive;

public:
	Bullet(int, int);
	void draw();
	void move();

	bool isAlive() const { return m_alive; }
	bool checkCollision(int ex, int ey, int ew, int eh) {
		return (m_alive &&
			m_x < ex + ew &&
			m_x + m_width > ex &&
			m_y < ey + eh &&
			m_y + m_height > ey);
	}

	void setAlive(bool status) { m_alive = status; }
};

#endif
