#include "Enemy.h"
#include "stdio.h"
#include "Windows.h"

Enemy::Enemy() {};
Enemy::~Enemy() {};
// static‚Å‚¹‚ñ‚Ó‚¥‚ñ‚µ‚½ƒƒ“ƒoŠÖ”ƒ|ƒCƒ“ƒ^ƒe[ƒuƒ‹‚ÌÀ‘Ô
void (Enemy::* Enemy::spAttackTable[])() = {
	&Enemy::Approach,  // —v‘f”Ô†0
	&Enemy::Shooting,  // —v‘f”Ô†1
	&Enemy::Withdrawal // —v‘f”Ô†2
};
void Enemy::Attack(int phase) {
	(this->*spAttackTable[phase])();
}

void Enemy::Approach() {
	printf("“G‚ÌÚ‹ßUŒ‚\n");

	
}

void Enemy::Shooting() {
	printf("“G‚ÌËŒ‚UŒ‚\n");

}

void Enemy::Withdrawal() {
	printf("“G‚Í—£’E‚µ‚½\n");

}
