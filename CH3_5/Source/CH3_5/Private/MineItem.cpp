#include "MineItem.h"

AMineItem::AMineItem()
{
	ExplosionDelay = 5.0f;
	ExplosionRadius = 300.0f;
	ExplosionDamage = 30.0f;
	ItemType = "Mine";
}

void AMineItem::ActivateItem(AActor* Activator)
{
	// 지뢰에 대한 로직
	// 지연 시간 후 폭발 로직
	// 폭발 이펙트, 데미지 계산 등 추가
	DestroyItem();
}