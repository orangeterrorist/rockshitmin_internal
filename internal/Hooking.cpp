#include <Windows.h>
#include <iostream>
#include "MinHook.h"
#include <cstdio>
#include <thread>
#include <vector>
#include <fstream>
#include <sstream>
#include <map>
#include "il2cpp.hpp"
#include "../Xorstr.hpp"
#include <stdint.h>
#include "../native_invoke.hpp"
#include <directxmath.h>
#include <vector>
//#include "UnityRef.hpp"
//#include "UnityRef.hpp"
#include <stdio.h>
#include <winsock.h>
#include <curl/curl.h>
#include "MethodPointers_RR.hpp"
#include <list>
#include "il2cpp2.hpp"

//#include "MethodPointers_RR.hpp"
//#include "Cheat_Weapons.hpp"






uintptr_t get_LocalPlayerCanUseMakerPen = 0x1A11440; //bool true
uintptr_t get_CanUseMakerPenRR = 0x20492E0; //bool true
uintptr_t get_CanUseMakerPenGR = 0x1490D20; //bool true
uintptr_t get_LocalPlayerCanUseCreationMode = 0x1A65420; //bool true
uintptr_t CanPlayerCreate = 0x1A5D970; //bool true
uintptr_t CanPlayerCreateWithMakerPen = 0x1FB6F10; //bool true
uintptr_t PlayerCanUseMakerPenAccordingToRoles = 0x1A63340; //bool true
uintptr_t LogWasMakerPenEverOut = 0x2A13570; //NOP
uintptr_t WasMakerPenEverOut = 0x1FF2EF0; //bool false
uintptr_t base = (uintptr_t)GetModuleHandle(NULL);
uintptr_t GameAssembly = (uintptr_t)GetModuleHandle("GameAssembly.dll");
DWORD* StoreFirstValue;
int32_t StoreProgressionType;
DWORD* ThirdUnknownValue;
bool has_gone = false;
bool OneShotKill;

DWORD* Test1_PhotonValue;
DWORD* Test2_PhotonValue;
DWORD* Test3_PhotonValue;
DWORD* Test4_PhotonValue;
DWORD* Test5_PhotonValue;
DWORD* Test6_PhotonValue;
DWORD* Test7_PhotonValue;
DWORD* Test8_PhotonValue;

MethodInfo* CheaterAxis;




DWORD* Test1_KillPlayer;
DWORD* Test2_KillPlayer;
DWORD Test3_KillPlayer;
bool Test4_KillPlayer;
DWORD* Test5_KillPlayer;
DWORD* Test6_KillPlayer;
DWORD* Test7_KillPlayer;
bool SpawnPrefabOnShoot = false;
native::Player* PhotonPlayerField;
MethodInfo* MethodInfoTest1;
bool SpawnRailGun;


std::map<native::RecRoom::Core::Combat::RangedWeapon*, bool> rapid_fire_weapons;


//struct Transform
//{
//
//    typedef Transform* (*_tGetChild)(Transform* __this, int index, const MethodInfo* method_info);
//    inline static _tGetChild GetChild;
//
//    typedef Transform* (*_tSetParent)(Transform* __this, Transform* parent, bool worldPositionStays, const MethodInfo* method_info);
//    inline static _tSetParent SetParent;
//
//    char __pad2[0x10];
//    float bulletFireSpeed; // 0x210
//    char __pad4[0x8];
//    float maximumFiringRate; // 0x21C
//    char __pad3[0x3C];
//    UnityEngine::Transform* barrelTransform;
//    char __pad435[0x5C];
//    float lastFireTime; // 0x2C4
//
//    typedef void(*_tFire)(DWORD* __this, UnityEngine::Vector3 velocity, DWORD* charge, DWORD*);
//    inline static _tFire Fire;
//
//    typedef bool(*_tget_IsOnCooldown)(DWORD* __this, DWORD*);
//    inline static _tget_IsOnCooldown get_IsOnCooldown;
//}

bool(__fastcall* set_CoolDownBool_o)(DWORD*, DWORD*);

bool __stdcall set_boolean_ForWeapon(DWORD* __this, DWORD* method)
{
    return false;
}




bool bSpeed;

MethodInfo* setTime;

MethodInfo* KIllAllAI_m;

const float speedMultiplier = 20.f;

void SetTimeScale(float f)
{
    void* args[1] = { &f };

    Il2CppException* exc;
    auto result = il2cpp_runtime_invoke(setTime, nullptr, args, &exc);
    std::cout << result << std::endl;
    il2cpp_runtime_invoke(setTime, nullptr, args, &exc);
}

void KIllAllAI()
{
    
    Il2CppException* exc;
    auto result = il2cpp_runtime_invoke(KIllAllAI_m, nullptr, nullptr, &exc);
    std::cout << "Killed All AI" << std::endl;
}

bool PlayerChosenForDeath_on = false;
bool ScottInvincible = false;

void(__stdcall* MasterDamagePlayer_o)(native::GameCombatManager*, native::PhotonPlayer*, DWORD, bool, DWORD*, DWORD*, DWORD*);

void __stdcall MasterDamagePlayer_999(native::GameCombatManager* Test1, native::PhotonPlayer* Test2, DWORD Test3, bool Test4, DWORD* Test5, DWORD* Test6, DWORD* Test7)
{
    auto PlayerLocalPlayer = native::Player::get_LocalPlayer(CheaterAxis);
    auto PhotonPlayer = native::Player::get_PhotonPlayer(PlayerLocalPlayer, MethodInfoTest1);
    /* auto localplayer = native::Player::GetPlayerByAccountID(45441832, true, nullptr);
     auto PhotonPlayerScoot = native::Player::get_PhotonPlayer(localplayer, MethodInfoTest1);*/


    if (Test2 != PhotonPlayer)
    {
        Test3 = 999999999;
        Test4 = true;

        std::cout << "" << Test1 << " " << Test2 << " " << Test3 << " " << Test4 << " " << Test5 << " " << Test6 << " " << Test7 << " " << std::endl;
        return MasterDamagePlayer_o(Test1, Test2, Test3, Test4, Test5, Test6, Test7);
    }
    else if (Test2 == PhotonPlayer)
    {
        std::cout << "Hit LocalPlayer\n";
        Test3 = 0;
        return;

    }




}

void(__stdcall* MasterDeathEvent_o)(DWORD*, DWORD*, DWORD*);

void __stdcall MasterDeathEvent_Remove(DWORD* Test1, DWORD* Test2, DWORD* Test3)
{
    return;

}



void(__stdcall* MasterSetScore_o)(DWORDLONG*, DWORDLONG*, int, DWORDLONG*);

void __stdcall MasterSetScore_999(DWORDLONG* Test_Master, DWORDLONG* Test2, int Test3, DWORDLONG* Test4)
{
    Test3 = 999999999;
    std::cout << "" << Test_Master << " " << Test2 << " " << Test3 << " " << Test4 << " " << std::endl;
    return MasterSetScore_o(Test_Master, Test2, Test3, Test4);
}

void(__stdcall* RpcOnPlayerCatch_o)(DWORD*, DWORD*, DWORD*, DWORD*, DWORD*);

void __stdcall RpcOnPlayerCatch_Changed(DWORD* Test, DWORD* Test2, DWORD* Test3, DWORD* Test4, DWORD* Test5)
{
    Test1_PhotonValue = Test;
    Test2_PhotonValue = Test2;
    Test3_PhotonValue = Test3;
    Test4_PhotonValue = Test4;
    Test5_PhotonValue = Test5;

    std::cout << "" << Test << " " << Test2 << " " << Test3 << " " << Test4 << " " << Test5 << " " << std::endl;
    return RpcOnPlayerCatch_o(Test, Test2, Test3, Test4, Test5);
}


void(__stdcall* RpcAuthorityHitExplosiveWithWeapon_o)(DWORD*, DWORD*, DWORD*, bool, DWORD*, DWORD*, DWORD*);

DWORD* Test9_PhotonValue;
DWORD* Test10_PhotonValue;
DWORD* Test11_PhotonValue;
bool Test12_PhotonValue;
DWORD* Test13_PhotonValue;
DWORD* Test14_PhotonValue;
DWORD* Test15_PhotonValue;
void __stdcall RpcAuthorityHitExplosiveWithWeapon_Changed(DWORD* Test1, DWORD* Test2, DWORD* Test3, bool Test4, DWORD* Test5, DWORD* Test6, DWORD* Test7)
{

    Test4 = false;
    Test9_PhotonValue = Test1;
    Test10_PhotonValue = Test2;
    Test11_PhotonValue = Test3;
    Test12_PhotonValue = Test4;
    Test13_PhotonValue = Test5;
    Test14_PhotonValue = Test6;
    Test15_PhotonValue = Test7;


    std::cout << "BOOM!!!! : " << "" << Test1 << " " << Test2 << " " << Test3 << " " << Test4 << " " << std::endl;
    return RpcAuthorityHitExplosiveWithWeapon_o(Test1, Test2, Test3, Test4, Test5, Test6, Test7);
}



class Vector3
{
protected:
    float x, y, z;

public:
    Vector3(float _x, float _y, float _z)
        : x(_x), y(_y), z(_z)
    {

    }

    void inverse()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};







