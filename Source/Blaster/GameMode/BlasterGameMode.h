
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BlasterGameMode.generated.h"


UCLASS()
class BLASTER_API ABlasterGameMode : public AGameMode
{
	GENERATED_BODY()


public:

	virtual void PlayerEliminated(class ABlasterCharacter* ElimnedCharacter, class ABlasterPlayerController* VictimController, ABlasterPlayerController* AttackerController);
	virtual void RequestRespawn(ACharacter* ElimCharacter, AController* ElimController);
	
};
