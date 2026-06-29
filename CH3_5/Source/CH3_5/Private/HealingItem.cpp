#include "HealingItem.h"
#include "CH3_5_Player.h"

AHealingItem::AHealingItem()
{
	HealAmount = 20.0f;
	ItemType = "Healing";
}

void AHealingItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (ACH3_5_Player* PlayerCharacter = Cast<ACH3_5_Player>(Activator))
		{
			// 캐릭터의 체력을 회복
			PlayerCharacter->AddHealth(HealAmount);
		}

		DestroyItem();
	}
}