Il2CppString* Test1_PreFabSpawn;
Vector3* Test2_PreFabSpawn;
DWORD* Test3_PreFabSpawn;
Vector3* Test4_PreFabSpawn;
DWORD* Test5_PreFabSpawn;
DWORD* Test6_PreFabSpawn;
DWORD* Test7_PreFabSpawn;
int random;

//DWORD* Test8_PreFabSpawn;


native::UnityEngine::GameObject* (__stdcall* SpawnPrefab_o)(Il2CppString*, Vector3*, DWORD*, Vector3*, DWORD*, DWORD*, DWORD*);


//auto result = il2cpp_string_new("[Quest_Dracula1_MiniBossGroundBoneThrownEnemy]");

native::UnityEngine::GameObject* SpawnPrefab_Changed(Il2CppString* Test1, Vector3* Test2, DWORD* Test3, Vector3* Test4, DWORD* Test5, DWORD* Test6, DWORD* Test7)
{
    auto result = il2cpp_string_new("[Arena_RailGun]");


    if (!SpawnRailGun)
    {
        random = 0;
        random = rand() % 60;
        switch (random)
        {
        case 1:
            result = il2cpp_string_new("[Quest_Dracula1_MiniBossGroundBoneThrownEnemy]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 2:
            result = il2cpp_string_new("[Arena_MainFrame]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 3:
            result = il2cpp_string_new("[Quest_Dracula1_DraculaBoss]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 4:
            result = il2cpp_string_new("[Quest_Dracula1_Flintlock]");
            *Test4 = Vector3(2.5f, 2.5f, 2.5f);
            break;
        case 5:
            result = il2cpp_string_new("[Truck_Sandbox]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 6:
            result = il2cpp_string_new("[Quest_Dracula1_MiniBossGround_Musket]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 7:
            result = il2cpp_string_new("[Quest_Dracula1_MiniBossLungingWolfEnemy]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 8:
            result = il2cpp_string_new("[Quest_Dracula1_MiniBossRangedBatEnemy]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 9:
            result = il2cpp_string_new("[QuestSword]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 10:
            result = il2cpp_string_new("[RecRoyale_Backpack]");
            *Test4 = Vector3(1.2f, 1.2f, 1.2f);
            break;
        case 11:
            result = il2cpp_string_new("[Quest_Scifi_JumbotronBossEnemy]");
            *Test4 = Vector3(0.1f, 0.1f, 0.1f);
            break;
        case 12:
            result = il2cpp_string_new("[RecRoyale_Backpack]");
            *Test4 = Vector3(1.5f, 1.5f, 1.5f);
            break;
        case 13:
            result = il2cpp_string_new("[Quest_Pirate_BossEnemy]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 14:
            result = il2cpp_string_new("[Quest_Dracula1_MiniBossGround_Musket]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 15:
            result = il2cpp_string_new("[Quest_Goblin_BogMonster]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 16:
            result = il2cpp_string_new("[Quest_SciFi_BasicFlyingRangedEnemy]");
            *Test4 = Vector3(2.2f, 2.2f, 2.2f);
            break;
        case 17:
            result = il2cpp_string_new("[Quest_Dracula1_BasicBoneMeleeEnemy]");
            *Test4 = Vector3(2.2f, 2.2f, 2.2f);
            break;
        case 18:
            result = il2cpp_string_new("[Quest_SciFi_EliteFlyingRangedEnemy]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 19:
            result = il2cpp_string_new("[Arena_Jumbotron_Mainframe]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 20:
            result = il2cpp_string_new("[Arena_Jumbotron_Mainframe]");
            *Test4 = Vector3(0.1f, 0.1f, 0.1f);
            break;
        case 21:
            result = il2cpp_string_new("[BowlingBall]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 22:
            result = il2cpp_string_new("[PaddleballBall]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 23:
            result = il2cpp_string_new("[Quest_SciFi_BasicGroundRangedEnemy]");
            *Test4 = Vector3(2.f, 2.f, 2.f);
            break;
        case 24:
            result = il2cpp_string_new("[QuestMeatSword]");
            *Test4 = Vector3(2.f, 2.f, 2.f);
            break;
        case 25:
            result = il2cpp_string_new("[SoccerBall]");
            *Test4 = Vector3(2.f, 2.f, 2.f);
            break;
        case 26:
            result = il2cpp_string_new("[Quest_Dracula1_DraculaBoss]");
            *Test4 = Vector3(15.0f, 15.0f, 15.0f);
            break;
        case 27:
            result = il2cpp_string_new("[Quest_SciFi_BasicFlyingRangedEnemy]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 28:
            result = il2cpp_string_new("[Quest_Pirate_Ground_Explosive_ThrownEnemy]");
            *Test4 = Vector3(2.f, 2.f, 2.f);
            break;
        case 29:
            result = il2cpp_string_new("[Quest_Pirate_Ground_GibbetEnemy]");
            *Test4 = Vector3(2.f, 2.f, 2.f);
            break;
        case 30:
            result = il2cpp_string_new("[Quest_SciFi_BasicGroundRangedEnemy]");
            *Test4 = Vector3(1.f, 1.f, 1.f);
            break;
        case 31:
            result = il2cpp_string_new("[Quest_Pirate_Ground_RangedEnemy]");
            *Test4 = Vector3(4.f, 4.f, 4.f);
            break;
        case 32:
            result = il2cpp_string_new("[Quest_Pirate_Ground_RangedEnemy]");
            *Test4 = Vector3(2.5f, 2.5f, 2.5f);
            break;
        case 33:
            result = il2cpp_string_new("[Quest_SciFi_EliteGroundRangedEnemy]");
            *Test4 = Vector3(2.f, 2.f, 2.f);
            break;
        case 34:
            result = il2cpp_string_new("[Quest_SciFi_EliteGroundRangedEnemy]");
            *Test4 = Vector3(2.2f, 2.2f, 2.2f);
            break;
        case 35:
            result = il2cpp_string_new("[Arena_RailGun]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 36:
            result = il2cpp_string_new("[RecRoyale_Backpack]");
            *Test4 = Vector3(1.2f, 1.2f, 1.2f);
            break;
        case 37:
            result = il2cpp_string_new("[Quest_SciFi_EliteGroundRangedEnemy]");
            *Test4 = Vector3(1.2f, 1.2f, 1.2f);
            break;
        case 38:
            result = il2cpp_string_new("[Quest_Goblin_BasicGroundMeleeEnemy]");
            *Test4 = Vector3(0.3f, 0.3f, 0.3f);
            break;
        case 39:
            result = il2cpp_string_new("[Quest_Goblin_BasicGroundMeleeEnemy]");
            *Test4 = Vector3(6.f, 6.f, 6.f);
            break;
        case 40:
            result = il2cpp_string_new("[Quest_Pirate1_RumJug]");
            *Test4 = Vector3(2.2f, 2.2f, 2.2f);
            break;
        case 41:
            result = il2cpp_string_new("[Quest_Goblin_RotatingBossEnemy]");
            *Test4 = Vector3(0.4f, 0.4f, 0.4f);
            break;
        case 42:
            result = il2cpp_string_new("[Quest_Goblin_BasicGroundMeleeEnemy_Pike]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 43:
            result = il2cpp_string_new("[Quest_Goblin_KnightChargeEnemy]");
            *Test4 = Vector3(0.4f, 0.4f, 0.4f);
            break;
        case 44:
            result = il2cpp_string_new("[Quest_Goblin_BasicFlyingRangedEnemy]");
            *Test4 = Vector3(3.2f, 3.2f, 3.2f);
            break;
        case 45:
            result = il2cpp_string_new("[Quest_Goblin_BasicGroundMeleeEnemy]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 46:
            result = il2cpp_string_new("[Quest_Goblin_BogMonster_Tentacle]");
            *Test4 = Vector3(0.3f, 0.3f, 0.3f);
            break;
        case 47:
            result = il2cpp_string_new("[Quest_Goblin_BogMonster]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 48:
            result = il2cpp_string_new("[Quest_SciFi_TinyGroundExplosiveEnemy]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 49:
            result = il2cpp_string_new("[Quest_Dracula1_BasicLungingWolfEnemy]");
            *Test4 = Vector3(2.2f, 2.2f, 2.2f);
            break;
        case 50:
            result = il2cpp_string_new("[Quest_SciFi_KnightAssassinEnemy]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 51:
            result = il2cpp_string_new("[Quest_SciFi_KnightAssassinEnemy]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 52:
            result = il2cpp_string_new("[Quest_SciFi_KnightAssassinEnemy]");
            *Test4 = Vector3(6.2f, 6.2f, 6.2f);
            break;
        case 53:
            result = il2cpp_string_new("[DodgeballBall]");
            *Test4 = Vector3(2.2f, 2.2f, 2.2f);
            break;
        case 54:
            result = il2cpp_string_new("[Quest_SciFi_KnightAssassinEnemy]");
            *Test4 = Vector3(2.f, 2.f, 2.f);
            break;
        case 55:
            result = il2cpp_string_new("[Quest_Pirate_Ground_Explosive_ThrownEnemy]");
            *Test4 = Vector3(2.2f, 2.2f, 2.2f);
            break;
        case 56:
            result = il2cpp_string_new("[Quest_SciFi_KnightAssassinEnemy]");
            *Test4 = Vector3(0.5f, 0.5f, 0.5f);
            break;
        case 57:
            result = il2cpp_string_new("[Quest_Dracula1_MiniBossRangedBatEnemy]");
            *Test4 = Vector3(0.2f, 0.2f, 0.2f);
            break;
        case 58:
            result = il2cpp_string_new("[RecRoyale_Backpack]");
            *Test4 = Vector3(1.2f, 1.2f, 1.2f);
            break;
        case 59:
            result = il2cpp_string_new("[Quest_Goblin_WitchBoss]");
            *Test4 = Vector3(3.f, 3.f, 3.f);
            break;

        default:
            result = il2cpp_string_new("[Quest_Dracula1_MiniBossRangedBatEnemy]");
            *Test4 = Vector3(2.2f, 2.2f, 2.2f);
            break;
        }
        return SpawnPrefab_o(result, Test2, Test3, Test4, Test5, Test6, Test7);
    }





}

void(__stdcall* SpawnPrefabTool_o)(Il2CppString*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*);

void __stdcall SpawnPrefabTool_Changed(Il2CppString* Test1, DWORD* Test2, DWORD* Test3, DWORD* Test4, DWORD* Test5, DWORD* Test6, DWORD* Test7)
{

    auto BackPack = il2cpp_string_new("[Arena_RocketLauncher]");
    //std::cout << "" << BackPack << " " << Test2 << " " << Test3 << " " << Test4 << " " << Test5 << " " << Test6 << " " << Test7 << " " << std::endl;



    return SpawnPrefabTool_o(BackPack, Test2, Test3, Test4, Test5, Test6, Test7);

}

bool(__fastcall* set_CanUseBackPackTools_o)(DWORD*, DWORD*);

bool __stdcall set_CanUseBackPackTools_ToTrue(int32_t EFCABNCHAEL, DWORD* method)
{
    return true;
}

bool(__fastcall* set_HasEnoughMagAmmo_o)(DWORD*, DWORD*);

bool __stdcall set_HasEnoughMagAmmo_ToTrue(DWORD* __this, DWORD* method)
{
    return true;
}

bool(__fastcall* SetSelectionBoundsDirtyIfSelected_o)(DWORD*, DWORD*);

bool __stdcall SetSelectionBoundsDirtyIfSelected_ToFalse(DWORD* LAFPICAOEAI, DWORD* method)
{
    return false;
}

void(__fastcall* LevelProgressionTest_o)(DWORD*, int32_t, DWORD*);

void __stdcall LevelProgressionTest_Changed(DWORD* __this, int32_t CBFLAMEKMGN, DWORD* method)
{
    std::cout << __this << CBFLAMEKMGN << method << "::::END" << std::endl;
    return LevelProgressionTest_o(__this, CBFLAMEKMGN, method);
}

int(__fastcall* set_Ammo_o)(DWORD*, DWORD*);

int __stdcall set_Ammo(DWORD* __this, DWORD* method)
{

    return 99999;
}

bool(__fastcall* CanUseMakerPen_Server_o)(DWORD*, DWORD*);

bool __stdcall SetMakerPenUsage_True_Server(DWORD* __this, DWORD* method)
{
    return true;
}



bool(__fastcall* set_InventionSpawning_o)(DWORD*);

bool __stdcall Set_InventionSpawning_True(DWORD* method)
{
    return true;
}

bool(__fastcall* LocalPermissions_MakerPenSpawn_o)(DWORD*, DWORD*);

bool __stdcall SetLocalPermissions_MakerPenSpawning_True(DWORD* AKGNOBJJLNB, DWORD* method)
{
    return true;
}

bool(__fastcall* Set_CanFly_True_o)(DWORD*, DWORD*);

bool __stdcall Set_CanFly_True(DWORD* __this, DWORD* method)
{
    return true;
}

int(__fastcall* Set_CurrentAmmo_o)(DWORD*, DWORD*);

int __stdcall Set_CurrentAmmo_999(DWORD* __this, DWORD* method)
{
    return 99999;
}


bool(__fastcall* IsDev_o)(DWORD*);

bool __stdcall IsDev_ToTrue(DWORD* method)
{
    return true;
}

bool(__fastcall* IsLocalDev_o)(DWORD*, DWORD*);

bool __stdcall IsLocalDev_ToTrue(DWORD* __this, DWORD* method)
{
    return true;
}

bool(__fastcall* CodeStage_MakerPen_o)(DWORD*, DWORD*);

bool __stdcall CodeStage_MakerPen_ToTrue(DWORD* __this, DWORD* method)
{
    return true;
}

bool(__fastcall* LocalPlayerUseCreationMode_o)(DWORD*);

bool __stdcall LocalPlayerUseCreationMode_ToTrue(DWORD* method)
{
    return true;
}

bool(__fastcall* CanCreate_o)(DWORD*, DWORD*);

bool __stdcall CanCreate_ToTrue(DWORD* AKGNOBJJLNB, DWORD* method)
{
    return true;
}

bool(__fastcall* CanPlayerCreateWithMakerPen_o)(DWORD*, DWORD*, DWORD*);

bool __stdcall CanPlayerCreateWithMakerPen_ToTrue(DWORD* AKGNOBJJLNB, DWORD* HJFDMKOEODD, DWORD* method)
{
    return true;
}

bool(__fastcall* PlayerCanUseMakerPenAccordingToRoles_o)(int32_t, DWORD*, DWORD*, DWORD*);

bool __stdcall PlayerCanUseMakerPenAccordingToRoles_ToTrue(int32_t ELEHPEANOJK, DWORD* OJDKCPHLLGH, DWORD* NAHFGDKCKAI, DWORD* method)
{
    return true;
}

void(__fastcall* LogWasMakerPenEverOut_o)(DWORD*, DWORD*);

void __stdcall LogWasMakerPenEverOut_ToNull(DWORD* __this, DWORD* method)
{
    return;
}

bool(__fastcall* WasMakerPenEverOut_o)(DWORD*);

bool __stdcall WasMakerPenEverOut_ToFalse(DWORD* method)
{
    return false;
}

bool(__fastcall* IsLocalPlayerMakerPenHeldInHand_o)(DWORD*);

bool __stdcall IsLocalPlayerMakerPenHeldInHand_ToFalse(DWORD* method)
{
    return false;
}

bool(__fastcall* IsLocalPlayerMakerPenHeldOrEquipped_o)(DWORD*);

bool __stdcall IsLocalPlayerMakerPenHeldOrEquipped_ToFalse(DWORD* method)
{
    return false;
}

bool(__fastcall* LocalRemoveTrialItems_o)(DWORD*, DWORD, DWORD*);

bool __stdcall LocalRemoveTrialItems_ToTrue(DWORD* __this, DWORD item, DWORD method)
{
    return false;
}

void(__fastcall* BlowOutCandles_o)(DWORD*, int32_t, DWORD*);

void __stdcall BlowOutCandels_RPCCall(DWORD* __this, int32_t GILCGNNDEGO, DWORD* method)
{
    return BlowOutCandels_RPCCall(__this, 2, method);
}

void(__fastcall* PaintBallFlagTaken_o)(DWORD*, DWORD*, DWORD*, DWORD*);

void __stdcall PaintBallFlagTaken_Changed(DWORD* __this, DWORD* FEPNGKFEELL, DWORD* CLILLOOPIEO, DWORD* method)
{
    std::cout << "__this" << __this << "FEPNGKFEELL" << FEPNGKFEELL << "CLILLOOPIEO" << CLILLOOPIEO << "method" << method << ::std::endl;
    PaintBallFlagTaken_o(__this, FEPNGKFEELL, CLILLOOPIEO, method);
}

void(__fastcall* BlowCandles_o)(DWORD*, int32_t, DWORD*);

void __stdcall BlowOutCandles_RPCCALL(DWORD* __this, int32_t GILCGNNDEGO, DWORD* method)
{
    std::cout << "test called: " << " this__: " << __this << " method: " << method << "Progression Type: " << GILCGNNDEGO << std::endl;
    return BlowOutCandles_RPCCALL(__this, GILCGNNDEGO, method);
    StoreFirstValue = __this;
    StoreProgressionType = GILCGNNDEGO;
    ThirdUnknownValue = method;

}

typedef void(__fastcall* blowOutCandles)(DWORD* a, int32_t b, DWORD* c);
blowOutCandles pBlowoutCandles = nullptr;
blowOutCandles pBlowoutCandlesTarget = reinterpret_cast<blowOutCandles>(0x2040E40);
void __fastcall DetourBlowoutCandles(DWORD* a, int32_t b, DWORD* c)
{
    return pBlowoutCandles(StoreFirstValue, StoreProgressionType, ThirdUnknownValue);

}

bool(__fastcall* CanUseKeys_o)(DWORD*, bool, DWORD*);

bool __stdcall CanUseKeys_ToTrue(DWORD* __this, bool KBCCHGJMPKG, DWORD* method)
{
    return true;
}

bool(__fastcall* DoesPlayerOwnKey_o)(DWORD*, int64_t, DWORD*);

bool __stdcall DOesPLayerOwnKey_ToTrue(DWORD* __this, int64_t NJOGGAGMLFL, DWORD* method)
{
    return true;

}



bool(__fastcall* RoleAllowsSpawningInventions_o)(DWORD*, DWORD*);

bool __stdcall RoleAllowsSpawningInventions_ToTrue(DWORD* LLFLMPPMGID_o, DWORD* method)
{
    return true;
}

void(__fastcall* DisableCodeStage_AntiCheat_o)(DWORD*, DWORD*);

void __stdcall DisableCodeStage_AntiCheat_True(DWORD* __this, DWORD* method)
{
    native_invoke::run();
    return;
}

void(__stdcall* DeserializeEventData_o)(DWORD*, DWORD*, DWORD*, int32_t, DWORD*);

void __stdcall DeserializeEventData_Display(DWORD* __this, DWORD* din, DWORD* target, int32_t flags, DWORD* method)
{
    std::cout << __this << din << target << flags << method << std::endl;
    return DeserializeEventData_o(__this, din, target, flags, method);
}

int(__stdcall* get_AccountRoleType_o)(DWORD*, DWORD*);

int __stdcall get_AccountRoleType_To255(DWORD* __this, DWORD* method)
{
    return 255;
}

bool(__fastcall* PlayerIsInvincible_o)(DWORD*, DWORD*, DWORD*);

bool __stdcall PlayerIsInvincible_ToTrue(DWORD* __this, DWORD* CALNIJNFDFH, DWORD* method)
{
    return true;
}

void(__stdcall* PlayerLevelUpFeedBack_o)(DWORD*, DWORD*);

DWORD* Test1_LevelUpFeedBack;
DWORD* Test2_LevelUpFeedBack;
void __stdcall PlayerLevelUpFeedBack_Changed(DWORD* Test1, DWORD* Test2)
{
    Test1_LevelUpFeedBack = Test1;
    Test2_LevelUpFeedBack = Test2;
    std::cout << "cheer called! " << Test1 << " " << Test2 << " " << std::endl;
    return PlayerLevelUpFeedBack_o(Test1, Test2);
}

bool(__stdcall* CanPlayerUseTools_o)(DWORD*, DWORD*);

bool __stdcall CanLocalPlayerUseTools_ToTrue(DWORD* Test, DWORD* Test2)
{
    return true;
}

native::RecRoom::Core::Combat::RangedWeapon* Test1_Value;
native::UnityEngine::Vector3 Test2_Value;
float Test33_Value;
MethodInfo* Test4_Value;

native::RecRoom::Core::Combat::RangedWeapon::_tFire PlayerShootWeapon_o;

void  PlayerShootWeapon_Changed(native::RecRoom::Core::Combat::RangedWeapon* Test, native::UnityEngine::Vector3 Test2, float Test3, MethodInfo* Test4)
{

    Test1_Value = Test;
    Test2_Value = Test2;
    Test33_Value = Test3;
    Test4_Value = Test4;


    if (SpawnPrefabOnShoot)
    {


        auto PlayerLocalPlayer = native::Player::get_LocalPlayer(CheaterAxis);

        auto LocalPLayerHead = native::Player::get_Head(PlayerLocalPlayer, CheaterAxis);

        auto PhotonPlayer = native::Player::get_PhotonPlayer(PlayerLocalPlayer, MethodInfoTest1);

        //native::PhotonNetwork::set_MasterClient(PhotonPlayer, nullptr);


        auto pos = native::UnityEngine::Transform::get_position(
            native::UnityEngine::Component::get_transform(
                LocalPLayerHead,
                nullptr
            ),
            nullptr
        );

        pos.y -= 0.2f;
        pos.z += 0.4f;

        std::cout << "Pos x: " << pos.x << std::endl;
        std::cout << "Pos y: " << pos.y << std::endl;
        std::cout << "Pos z: " << pos.z << std::endl;

        native::PhotonNetwork::Instantiate(il2cpp_string_new("[Arena_Pistol]"), pos, { 0,0,0,1.0f }, { 0.2f,0.2f,0.2f }, 0, nullptr);
        return;

    }
    else if (!SpawnPrefabOnShoot)
    {

        Test1_Value->bulletFireSpeed = 300.f;
        auto PreFabVector = native::UnityEngine::Transform::get_forward(Test1_Value->barrelTransform, nullptr);
        PreFabVector.x *= Test->bulletFireSpeed;
        PreFabVector.y *= Test->bulletFireSpeed;
        PreFabVector.z *= Test->bulletFireSpeed;
        PlayerShootWeapon_o(Test1_Value, PreFabVector, Test33_Value, Test4_Value);


    }
}



void LoopFire(native::RecRoom::Core::Combat::RangedWeapon* __this, float charge, native::UnityEngine::Vector3 velocity, MethodInfo* method)
{
    //bool __state_rapidfire = true;
    //rapid_fire_weapons = std::map<native::RecRoom::Core::Combat::RangedWeapon*, bool>();
    ////std::map<native::RecRoom::Core::Combat::RangedWeapon*, bool> rapid_fire_weapons;
    //auto iter = rapid_fire_weapons.find(__this);
    //if (__state_rapidfire && iter == rapid_fire_weapons.end()) 
    //{
    //    std::cout << "Function Failed \n";
    //    iter = rapid_fire_weapons.emplace(__this, false).first;
    //}
    //else if (!__state_rapidfire) 
    //{
    //    std::cout << "Function Failed 2\n";
    //    rapid_fire_weapons.clear();
    //    return;
    //}

    //if (!iter->second) 
    //{
    //    native_invoke::add_recurring([__this, charge]()
    //        {
    //            auto iter = rapid_fire_weapons.find(__this);
    //            if (iter == rapid_fire_weapons.end())
    //            {
    //                std::cout << "Function Failed 3\n";
    //                return false;
    //            }
    //            if (!__this->_tool || !native::RecRoom::Core::Combat::Weapon::get_HasEnoughMagazineAmmunition(__this, nullptr))
    //            {
    //                std::cout << "No Ammo\n";
    //                rapid_fire_weapons.erase(iter); //will only be called after this function so it's fine
    //                return false;
    //            }

    //            auto velocity = native::UnityEngine::Transform::get_forward(__this->barrelTransform, nullptr);
    //            velocity.x *= __this->bulletFireSpeed;
    //            velocity.y *= __this->bulletFireSpeed;
    //            velocity.z *= __this->bulletFireSpeed;

    //            native::RecRoom::Core::Combat::RangedWeapon::Fire(__this, velocity, charge, nullptr);
    //            return true;
    //        });

    //    iter->second = true;
    //}
    while (true)
    {

        //auto iter = MethodPointers::rapid_fire_weapons.find(__this);

    //    //rapid_fire_weapons = std::map<native::RecRoom::Core::Combat::RangedWeapon*, bool>();

        __this->bulletFireSpeed = 300.f;
        velocity = native::UnityEngine::Transform::get_forward(__this->barrelTransform, nullptr);
        velocity.x *= __this->bulletFireSpeed;
        velocity.y *= __this->bulletFireSpeed;
        velocity.z *= __this->bulletFireSpeed;


        native::RecRoom::Core::Combat::RangedWeapon::Fire(__this, velocity, charge, nullptr);
        std::this_thread::sleep_for(std::chrono::milliseconds(50));

        if (GetAsyncKeyState(VK_F7) & 1)
        {
           break;
        }
    }

}





bool(__stdcall* CanPrintImage_o)(DWORD*, DWORD*);

bool __stdcall CanPrintImage_True(DWORD* Test1, DWORD* Test2)
{
    return true;
}

void(__stdcall* SpawnGiftPackage_o)(DWORD*, DWORD*, DWORD*);

DWORD* Gift;
DWORD* MethodII;
DWORD* Gift2;
void __stdcall SpawnGiftPackage_changed(DWORD* test, DWORD* test2, DWORD* test3)
{
    Gift = test;
    MethodII = test2;
    test3 = Gift2;
    std::cout << "Gift Spawned: " << test << std::endl;
    return SpawnGiftPackage_o(test, test2, test3);

}


void(__stdcall* OnTookDamage_o)(DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*);

void __stdcall OnTookDamage_Changed(DWORD* Test1, DWORD* Test2, DWORD* Test3, DWORD* Test4, DWORD* Test5, DWORD* Test6, DWORD* Test7, DWORD* Test8, DWORD* Test9)
{
    std::cout << "Took Damage!!!" << std::endl;
    return;
}


void(__stdcall* RpcCheerPlay_o)(DWORD*, DWORD*, DWORD*);

DWORD* Test1_Cheer;
DWORD* Test2_Cheer;
DWORD* Test3_Cheer;

void __stdcall RpcCheerPlay_Changed(DWORD* test1, DWORD* test2, DWORD* test3)
{
    Test1_Cheer = test1;
    Test1_Cheer = test2;
    Test1_Cheer = test3;
    std::cout << "Player Cheered...." << std::endl;
    return RpcCheerPlay_o(test1, test2, test3);
}

native::RecRoom::Core::Encounters::BaseSpawnEnemyEncounterStep* KillAllEnemies_Test;
MethodInfo* method_info_KillAllTest;

native::RecRoom::Core::Encounters::BaseSpawnEnemyEncounterStep::_tMasterKillAllLivingEnemies oMasterKillAllLivingEnenmies;
void hMasterKillAllLivingEnenmies(native::RecRoom::Core::Encounters::BaseSpawnEnemyEncounterStep* __this, MethodInfo* method_info)
{


    std::cout << "Killed All Enemies\n";


    oMasterKillAllLivingEnenmies(__this, method_info);
    __this->livingEnemies - 100;

    KillAllEnemies_Test = __this;
    method_info_KillAllTest = method_info;




}


native::Player* (__stdcall* oGetLocalPlayer)(MethodInfo*);



native::Player* hGetLocalPlayer(MethodInfo* method)
{
    //std::cout << "Got the LocalPlayer Buddy\n";
    CheaterAxis = method;
    return oGetLocalPlayer(method);
}

native::PhotonPlayer* (__stdcall* oGetPhotonPlayer)(native::Player*, MethodInfo*);



native::PhotonPlayer* hGetPhotonPlayer(native::Player* PhotonPlayer1, MethodInfo* PhotonPlayer2)
{
    //std::cout << "PhotonPlayerCRASH" << std::endl;
    PhotonPlayerField = PhotonPlayer1;
    MethodInfoTest1 = PhotonPlayer2;
    return oGetPhotonPlayer(PhotonPlayer1, PhotonPlayer2);
}


void(__stdcall* oMasterResetLocalPlayerHealth)(native::GameCombatManager*, native::PhotonPlayer*, int, MethodInfo*);

native::GameCombatManager* Test1_ResetHealth;
native::PhotonPlayer* Test2_ResetHealth;
int Test3_ResetHealth;
MethodInfo* Test4_ResetHealth;
bool EnableMaxHealthSet = false;

void hMasterResetLocalPlayerHealth(native::GameCombatManager* Test1, native::PhotonPlayer* Test2, int Test3, MethodInfo* Test4)
{
    //std::cout << "LocalPlayer Health Restored\n";
    Test3 = 999999;
    auto PlayerLocalPlayer = native::Player::get_LocalPlayer(CheaterAxis);
    auto LocalPLayerHead = native::Player::get_Head(PlayerLocalPlayer, CheaterAxis);
    auto PhotonPlayer = native::Player::get_PhotonPlayer(PlayerLocalPlayer, MethodInfoTest1);
    Test2 = PhotonPlayer;
    Test1_ResetHealth = Test1;
    Test2_ResetHealth = Test2;
    Test3_ResetHealth = Test3;
    Test4_ResetHealth = Test4;
    std::cout << "Player Health to max\n";
    std::cout << Test1 << " " << Test2 << " " << Test3 << " " << Test4 << std::endl;
    return oMasterResetLocalPlayerHealth(Test1, Test2, Test3, Test4);

}

int(__stdcall* oGetPlayerHealth)(native::GameCombatManager*, native::PhotonPlayer*, MethodInfo*);

int __stdcall hGetPlayerHealth(native::GameCombatManager* Test1, native::PhotonPlayer* Test2, MethodInfo* Test3)
{




    std::cout << "Replaced LocalPlayer's Health\n";
    return 999999;



}

int(__stdcall* oget_maxhealth)(native::GameCombatManager*, MethodInfo*);

int __stdcall hget_maxhealth(native::GameCombatManager* test1, MethodInfo* test2)
{
    std::cout << "MaxHealth to: 99999\n";
    return 999999;

}

bool(__stdcall* oIsOverlappingObstruction)(DWORD*, DWORD*);

bool __stdcall hIsOverlappingObstruction(DWORD* Test, DWORD* Test2)
{
    return false;
}
bool SetHealthToMax = true;

//native::Player* find_rr_player(native::PhotonPlayer* p_player)
//{
//    using namespace native;
//    using namespace System::Collections::Generic;
//    auto player = native::PhotonNetwork::get_playerList(nullptr);
//    auto players = (native::PhotonPlayer*)player;
//    auto len = List::get_Count(player, nullptr);
//    std::cout << "List Count: " << len << std::endl;
//
//    Player* current;
//    
//        current = (Player*)List::get_Item(player, 0, nullptr);
//        std::cout << "current Player: " << current << std::endl;;
//        if (Player::get_PhotonPlayer(current, nullptr) == p_player)
//            return current;
//    
//
//    return nullptr;
//}

long(__stdcall* oGetRoomId)(DWORD*, MethodInfo*);

long __stdcall hGetRoomId(DWORD* Test, MethodInfo* Test2)
{
    std::cout << "Got RoomID\n";
    return oGetRoomId(Test, Test2);
}

native::DodgeballManager::_tRpcMasterRequestPlayerOut oPlayerHit;



void hPlayerHit(native::DodgeballManager* DodgeBall, native::PhotonPlayer* Thrower, native::PhotonPlayer* OutPlayer, native::UnityEngine::Vector3 outpos, MethodInfo* testMethod)
{

    auto PlayerLocalPlayer = native::Player::get_LocalPlayer(CheaterAxis);
    auto PhotonPlayer = native::Player::get_PhotonPlayer(PlayerLocalPlayer, MethodInfoTest1);

    if (OutPlayer != PhotonPlayer)
    {
        return oPlayerHit(DodgeBall, Thrower, OutPlayer, outpos, testMethod);
    }
    else if (OutPlayer == PhotonPlayer)
    {
        return;
    }
}

bool(__stdcall* IsValid)(DWORD*, DWORD*, DWORD*, MethodInfo*);

bool __stdcall IsValid1(DWORD*, DWORD*, DWORD*, MethodInfo*) 
{
    std::cout << "Valid Set True IsValid\n";
    return true;
}


native::RecNetRunTime::_tAlwaysValidVerifyer AlwaysValidVerifyer_IsValid1;

bool AlwaysValidVerifyer_IsValid11(DWORD*, DWORD*, DWORD*, MethodInfo*) 
{
    std::cout << "Valid Set True AlwaysTime\n";
    return true;
}

native::RecNetRunTime::_tTimeValidVerifyer TimeValidVerifyer1;

bool TimeValidVerifyer1_IsValid11(DWORD*, DWORD*, DWORD*, MethodInfo*)
{
    std::cout << "Valid Set True TimeValid\n";
    return true;
}

void(__fastcall* OBootLocalPlayerToDorm)(DWORD*, DWORD*,DWORD*, DWORD*, MethodInfo*);

void __stdcall HBootLocalPLayerToDorm(DWORD* __this, DWORD* AlertMessage, DWORD* LoadResoruce, DWORD* IsValid, MethodInfo* method)
{
    std::cout << "Booted To Dorm...\n";
    return;
}

native::EACManager::_tUpdate EacUpdateO;

void HEacManagerUpdate(native::EACManager* __this, MethodInfo* method) 
{
    return;
}

void(__fastcall* OEacManagerStart)(DWORD*,  MethodInfo*);

void __stdcall HEacManagerStart(DWORD* __this, MethodInfo* method)
{
    std::cout << "Started EAC False\n";
    return;
}

void(__stdcall* CodeStageUpdateO)(DWORD*, MethodInfo*);

void __stdcall CodeStageUpdateH(DWORD* __this, MethodInfo* method)
{
   // std::cout << "CodeStage Disabled\n";
    return;
}

void (__fastcall* FatalApplicationQuito)(DWORD*, DWORD*, MethodInfo*);

void __stdcall FatalApplicationQuith(DWORD* __this, DWORD* __this2, MethodInfo* method) 
{
    std::cout << "Tried to kill your game\n";
    return;
}

void(__fastcall* ApplicationQuito)(DWORD*, MethodInfo*);

void __stdcall ApplicationQuith(DWORD* __this, MethodInfo*) 
{
    std::cout << "Tried to quit game\n";
    return;
}

void (__fastcall* RunJoinDormRoomo)(DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, MethodInfo*);

void __stdcall RunJoinDormRoomh(DWORD* __this, DWORD* _this, DWORD* ____this, DWORD* Tst, DWORD* ts2, DWORD* test, DWORD* yet, DWORD* poop, DWORD* poop1, MethodInfo* method) 
{
    std::cout << "Tried to Join Room\n";
    return;
}

void(__fastcall* ConnectionReseto)(MethodInfo*);

void __stdcall ConnectionResetH(MethodInfo* method) 
{
    std::cout << "Tried to kill connection\n";
    return;
}

void(__fastcall* OnIntegrityViolationO)(DWORD*, DWORD*, DWORD*, DWORD*, MethodInfo*);
void __stdcall OnIntegrityViolationH(DWORD* _this, DWORD* __this, DWORD* ___this, DWORD* ____this, MethodInfo* method)
{
    std::cout << "Integrity Violation\n";
    return;
}

bool(__fastcall* IsActiveO)(MethodInfo*);

bool __stdcall IsActiveH(MethodInfo* method) 
{
    std::cout << "Set is active true\n";
    return true;
}

bool(__fastcall* InDormRoomO)(MethodInfo*);

bool __stdcall InDormRoomH(MethodInfo* method)
{
    return true;
}

void(__fastcall* OInitEAC)(DWORD*, DWORD*, DWORD*, MethodInfo*);

void __stdcall HInitEAC(DWORD* Test1, DWORD* Test2, DWORD* Test3, MethodInfo* Method)
{
    std::cout << "No Eac For you!!!!\n";
    return;
}

void(__fastcall* ReliableCallO)(DWORD*, bool, MethodInfo*);

void __stdcall ReliableCallH(DWORD* __this, bool value, MethodInfo* method) 
{
    std::cout << "Call Made true no kick frfr maybe idfk\n";
    return ReliableCallO(__this, true, method);
}

void(__fastcall* DisconnectO)(DWORD*, MethodInfo*);

void __stdcall DisconnectH(DWORD* __this, MethodInfo* method) 
{
    std::cout << "Tried To Kill You Fuck you\n";
    return;
}

bool(__stdcall* PopNetworkMessageO)(DWORD*, DWORD*, DWORD*, MethodInfo*);

bool __stdcall PopNetworkMessageH(DWORD* __this, DWORD* Test, DWORD* Test2, MethodInfo* Poop) 
{
    std::cout << "Value set to false\n";
    return false;
}



void(__stdcall* OnApplicationQuitEACo)(DWORD*, MethodInfo*);

void __stdcall OnApplicationQuitEACh(DWORD* __this, MethodInfo* method)
{
    std::cout << "Function killed Quit\n";
    return;
}

void(__stdcall* EACQuit2O)(MethodInfo*);

void __stdcall EACQuit2H(MethodInfo* method)
{
    std::cout << "Quit function patched\n";
    return;
}

void(__stdcall* ConnectionResetEACo)(DWORD*, MethodInfo*);

void __stdcall ConnectionResetEACh(DWORD* __this, MethodInfo* method)
{
    std::cout << "ConnectionReset Removed\n";
    return;
}

void(__stdcall* ChallengeResponseO)(Il2CppString*, MethodInfo*);

void __stdcall ChallengeResponseH(Il2CppString* __this, MethodInfo* method)
{
    std::cout << "Challenge Removed\n";
    return;
}

void(__stdcall* IntegrityCheckO)(Il2CppObject*, DWORD*, MethodInfo*);

void __stdcall IntegrityCheckH(Il2CppObject* __this, DWORD* __this2, MethodInfo* method)
{
    std::cout << "IntegrityCheck Removed\n";
    return;
}

void(__stdcall* PushNetWorkO)(DWORD*, DWORD*, MethodInfo*);

void __stdcall PushNetWorkH(DWORD* __this, DWORD* __this2, MethodInfo* method)
{
    std::cout << "PushNetWork Removed\n";
    return;
}

void(__stdcall* PushNetWorkRunTimeO)(DWORD*, DWORD*, MethodInfo*);

void __stdcall PushNetWorkRunTimeH(DWORD* __this, DWORD* __this2, MethodInfo* method)
{
    std::cout << "PushNetWork RunTime Removed\n";
    return;
}


void(__stdcall* ConnectionResetRunTimeO)( MethodInfo*);

void __stdcall ConnectionResetRunTimeH(MethodInfo* method)
{
    std::cout << "ConnectionReset RunTime Removed\n";
    return;
}

void(__stdcall* PushNetWorkEACo)(DWORD*, DWORD*, MethodInfo*);

void __stdcall PushNetWorkEACH(DWORD* _this, DWORD* __this, MethodInfo* method)
{
    std::cout << "PushNetWork EAC Removed\n";
    return;
}

void(__stdcall* KillPlayerGameOnViO)(DWORD*, DWORD*, DWORD*, DWORD*, MethodInfo*);

void __stdcall KillPlayerGameOnViH(DWORD* _this, DWORD* __this, DWORD* ___this, DWORD* _____this, MethodInfo* method)
{
    std::cout << "KillPlayerGameOnVi RunTime Removed\n";
    return;
}

void(__stdcall* NativeConnectionResetRunTimeO)(MethodInfo*);

void __stdcall NativeConnectionResetRunTimeH(MethodInfo* method)
{
    std::cout << "NativeClient ConnectionsRest Removed\n";
    return;
}

void(__stdcall* OnInternalEventO)(DWORD*, DWORD*, DWORD*, MethodInfo*);

void __stdcall OnInternalEventH(DWORD* _this, DWORD* __this, DWORD* ___this, MethodInfo* method)
{
    std::cout << "OnInternalEvent RunTime Removed\n";
    return;
}

void(__stdcall* OnHostValidationO)(DWORD*, DWORD*, DWORD*, MethodInfo*);

void __stdcall OnHostValidationH(DWORD* _this, DWORD* __this, DWORD* ___this, MethodInfo* method)
{
    std::cout << "OnHostValidation RunTime Removed\n";
    return;
}

bool(__stdcall* PopNetworkMessag2O)(DWORD*, DWORD*, MethodInfo*);

bool __stdcall PopNetworkMessage2H(DWORD* _this, DWORD* __this, MethodInfo* method)
{
    //std::cout << "PopNetworkMessage Fixed\n";
    return false;
}


void(__stdcall* RunTimePollStatusO)(MethodInfo*);

void __stdcall RunTimePollStatusH(MethodInfo* method)
{
    std::cout << "RunTimePollStatus Removed\n";
    return;
}

void(__stdcall* KillConnection2O)(DWORD*, MethodInfo*);

void __stdcall KillConnection2H(DWORD* __this, MethodInfo* method)
{
    std::cout << "KillConnection2 Removed\n";
    return;
}

void(__stdcall* CreateGameCliento)(Il2CppString*, MethodInfo*);

void __stdcall CreateGameClienth(Il2CppString* InterfaceVersion, MethodInfo* method) 
{
    std::cout << "Game Client Created EAC \n";
    return;
}

void(__stdcall* ConnectionResetO)(DWORD*, DWORD*, MethodInfo*);

void __stdcall ConnectionResetH2(DWORD* ___this, DWORD* __this, MethodInfo* method)
{
    std::cout << "Game Connection was reset \n";
    return;
}

void(__stdcall* CreateEACO)(DWORD*, MethodInfo*);

void __stdcall CreateEACH(DWORD* __this, MethodInfo* method) 
{
    std::cout << "EAC not created\n";
    return;
}

void(__stdcall* DestoryEACCliento)(DWORD*, DWORD*, DWORD*);

void __stdcall DestoryEACClientH(DWORD* __this, DWORD* __this1, DWORD* method) 
{
    std::cout << "Client Killed (EAC)\n";
    return;
}

void(__stdcall* PollStatusO)(DWORD*, DWORD*, DWORD*, DWORD*, DWORD*, MethodInfo*);

void __stdcall PollStatusH(DWORD* __this, DWORD* __this1, DWORD* __this2, DWORD* ___this, DWORD* _this, MethodInfo* method)
{
    std::cout << "PollStatus Returned Shit\n";
    return;
}

std::string(__stdcall* PhotonVersionO)(MethodInfo*);

std::string __stdcall PhotonVersionH(MethodInfo* methodinfo)
{
    std::cout << "Version changed...\n";
    return "20230519";
}


bool CreateHooks(bool CreateHooks) 
{
    // Creates and Enables the hooks 
    if (CreateHooks)
    {
        
        MH_Initialize();

        MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x1023BD0), &PhotonVersionH, (LPVOID*)(&PhotonVersionO));
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x1023BD0));
        /*MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5B00), &CreateGameClienth, (LPVOID*)(&CreateGameCliento));
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5B00));

        MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5A50), &ConnectionResetH2, (LPVOID*)(&ConnectionResetO));
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5A50));

        MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5BA0), &CreateEACH, (LPVOID*)(&CreateEACO));
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5BA0));

        MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B6650), &PushNetWorkEACH, (LPVOID*)&PushNetWorkEACo);
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B6650));

        MH_CreateHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x67B6410), &PopNetworkMessage2H, (LPVOID*)&PopNetworkMessag2O);
        MH_EnableHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x67B6410));
        
        MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5C90), &DestoryEACClientH, (LPVOID*)&DestoryEACCliento);
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5C90));

        MH_CreateHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x67B6320), &PollStatusH, (LPVOID*)&PollStatusO);
        MH_EnableHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x67B6320));

        MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C5F40), &OnApplicationQuitEACh, (LPVOID*)&OnApplicationQuitEACo);
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C5F40));

        MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C5E60), &EACQuit2H, (LPVOID*)&EACQuit2O);
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C5E60));*/

        MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x18EBF10), &CodeStageUpdateH, (LPVOID*)(&CodeStageUpdateO));
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x18EBF10));

        //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x3524EF0), &KillConnection2H, (LPVOID*)&KillConnection2O);
        //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x3524EF0));

        //MH_CreateHook(native::EACManager::Update, &HEacManagerUpdate, (LPVOID*)(&EacUpdateO));
        //MH_EnableHook(native::EACManager::Update);
        
         

         

        // MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C5650), &IntegrityCheckH, (LPVOID*)&IntegrityCheckO);
         //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C5650));

         //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C5EF0), &ConnectionResetEACh, (LPVOID*)&ConnectionResetEACo);
         //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C5EF0));

         //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C53F0), &ChallengeResponseH, (LPVOID*)&ChallengeResponseO);
         //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67C53F0));

         

         //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B4E20), &RunTimePollStatusH, (LPVOID*)&RunTimePollStatusO);
         //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B4E20));

         

        // MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B3FF0), &ConnectionResetRunTimeH, (LPVOID*)&ConnectionResetRunTimeO);
         //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B3FF0));

        // MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5130), &PushNetWorkRunTimeH, (LPVOID*)&PushNetWorkRunTimeO);
        // MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5130));

         //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B4780), &KillPlayerGameOnViH, (LPVOID*)&KillPlayerGameOnViO);
         //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B4780));

         //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B3BC0), &PushNetWorkH, (LPVOID*)&PushNetWorkO);
         //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B3BC0));

         //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B3450), &NativeConnectionResetRunTimeH, (LPVOID*)&NativeConnectionResetRunTimeO);
         //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B3450));

        // MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B4A60), &OnHostValidationH, (LPVOID*)&OnHostValidationO);
        // MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B4A60));

         //MH_CreateHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x67B4410), &IsActiveH, (LPVOID*)&IsActiveO);
         //MH_EnableHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x67B4410));

         //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B44D0), &NativeConnectionResetRunTimeH, (LPVOID*)&NativeConnectionResetRunTimeO);
         //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B44D0));

        //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x145EFC0), &LocalRemoveTrialItems_ToTrue, (LPVOID*)&LocalRemoveTrialItems_o);
        //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x145EFC0));

        MH_CreateHook(native::RecRoom::Core::Combat::RangedWeapon::get_IsOnCooldown, &set_boolean_ForWeapon, (LPVOID*)(set_CoolDownBool_o));
        MH_EnableHook(native::RecRoom::Core::Combat::RangedWeapon::get_IsOnCooldown);
        MH_CreateHook(native::RecRoom::Core::Combat::Weapon::get_TotalAmmo, &set_Ammo, (LPVOID*)(set_Ammo_o));
        MH_EnableHook(native::RecRoom::Core::Combat::Weapon::get_TotalAmmo);
        MH_CreateHook(native::RecRoom::Core::Locomotion::PlayerMovement::get_IsFlyingEnabled, &Set_CanFly_True, (LPVOID*)(Set_CanFly_True_o));
        MH_EnableHook(native::RecRoom::Core::Locomotion::PlayerMovement::get_IsFlyingEnabled);
        MH_CreateHook(native::RecRoom::Core::Combat::Weapon::get_HasEnoughMagazineAmmunition, &set_HasEnoughMagAmmo_ToTrue, (LPVOID*)(set_HasEnoughMagAmmo_o));
        MH_EnableHook(native::RecRoom::Core::Combat::Weapon::get_HasEnoughMagazineAmmunition);
        MH_CreateHook(native::RecRoom::Core::Combat::Weapon::get_MagAmmo, &Set_CurrentAmmo_999, (LPVOID*)(Set_CurrentAmmo_o));
        MH_EnableHook(native::RecRoom::Core::Combat::Weapon::get_MagAmmo);
        MH_CreateHook(native::SessionManager::get_IsDev, &IsDev_ToTrue, (LPVOID*)(IsDev_o));
        MH_EnableHook(native::SessionManager::get_IsDev);
        MH_CreateHook(native::GlobalModel::get_LocalAccountIsDeveloper, &IsLocalDev_ToTrue, (LPVOID*)(IsLocalDev_o));
        MH_EnableHook(native::GlobalModel::get_LocalAccountIsDeveloper);
        //MH_CreateHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0xAB3DC0), &LocalRemoveTrialItems_ToTrue, (LPVOID*)&LocalRemoveTrialItems_o);
        //MH_EnableHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0xAB3DC0));
        MH_CreateHook(native::ClothingCustomizerModel::get_CanUseBackpackTool, &CanLocalPlayerUseTools_ToTrue, (LPVOID*)&CanPlayerUseTools_o);
        MH_EnableHook(native::ClothingCustomizerModel::get_CanUseBackpackTool);
        MH_CreateHook(native::RecRoom::Core::Combat::RangedWeapon::Fire, &PlayerShootWeapon_Changed, (LPVOID*)(&PlayerShootWeapon_o));
        MH_EnableHook(native::RecRoom::Core::Combat::RangedWeapon::Fire);
        
        
        MH_CreateHook(native::GameCombatManager::MasterDamagePlayer, &MasterDamagePlayer_999, (LPVOID*)&MasterDamagePlayer_o);
        MH_EnableHook(native::GameCombatManager::MasterDamagePlayer);
        //No Need For Method Pointer for this plus lazy
        //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x19F5770), &MasterSetScore_999, (LPVOID*)&MasterSetScore_o);
        //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x19F5770));
        //END
       MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x262FBB0), &SpawnPrefabTool_Changed, (LPVOID*)&SpawnPrefabTool_o);
        MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x262FBB0));
        //MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x3B9BDC0), &SpawnPrefab_Changed, (LPVOID*)&SpawnPrefab_o);
        //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x3B9BDC0));
        //MH_CreateHook(native::Player::get_PhotonPlayer, &hGetPhotonPlayer, (LPVOID*)(&oGetPhotonPlayer));
        //MH_EnableHook(native::Player::get_PhotonPlayer);
        //MH_CreateHook(native::Player::get_LocalPlayer, &hGetLocalPlayer, (LPVOID*)(&oGetLocalPlayer));
        //MH_EnableHook(native::Player::get_LocalPlayer);
        //MH_CreateHook(native::RecRoom::Core::Encounters::BaseSpawnEnemyEncounterStep::MasterKillAllLivingEnemies, &hMasterKillAllLivingEnenmies, (LPVOID*)(&oMasterKillAllLivingEnenmies));
        //MH_EnableHook(native::RecRoom::Core::Encounters::BaseSpawnEnemyEncounterStep::MasterKillAllLivingEnemies);
        MH_CreateHook(native::DodgeballManager::RpcMasterRequestPlayerOut, &hPlayerHit, (LPVOID*)(&oPlayerHit));
        MH_EnableHook(native::DodgeballManager::RpcMasterRequestPlayerOut);
        //MH_CreateHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x1BC87E0), &IsValid1, (LPVOID*)&IsValid);
        //MH_EnableHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x1BC87E0));
       // MH_CreateHook(native::SessionManager::BootLocalPlayerToDormRoom, &HBootLocalPLayerToDorm, (LPVOID*)(&OBootLocalPlayerToDorm));
       // MH_EnableHook(native::SessionManager::BootLocalPlayerToDormRoom);
       // MH_CreateHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x108FE60), &FatalApplicationQuith, (LPVOID*)&FatalApplicationQuito);
        //MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x108FE60));

        

        return true;
    }
    else 
    {
        MH_Uninitialize();
        while (true) 
        {
            std::cout << "kys!!!\n";
        }
        return false;
    }
}


void main()
{
    IL2CPP::Il2cppInit();
    Il2CppDomain* domain = il2cpp_domain_get();
    il2cpp_thread_attach(domain);
    Il2CppImage* unityCore = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
    Il2CppClass* timeClass = il2cpp_class_from_name(unityCore, "UnityEngine", "Time");
    setTime = (MethodInfo*)il2cpp_class_get_method_from_name(timeClass, "set_timeScale", 1);


    Sleep(1500);
    // Gets the Method Pointers
    MethodPointers::EnableMethodPointers();
    
    // Creates hooks for functions 
    CreateHooks(true);
    // Give a list of commands
    std::cout << "Basic cheats have been enabled, the rest of the commands are for more advanced things\n";
    std::cout << "[F1] EnableSpeedHack.\n";
    std::cout << "[F2] KillAll AI\n";
    std::cout << "[F3] SetMaster Client\n";
    std::cout << "[F4] Fuck all player's games\n";
    std::cout << "[F5] Disable Prefab Spawning (Click again to enable again)\n";
    std::cout << "[F6] Turn off set score\n";
    std::cout << "[F7] Enable Rapid Fire (Shoot gun first!!!).\n";
    std::cout << "[F8] Turn Off Tool Spawning\n";
    std::cout << "[F9] Turn off Shooting Pointer (Click twice to enable again)\n";
    std::cout << "[F10] Test for anti-cheat disable\n";
    std::cout << "[F11] NULL\n";
    std::cout << "[F12] Exit\n";
    std::cout << "[+] Poop Test\n";




    static bool firingSpeedHook = true;
    bool FirePointer_On = true;
    bool PreFabPointer_on = true;
    bool PreFabChanged = false;
    bool MasterSetScore_on = true;
    bool ToolSwapEnable = true;
    bool GoToRoom = true;

    // Command Key Binds
    while (true)
    {
        //if (GetAsyncKeyState(VK_F1) & 1)
        //{
        //    bSpeed = !bSpeed;

        //    float timeScale = bSpeed ? speedMultiplier : 1.f;
        //    SetTimeScale(timeScale);
        //    //PhotonNetwork::Instantiate(PrefabToSpawn, { 0.0f, 0.0f, 0.0f, }, { 0.0f, 0.0f, 0.0f, 1.0f }, 6.0f, 0, nullptr);

        //}
        //if (GetAsyncKeyState(VK_F2) & 1)
        //{

        //    KIllAllAI();

        //    //native::RecRoom::Core::Encounters::BaseSpawnEnemyEncounterStep::MasterKillAllLivingEnemies(native::RecRoom::Core::Encounters::BaseSpawnEnemyEncounterStep* __this, const MethodInfo* method_info);
        //}

        if (GetAsyncKeyState(VK_F3) & 1)
        {
            std::cout << "Master Client Set:\n";
            //std::cout << "LocalPlayer: " << native::Player::get_LocalPlayer << std::endl;
            auto PlayerLocalPlayer = native::Player::get_LocalPlayer(CheaterAxis);
            //std::cout << "PlayerHead: " << native::Player::get_Head(PlayerLocalPlayer, CheaterAxis);
            auto LocalPLayerHead = native::Player::get_Head(PlayerLocalPlayer, CheaterAxis);

            auto PhotonPlayer = native::Player::get_PhotonPlayer(PlayerLocalPlayer, MethodInfoTest1);
            //std::cout << "PhotonPlayer: " << PhotonPlayer << std::endl;
            native::PhotonNetwork::set_MasterClient(PhotonPlayer, nullptr);
            std::cout << "Master Client Set: True" << std::endl;

            
            //native::ObscuredCheatingDetector::StopDetection(nullptr);
            std::cout << "Stopped Anti_Cheat Detection" << std::endl;


        }
        /*if (GetAsyncKeyState(VK_F4) & 1)
        {

            auto player = native::PhotonNetwork::get_otherPlayers(nullptr);
            std::cout << "Players in Room: " << player->max_length << std::endl;
            auto PlayerList = player->max_length;
            auto PlayerListShort = PlayerList - 1;
            auto PlayerLocalPlayer = native::Player::get_LocalPlayer(CheaterAxis);
            auto PhotonPlayer = native::Player::get_PhotonPlayer(PlayerLocalPlayer, MethodInfoTest1);
            for (int Count = 0; Count <= PlayerListShort;)
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
                std::cout << "May Crash!\n";
                auto players = (native::PhotonPlayer*)native::Il2CppArray2::GetValue(player, Count, nullptr);
                ++Count;
                std::cout << "Fucked Player's Game\n";
            
                native::PhotonNetwork::DestroyPlayerObjects(players, nullptr);
                if (Count >= PlayerList)
                {
                    std::cout << "Breaking the loop\n";
                    break;
                }
                
                

            }




        }*/
        if (GetAsyncKeyState(VK_F5) & 1)
        {


            /* auto pos = native::UnityEngine::Transform::get_position
             (
                 native::UnityEngine::Component::get_transform(
                     native::Player::statics()->LocalPlayer->head,
                     nullptr
                 ),
                 nullptr
             );*/
             // auto pos = native::UnityEngine::Transform::get_position(nullptr, nullptr);
              //std::cout << pos << std::endl;




            if (SpawnPrefabOnShoot)
            {

                std::cout << "Disabled PreFabSpawning" << std::endl;
                MH_DisableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x3B9BDC0));
                SpawnPrefabOnShoot = false;
            }
            else if (!SpawnPrefabOnShoot)
            {

                std::cout << "Enabled PreFabSpawning" << std::endl;
                MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x3B9BDC0));
                SpawnPrefabOnShoot = true;
            }


            /*Test1_Value->bulletFireSpeed = 200.f;*/
            /*auto velocity = native::UnityEngine::Transform::get_forward(Test1_Value->barrelTransform, nullptr);
            velocity.x *= Test1_Value->bulletFireSpeed;
            velocity.y *= Test1_Value->bulletFireSpeed;
            velocity.z *= Test1_Value->bulletFireSpeed;*/


            /* native::UnityEngine::Component::get_transform(
                 native::Player::statics()->LocalPlayer->head,
                 nullptr*/


                 //SpawnPrefab_Changed(Test1_PreFabSpawn, Test2_PreFabSpawn, Test3_PreFabSpawn, Test4_PreFabSpawn, Test5_PreFabSpawn, Test6_PreFabSpawn, Test7_PreFabSpawn);

        }
        if (GetAsyncKeyState(VK_F6) & 1)
        {
            if (MasterSetScore_on)
            {
                MH_DisableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x19F5770));
                std::cout << "Disabled Master Set Score" << std::endl;
                MasterSetScore_on = false;
            }
            else if (!MasterSetScore_on)
            {
                MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x19F5770));
                std::cout << "Enabled Master Set Score " << std::endl;
                MasterSetScore_on = true;
            }
        }

        if (GetAsyncKeyState(VK_F7) & 1)
        {
            // int32_t(__fastcall * get_PlayerShield)(DWORD, DWORD, DWORD) = reinterpret_cast<decltype(get_PlayerShield)>(GameAssembly + 0xFC23B0);
             //SpawnPrefab_Changed(Test1_PhotonValue, Test2_PhotonValue, Test3_PhotonValue, Test4_PhotonValue, Test5_PhotonValue, Test6_PhotonValue, Test7_PhotonValue);



            LoopFire(Test1_Value, Test33_Value, Test2_Value, Test4_Value);



        }
        if (GetAsyncKeyState(VK_F8) & 1)
        {
            /*std::cout << "Looping to kill player..." << std::endl;
            PlayerChosenForDeath_on = true;
            while (true)
            {

                MasterDamagePlayer_999(Test1_KillPlayer, Test2_KillPlayer, Test3_KillPlayer, Test4_KillPlayer, Test5_KillPlayer, Test6_KillPlayer, Test7_KillPlayer);

                std::this_thread::sleep_for(std::chrono::milliseconds(500));
                if (GetAsyncKeyState(VK_F8) & 1)
                {
                    PlayerChosenForDeath_on = false;
                    break;

                }
            }*/


            if (ToolSwapEnable)
            {
                MH_DisableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x3533F10));
                std::cout << "Disabled Tool Spawning" << std::endl;
                ToolSwapEnable = false;
            }
            else if (!ToolSwapEnable)
            {
                MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x3533F10));
                std::cout << "Enabled Tool Spawning" << std::endl;
                ToolSwapEnable = true;
            }

            /*MasterDamagePlayer_999(Test1_KillPlayer, Test2_KillPlayer, Test3_KillPlayer, Test4_KillPlayer, Test5_KillPlayer, Test6_KillPlayer, Test7_KillPlayer);
            std::cout << "KilledPlayer lol" << std::endl;*/
        }
        if (GetAsyncKeyState(VK_F9) & 1)
        {
            //auto velocity = native::UnityEngine::Transform::get_forward(__this->barrelTransform, nullptr);
            if (FirePointer_On)
            {
                MH_DisableHook(native::RecRoom::Core::Combat::RangedWeapon::Fire);
                std::cout << "Disabled Fire Pointer" << std::endl;
                FirePointer_On = false;
            }
            else if (!FirePointer_On)
            {
                MH_EnableHook(native::RecRoom::Core::Combat::RangedWeapon::Fire);
                std::cout << "Enabled FirePointer " << std::endl;
                FirePointer_On = true;
            }


            //auto Assembly = il2cpp_assembly_get_image("Assembly-Csharp"); //Example: Assembly-CSharp
            //auto Class = il2cpp_class_from_name(Assembly, "namespace", "className"); //If the namespace is not there, just pass in ""
            //auto Method = il2cpp_class_get_method_from_name(Class, "methodName", 0); //Pass in the target method's name, so if I wanted to attack a method called KillCurrentPlayer(), I'd pass in the name KillCurrentPlayer by itself.
            //auto Result = il2cpp_runtime_invoke(Method, NULL, NULL); //Execute the method and get the result as an Il2CppObject which you can do whatever you want with.
        }
        if (GetAsyncKeyState(VK_F10) & 1)
        {
            if (GoToRoom)
            {
                //MH_DisableHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x109E8E0));
               // MH_DisableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0xBC6540));
                MH_EnableHook(native::EACManager::Update);
               /* MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5130));
                MH_EnableHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x67B4FA0));*/
                std::cout << "EAC Patched" << std::endl;
                GoToRoom = false;
            }
            else if (!GoToRoom)
            {
               // MH_EnableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0xBC6540));
                /*MH_CreateHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x109E8E0), &InDormRoomH, (LPVOID*)&InDormRoomO);
                MH_EnableHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x109E8E0));*/
                MH_DisableHook(native::EACManager::Update);
               /* MH_DisableHook(reinterpret_cast<LPVOID*>(GameAssembly + 0x67B5130));
                MH_DisableHook(reinterpret_cast<LPBOOL*>(GameAssembly + 0x67B4FA0));*/
                std::cout << "EAC Unpatched" << std::endl;
                GoToRoom = true;
            }

            
        }

    }




}












BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        //std::cout << __FUNCTION__ << " reason DLL_PROCESS_ATTACH\n";
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)main, 0, 0, 0);
        break;
    case DLL_THREAD_ATTACH:
       // std::cout << __FUNCTION__ << " reason DLL_THREAD_ATTACH\n";
        break;
    case DLL_THREAD_DETACH:
        //std::cout << __FUNCTION__ << " reason DLL_THREAD_DETACH\n";
        break;
    case DLL_PROCESS_DETACH:
       // std::cout << __FUNCTION__ << " reason DLL_PROCESS_DETACH\n";
        break;
    }

    return TRUE;

    //if (ul_reason_for_call != DLL_PROCESS_ATTACH)
    //{
    //    return false;
    //}

    //if (AllocConsole())
    //{


    //    FILE* pFile = nullptr;
    //    freopen_s(&pFile, "CONOUT$", "w", stdout);

    //    SetConsoleTitleW(L"RecRoom Cheat Real! (Made by: rockpikmin888#8888)");




    //    std::thread(main).detach();
    //    //std::thread(LoopFire).detach();



    //    DisableThreadLibraryCalls(hModule);

    //    std::cout << "Injected Into Game: RecRoom" << std::endl;

    //    std::cout << "Please type the auth key: " << std::endl;



    //    //std::this_thread::sleep_for(std::chrono::seconds(5));
    //    //std::terminate();
    //    //exit(1);
    //    native_invoke::init();
    //    return true;







    //}



}



