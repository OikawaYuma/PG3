#include "Enemy.h"
#include "stdio.h"
#include "Windows.h"

Enemy::Enemy() {};
Enemy::~Enemy() {};
// static�ł���ӂ��񂵂������o�֐��|�C���^�e�[�u���̎���
void (Enemy::* Enemy::spAttackTable[])() = {
	&Enemy::Approach,  // �v�f�ԍ�0
	&Enemy::Shooting,  // �v�f�ԍ�1
	&Enemy::Withdrawal // �v�f�ԍ�2
};
void Enemy::Attack(int phase) {
	(this->*spAttackTable[phase])();
}

void Enemy::Approach() {
	printf("�G�̐ڋߍU��\n");

	
}

void Enemy::Shooting() {
	printf("�G�̎ˌ��U��\n");

}

void Enemy::Withdrawal() {
	printf("�G�͗��E����\n");

}
