#include "Enemy.h"
#include "stdio.h"
#include "Windows.h"

Enemy::Enemy() {};
Enemy::~Enemy() {};
// staticでせんふぇんしたメンバ関数ポインタテーブルの実態
void (Enemy::* Enemy::spAttackTable[])() = {
	&Enemy::Approach,  // 要素番号0
	&Enemy::Shooting,  // 要素番号1
	&Enemy::Withdrawal // 要素番号2
};
void Enemy::Attack(int phase) {
	(this->*spAttackTable[phase])();
}

void Enemy::Approach() {
	printf("敵の接近攻撃\n");

	
}

void Enemy::Shooting() {
	printf("敵の射撃攻撃\n");

}

void Enemy::Withdrawal() {
	printf("敵は離脱した\n");

}
