#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();
	void Attack(int phase);
	// ���상���o�֐�
	void Approach();
	void Shooting();
	void Withdrawal();
private:
	// �����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* spAttackTable[])();
};

