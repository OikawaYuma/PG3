#include "Enemy.h"
#include "stdio.h"
#include "Windows.h"

Enemy::Enemy() {};
Enemy::~Enemy() {};
// staticΕΉρΣ₯ρ΅½oΦ|C^e[uΜΐΤ
void (Enemy::* Enemy::spAttackTable[])() = {
	&Enemy::Approach,  // vfΤ0
	&Enemy::Shooting,  // vfΤ1
	&Enemy::Withdrawal // vfΤ2
};
void Enemy::Attack(int phase) {
	(this->*spAttackTable[phase])();
}

void Enemy::Approach() {
	printf("GΜΪίU\n");

	
}

void Enemy::Shooting() {
	printf("GΜΛU\n");

}

void Enemy::Withdrawal() {
	printf("GΝ£E΅½\n");

}
