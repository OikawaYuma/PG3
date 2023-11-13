#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();
	void Attack(int phase);
	// 自作メンバ関数
	void Approach();
	void Shooting();
	void Withdrawal();
private:
	// メンバ関数ポインタのテーブル
	static void (Enemy::* spAttackTable[])();
};

