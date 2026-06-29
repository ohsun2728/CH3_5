#include "BaseItem.h"

ABaseItem::ABaseItem()
{
	PrimaryActorTick.bCanEverTick = false;

}

void ABaseItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseItem::OnItemOverlap(AActor* OverlapActor)
{
	// 각 자식 클래스에 구현
}

void ABaseItem::OnItemEndOverlap(AActor* OverlapActor)
{
}

void ABaseItem::ActivateItem(AActor* Activator)
{
}

FName ABaseItem::GetItemType() const
{
	return ItemType;
}

void ABaseItem::DestroyItem()
{
	// AActor 에서 제공하는 Destroy() 함수로 객체 제거
	Destroy();
}