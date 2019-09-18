require "UnLua"

local MyActorComponentLua = Class()

--function MyActorComponent:Initialize(Initializer)
--end

--function MyActorComponent:ReceiveBeginPlay()
--end

--function MyActorComponent:ReceiveEndPlay()
--end

--function MyActorComponent:ReceiveTick(DeltaSeconds)
--end
function MyActorComponentLua:Test()
	print("ReceiveBeginPlay in Lua!")
	local WeaponClass = UE4.UClass.Load("/Game/SpawnActor.SpawnActor")
	print(WeaponClass)
	if WeaponClass == "nil" then
		print("Class Is Nil ")
	end
	local Owner;
	Owner = self:GetOwner();
	self.MyMode = EMyNetMode.NM_MAX;
	--local World = self.GetOwnerRole();
	print(Owner);
	print(self.MyMode);

	--Owner:K2_DestroyActor();

	--local World =Owner.GetWorld();
	--print(World)
	--local NewWeapon = World:SpawnActor(WeaponClass, Owner.GetTransform(), ESpawnActorCollisionHandlingMethod.AlwaysSpawn, self, self, "MyActorComponentLua")


end
return MyActorComponentLua
