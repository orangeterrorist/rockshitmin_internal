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
//#include <vector>
#include "UnityRef.hpp"
#include "UnityRef.hpp"
#include <stdio.h>
#include <winsock.h>
#include <curl/curl.h>

namespace MethodPointers
{
    //initialize method pointers

    //Makes All Method Pointer Fields
    MethodInfo* get_forward;
    MethodInfo* bulletTransFormField;
    MethodInfo* get_IsOnCoolDown;
    MethodInfo* setTime;
    MethodInfo* RapidFire_Weapon;
    MethodInfo* get_Position;
    MethodInfo* get_TransForm;
    MethodInfo* Fire_Weapon;
    MethodInfo* set_position;
    MethodInfo* get_rotation;
    MethodInfo* GetChild;
    MethodInfo* SetParent;
    MethodInfo* set_localscale;
    MethodInfo* get_HasEnoughMagazineAmmunition;
    MethodInfo* get_TransForm_GameObject;
    MethodInfo* KillAllEnemies;
    MethodInfo* SpawnPrefab;
    MethodInfo* get_GameObject;
    MethodInfo* get_EulerAngles;
    MethodInfo* get_BothPlayerHands;
    MethodInfo* get_LocalPlayer;
    MethodInfo* get_Head;
    MethodInfo* LocalPlayerHead;
    MethodInfo* SetMasterClient;
    MethodInfo* SetLocalHealthToMax;
    MethodInfo* FindObjectsOfType;
    MethodInfo* DestroyGameObject;
    MethodInfo* get_OtherPlayers;
    MethodInfo* GetAllPlayers;
    MethodInfo* get_AllToolsAttached;
    MethodInfo* get_Count;
    MethodInfo* get_Item;
    MethodInfo* Il2cppArray;
    MethodInfo* get_PlayerList;
    MethodInfo* GetClosestPlayer;
    MethodInfo* GetObjectReturn;
    MethodInfo* DodgeBallPlayer;
    MethodInfo* GetFromAccountId;
    MethodInfo* MasterDamagePlayer;
    MethodInfo* MasterStartGameEarly;
    MethodInfo* MasterEndGameEarly;
    MethodInfo* AlwaysValidVerifyer_IsValid;
    MethodInfo* HPBCIOKGCPD_IsValid;
    MethodInfo* TimeValidVerifyer_IsValid;
    MethodInfo* get_TotalAmmo;
    MethodInfo* get_HasEnoughMagAmmo;
    MethodInfo* get_CurrentAmmo;
    MethodInfo* get_IsDev;
    MethodInfo* get_IsLocalPlayerDev;
    MethodInfo* RemoveTrailItems;
    MethodInfo* BootLocalPlayerToDormRoom;
    MethodInfo* get_CanFly;
    MethodInfo* ToolPrefab;
    MethodInfo* CanUseBackPackTools;
    MethodInfo* FindObjectsOFType;
    MethodInfo* EacUpdate;
    MethodInfo* CodeStageUpdate;
    MethodInfo* CodeStageUpdate1;
    MethodInfo* EacCloseGame;
    MethodInfo* GameClient_Destroy;
    MethodInfo* GameClient_Reset;


    static bool EnableMethodPointers()
    {
        // Calls the Il2cppInit method to get the functions.
        IL2CPP::Il2cppInit();
        // Creates the domain and attaches the thread(s)
        Il2CppDomain* domain = il2cpp_domain_get();
        Il2CppDomain* domain_ForRR = il2cpp_domain_get();

        //Error checking
        if (!domain) 
        {
            std::cout << "domain = null\n" << std::endl;

        }
        if (!domain_ForRR)
        {
            std::cout << "domain = null\n" << std::endl;

        }

        il2cpp_thread_attach(domain);
        il2cpp_thread_attach(domain_ForRR);

        std::cout << "Method Pointers initializing." << std::endl;

        // Gets the method pointers
        Il2CppImage* unityCore = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
        Il2CppClass* timeClass = il2cpp_class_from_name(unityCore, "UnityEngine", "Time");
        setTime = (MethodInfo*)il2cpp_class_get_method_from_name(timeClass, "set_timeScale", 1);

     /*   Il2CppImage* EAC = il2cpp_domain_assembly_open(domain, "RecRoom.Rranticheat.Runtime")->image;
        Il2CppClass* EACCLASS = il2cpp_class_from_name(EAC, "RecRoom.AntiCheat", "EACManager");
        EacUpdate = (MethodInfo*)il2cpp_class_get_method_from_name(EACCLASS, "Update", 0);*/

        //Il2CppImage* EAC = il2cpp_domain_assembly_open(domain, "RecRoom.Rranticheat.Runtime")->image;
        //Il2CppClass* EACCLASS = il2cpp_class_from_name(EAC, "RecRoom.AntiCheat", "EACManager");
        //EacCloseGame = (MethodInfo*)il2cpp_class_get_method_from_name(EACCLASS, "Update", 0);

      //  std::cout << "Check 1." << std::endl;
      //  Il2CppImage* unityCore1 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* TransFormCLass = il2cpp_class_from_name(unityCore1, "UnityEngine", "Transform");
      //  get_Position = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass, "get_position", 0);
      //  std::cout << "Check 2." << std::endl;
      //  Il2CppImage* unityCore2 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* ComponentClass = il2cpp_class_from_name(unityCore2, "UnityEngine", "Component");
      //  get_TransForm = (MethodInfo*)il2cpp_class_get_method_from_name(ComponentClass, "get_transform", 0);
      //  std::cout << "Check 3." << std::endl;
      //  Il2CppImage* FireWeapon = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* Fire_Component = il2cpp_class_from_name(FireWeapon, "RecRoom.Core.Combat", "RangedWeapon");
      //  Fire_Weapon = (MethodInfo*)il2cpp_class_get_method_from_name(Fire_Component, "Fire", 2);
      //  std::cout << "Check 4." << std::endl;
      //  Il2CppImage* unityCore3 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* TransFormCLass1 = il2cpp_class_from_name(unityCore3, "UnityEngine", "Transform");
      //  get_forward = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass1, "get_forward", 0);
      //  std::cout << "Check 5." << std::endl;
      //  Il2CppImage* unityCore4 = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* FireWeaponField = il2cpp_class_from_name(unityCore4, "RecRoom.Core.Combat", "RangedWeapon");
      //  bulletTransFormField = (MethodInfo*)il2cpp_class_get_field_from_name(FireWeaponField, "barrelTransform");
      //  std::cout << "Check 6." << std::endl;
      //  Il2CppImage* RangedWeapon = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* IsGunOnCoolDown = il2cpp_class_from_name(RangedWeapon, "RecRoom.Core.Combat", "RangedWeapon");
      //  get_IsOnCoolDown = (MethodInfo*)il2cpp_class_get_method_from_name(IsGunOnCoolDown, "get_IsOnCooldown", 0);
      //  std::cout << "Check 7." << std::endl;
      //  Il2CppImage* unityCore5 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* Transform_class_setpostiion = il2cpp_class_from_name(unityCore5, "UnityEngine", "Transform");
      //  set_position = (MethodInfo*)il2cpp_class_get_method_from_name(Transform_class_setpostiion, "set_position", 0);
      //  std::cout << "Check 8." << std::endl;
      //  Il2CppImage* unityCore6 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* TransFormCLass10 = il2cpp_class_from_name(unityCore6, "UnityEngine", "Transform");
      //  get_rotation = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass10, "get_rotation", 0);
      //  std::cout << "Check 9." << std::endl;
      //  Il2CppImage* unityCore7 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* TransFormCLass12 = il2cpp_class_from_name(unityCore7, "UnityEngine", "Transform");
      //  GetChild = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass12, "GetChild", 0);
      //  std::cout << "Check 10." << std::endl;
      //  Il2CppImage* unityCore8 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* TransFormCLass14 = il2cpp_class_from_name(unityCore8, "UnityEngine", "Transform");
      //  SetParent = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass14, "SetParent", 0);
      //  std::cout << "Check 11." << std::endl;
      //  Il2CppImage* unityCore9 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* TransFormCLass16 = il2cpp_class_from_name(unityCore9, "UnityEngine", "Transform");
      //  set_localscale = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass16, "set_localScale", 0);
      //  std::cout << "Check 12." << std::endl;
      //  Il2CppImage* GetAmmoIsGood = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* AmmoIsenough = il2cpp_class_from_name(GetAmmoIsGood, "RecRoom.Core.Combat", "Weapon");
      //  get_HasEnoughMagazineAmmunition = (MethodInfo*)il2cpp_class_get_method_from_name(AmmoIsenough, "get_HasEnoughMagazineAmmunition", 0);
      //  std::cout << "Check 13." << std::endl;
      //  Il2CppImage* unityCore10 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* TransFormCLass18 = il2cpp_class_from_name(unityCore10, "UnityEngine", "GameObject");
      //  get_TransForm_GameObject = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass18, "get_transform", 0);
      //  std::cout << "Check 14." << std::endl;
      //  /*Il2CppImage* unityCore11 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* TransFormCLass18 = il2cpp_class_from_name(unityCore10, "UnityEngine", "GameObject");
      //  get_TransForm_GameObject = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass18, "get_transform", 0);*/

      //  Il2CppImage* unityCore111 = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* KIllAllEnemiesClass = il2cpp_class_from_name(unityCore111, "RecRoom.Core.Encounters", "BaseSpawnEnemyEncounterStep");
      //  KillAllEnemies = (MethodInfo*)il2cpp_class_get_method_from_name(KIllAllEnemiesClass, "MasterKillAllLivingEnemies", 0);
      //  /*std::cout << "Check 15." << std::endl;
      //  Il2CppImage* PreFabSpanwerName = il2cpp_domain_assembly_open(domain, "PhotonUnityNetworking")->image;
      //  Il2CppClass* PreFabSpanwerClass = il2cpp_class_from_name(PreFabSpanwerName, "", "NFNMGBBEDLH");
      //  SpawnPrefab = (MethodInfo*)il2cpp_class_get_method_from_name(PreFabSpanwerClass, "NNOADIMEPJI", 6);*/
      //  std::cout << "Check 16." << std::endl;
      //  Il2CppImage* get_Gamobject = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* GameObjectClass = il2cpp_class_from_name(get_Gamobject, "UnityEngine", "Component");
      //  get_GameObject = (MethodInfo*)il2cpp_class_get_method_from_name(GameObjectClass, "get_gameObject", 0);
      //  std::cout << "Check 17." << std::endl;
      //  Il2CppImage* get_eulerAngles = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* get_eulerAnglesclass = il2cpp_class_from_name(get_Gamobject, "UnityEngine", "Quaternion");
      //  get_EulerAngles = (MethodInfo*)il2cpp_class_get_method_from_name(GameObjectClass, "get_eulerAngles", 0);
      //  std::cout << "Check 18." << std::endl;
      //  Il2CppImage* get_PhotonPlayer1 = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* get_PhotonPlayerClass = il2cpp_class_from_name(get_PhotonPlayer1, "", "Player");
      //  get_BothPlayerHands = (MethodInfo*)il2cpp_class_get_method_from_name(get_PhotonPlayerClass, "get_PhotonPlayer", 0);
      //  std::cout << "Check 19." << std::endl;
      //  Il2CppImage* get_LocalPlayerImage = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* get_LocalPlayerClass = il2cpp_class_from_name(get_LocalPlayerImage, "", "Player");
      //  get_LocalPlayer = (MethodInfo*)il2cpp_class_get_method_from_name(get_LocalPlayerClass, "get_LocalPlayer", 0);
      //  std::cout << "Check 20." << std::endl;
      //  Il2CppImage* get_LocalPlayerHead = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* get_LocalPlayerHeadClass = il2cpp_class_from_name(get_LocalPlayerHead, "", "Player");
      //  get_Head = (MethodInfo*)il2cpp_class_get_method_from_name(get_LocalPlayerHeadClass, "get_Head", 0);
      //  std::cout << "Check 21." << std::endl;
      //  Il2CppImage* get_LocalPlayerHead2 = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* get_LocalPlayerHeadClass2 = il2cpp_class_from_name(get_LocalPlayerHead2, "", "Player");
      //  LocalPlayerHead = (MethodInfo*)il2cpp_class_get_field_from_name(get_LocalPlayerHeadClass2, "head");
      //  std::cout << "Check 22." << std::endl;
      // /* Il2CppImage* MasterClient = il2cpp_domain_assembly_open(domain, "PhotonUnityNetworking")->image;
      //  Il2CppClass* MasterClientClass = il2cpp_class_from_name(MasterClient, "", "NFNMGBBEDLH");
      //  SetMasterClient = (MethodInfo*)il2cpp_class_get_method_from_name(MasterClientClass, "OFFKMNODFBF", 1);*/
      //  std::cout << "Check 23." << std::endl;
      //  Il2CppImage* MasterSetPlayerHealth = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* MasterSetPlayerHealthClass = il2cpp_class_from_name(MasterSetPlayerHealth, "", "GameCombatManager");
      //  SetLocalHealthToMax = (MethodInfo*)il2cpp_class_get_method_from_name(MasterSetPlayerHealthClass, "MasterSetPlayerHealth", 2);
      //  std::cout << "Check 24." << std::endl;
      //  /*Il2CppImage* DestoryObject = il2cpp_domain_assembly_open(domain, "PhotonUnityNetworking")->image;
      //  Il2CppClass* DestoryObjectClass = il2cpp_class_from_name(PreFabSpanwerName, "", "NFNMGBBEDLH");
      //  DestroyGameObject = (MethodInfo*)il2cpp_class_get_method_from_name(PreFabSpanwerClass, "OGNLNEKDAIH", 2);*/
      //  /*std::cout << "Check 25." << std::endl;
      //  Il2CppImage* OtherPlayerPhoton = il2cpp_domain_assembly_open(domain, "PhotonUnityNetworking")->image;
      //  Il2CppClass* OtherPlayerPhotonClass = il2cpp_class_from_name(OtherPlayerPhoton, "", "NFNMGBBEDLH");
      //  get_OtherPlayers = (MethodInfo*)il2cpp_class_get_method_from_name(OtherPlayerPhotonClass, "MEMGIBIMCMI", 0);*/
      //  std::cout << "Check 26." << std::endl;
      //  Il2CppImage* get_AllToolsAttached1 = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* get_AllToolsAttachedClass = il2cpp_class_from_name(get_AllToolsAttached1, "", "Player");
      //  get_AllToolsAttached = (MethodInfo*)il2cpp_class_get_method_from_name(get_AllToolsAttachedClass, "get_AllToolsAttached", 0);
      //  std::cout << "Check 27." << std::endl;
      ///*  Il2CppImage* OtherPlayerPhoton12 = il2cpp_domain_assembly_open(domain, "PhotonUnityNetworking")->image;
      //  Il2CppClass* OtherPlayerPhotonClass12 = il2cpp_class_from_name(OtherPlayerPhoton12, "", "NFNMGBBEDLH");
      //  get_PlayerList = (MethodInfo*)il2cpp_class_get_method_from_name(OtherPlayerPhotonClass12, "ODDLNPFHKLL", 0);*/
      //  std::cout << "Check 28." << std::endl;

      //  Il2CppImage* Player = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* PlayerClass = il2cpp_class_from_name(Player, "", "Player");

      //  Il2CppImage* Polar = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* PolarClass = il2cpp_class_from_name(Polar, "", "Polaroid");
      //  
      //  Il2CppImage* DodgeBallTest = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* DodgeBallTestClass = il2cpp_class_from_name(DodgeBallTest, "", "DodgeballManager");
      //  DodgeBallPlayer = (MethodInfo*)il2cpp_class_get_method_from_name(DodgeBallTestClass, "RpcMasterRequestPlayerOut", 3);
      //  std::cout << "Check 29." << std::endl;
      //  Il2CppImage* MasterKillAllPlayers = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* MasterKillAllPlayersClass = il2cpp_class_from_name(MasterKillAllPlayers, "", "GameCombatManager");
      //  MasterDamagePlayer = (MethodInfo*)il2cpp_class_get_method_from_name(MasterKillAllPlayersClass, "MasterDamagePlayer", 5);
      //  std::cout << "Check 30." << std::endl;
      //  Il2CppImage* MasterStartGame = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* MasterStartGameClass = il2cpp_class_from_name(MasterStartGame, "", "GameManager");
      //  MasterStartGameEarly = (MethodInfo*)il2cpp_class_get_method_from_name(MasterStartGameClass, "RpcMasterStartGameEarly", 1);
      //  std::cout << "Check 31." << std::endl;
      //  Il2CppImage* MasterEndGame = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* MasterEndGameClass = il2cpp_class_from_name(MasterEndGame, "", "GameManager");
      //  MasterEndGameEarly = (MethodInfo*)il2cpp_class_get_method_from_name(MasterEndGameClass, "RpcMasterStopGame", 0);
      //  std::cout << "Check 32." << std::endl;
      //  Il2CppImage* CurrentAmmo = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* CurrentAmmoClass = il2cpp_class_from_name(CurrentAmmo, "RecRoom.Core.Combat", "Weapon");
      //  get_CurrentAmmo = (MethodInfo*)il2cpp_class_get_method_from_name(CurrentAmmoClass, "get_MagazineAmmunition", 0);
      //  std::cout << "Check 33." << std::endl;
      //  Il2CppImage* HasAmmo = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* HasAmmoClass = il2cpp_class_from_name(HasAmmo, "RecRoom.Core.Combat", "Weapon");
      //  get_HasEnoughMagAmmo = (MethodInfo*)il2cpp_class_get_method_from_name(HasAmmoClass, "get_HasEnoughMagazineAmmunition", 0);
      //  std::cout << "Check 34." << std::endl;
      //  Il2CppImage* TotalAmmo = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* TotalAmmoClass = il2cpp_class_from_name(TotalAmmo, "RecRoom.Core.Combat", "Weapon");
      //  get_TotalAmmo = (MethodInfo*)il2cpp_class_get_method_from_name(TotalAmmoClass, "get_TotalAmmunition", 0);
      //  std::cout << "Check 35." << std::endl;
      //  Il2CppImage* GetCanFly = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* GetCanFlyClass = il2cpp_class_from_name(GetCanFly, "RecRoom.Core.Locomotion", "PlayerMovement");
      //  get_CanFly = (MethodInfo*)il2cpp_class_get_method_from_name(GetCanFlyClass, "get_IsFlyingEnabled", 0);
      //  std::cout << "Check 36." << std::endl;
      //  Il2CppImage* BackTools = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* BackToolsClass = il2cpp_class_from_name(BackTools, "RRUI.Data", "ClothingCustomizerModel");
      //  CanUseBackPackTools = (MethodInfo*)il2cpp_class_get_method_from_name(BackToolsClass, "get_CanUseBackpackTool", 0);
      //  std::cout << "Check 37." << std::endl;
      //  Il2CppImage* ToolPrefab1 = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* ToolPrefabClass = il2cpp_class_from_name(ToolPrefab1, "", "Tool");
      //  ToolPrefab = (MethodInfo*)il2cpp_class_get_method_from_name(ToolPrefabClass, "PhotonInstantiate", 6);
      //  std::cout << "Check 38." << std::endl;
      //  //Il2CppImage* RemoveItems = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  //Il2CppClass* RemoveItemsClass = il2cpp_class_from_name(RemoveItems, "", "EKHDFFJLCMO");
      //  //RemoveTrailItems = (MethodInfo*)il2cpp_class_get_method_from_name(RemoveItemsClass, "<LocalRemoveTrialItems>b__108_0", 1);

      //  Il2CppImage* GetLocalDev = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* GetLocalDevClass = il2cpp_class_from_name(GetLocalDev, "RRUI.Data", "GlobalModel");
      //  get_IsLocalPlayerDev = (MethodInfo*)il2cpp_class_get_method_from_name(GetLocalDevClass , "get_LocalAccountIsDeveloper", 0);
      //  std::cout << "Check 39." << std::endl;
      //  Il2CppImage* Dev = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* DevClass = il2cpp_class_from_name(Dev, "", "SessionManager");
      //  get_IsDev = (MethodInfo*)il2cpp_class_get_method_from_name(DevClass, "get_IsDeveloper", 0);
      //  std::cout << "Check 40." << std::endl;
      //  /*Il2CppImage* BootLocalPlayerToDormRoomFalse = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
      //  Il2CppClass* BootLocalPlayerToDormRoomClass = il2cpp_class_from_name(BootLocalPlayerToDormRoomFalse, "", "SessionManager");
      //  BootLocalPlayerToDormRoom = (MethodInfo*)il2cpp_class_get_method_from_name(BootLocalPlayerToDormRoomClass, "BootLocalPlayerToDormRoom", 3);*/
      //  std::cout << "Check 41." << std::endl;
      //  //Il2CppImage* CodeStage3 = il2cpp_domain_assembly_open(domain, "Codestage.Anticheattoolkit.Runtime")->image;
      //  //Il2CppClass* CodeStage3Class = il2cpp_class_from_name(CodeStage3, "CodeStage.AntiCheat.Detectors", "ObscuredCheatingDetector");
      //  //CodeStageUpdate1 = (MethodInfo*)il2cpp_class_get_method_from_name(CodeStage3Class, "StopDetection", 0);

      //  Il2CppImage* ObjectsOfType = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
      //  Il2CppClass* ObjectsOfTypeClass = il2cpp_class_from_name(ObjectsOfType, "UnityEngine", "Object");
      //  std::cout << "Check 42." << std::endl;
      //  /*Il2CppImage* TimeValidVerifyer_IsValid1 = il2cpp_domain_assembly_open(domain, "RecNet.Runtime")->image;
      //  Il2CppClass* TimeValidVerifyer_IsValidClass = il2cpp_class_from_name(TimeValidVerifyer_IsValid1, "Org.BouncyCastle.Crypto.Tls", "TimeValidVerifyer");
      //  TimeValidVerifyer_IsValid = (MethodInfo*)il2cpp_class_get_method_from_name(TimeValidVerifyer_IsValidClass, "IsValid", 2);*/

      ///*  Il2CppImage* HPBCIOKGCPD_IsValid1 = il2cpp_domain_assembly_open(domain, "RecNet.Runtime")->image;
      //  Il2CppClass* HPBCIOKGCPD_IsValidClass = il2cpp_class_from_name(HPBCIOKGCPD_IsValid1, "Org.BouncyCastle.Crypto.Tls", "HPBCIOKGCPD");
      //  HPBCIOKGCPD_IsValid = (MethodInfo*)il2cpp_class_get_method_from_name(HPBCIOKGCPD_IsValidClass, "IsValid", 2);*/

      //  //Il2CppImage* AlwaysValidVerifyer_IsValid1 = il2cpp_domain_assembly_open(domain, "RecNet.Runtime")->image;
      //  //Il2CppClass* AlwaysValidVerifyer_IsValidClass = il2cpp_class_from_name(AlwaysValidVerifyer_IsValid1, "Org.BouncyCastle.Crypto.Tls", "AlwaysValidVerifyer");
      //  //AlwaysValidVerifyer_IsValid = (MethodInfo*)il2cpp_class_get_method_from_name(AlwaysValidVerifyer_IsValidClass, "IsValid", 2);
      //  // Help me
      //  

      //  // Sets each method pointer 
      //  //native::ObscuredCheatingDetector::StopDetection = reinterpret_cast<native::ObscuredCheatingDetector::_tStopDetection>(CodeStageUpdate1->methodPointer);
      // //native::CodeStage::AntiCheat::Detectors::RRCheatDetector::Update = reinterpret_cast<native::CodeStage::AntiCheat::Detectors::RRCheatDetector::_tUpdate>(CodeStageUpdate->methodPointer);
      //  std::cout << "Check 43." << std::endl;
      //  //native::SessionManager::BootLocalPlayerToDormRoom = reinterpret_cast<native::SessionManager::_tBootLocalPlayerToDormRoom>(BootLocalPlayerToDormRoom->methodPointer);
      //  std::cout << "Check 44." << std::endl;
      //  //native::EKHDFFJLCMO::LocalRemoveTrialItems = reinterpret_cast<native::EKHDFFJLCMO::_tLocalRemoveTrialItems>(RemoveTrailItems->methodPointer);
      //  native::SessionManager::get_IsDev =  reinterpret_cast<native::SessionManager::_tget_IsDev>(get_IsDev->methodPointer);
      //  std::cout << "Check 45." << std::endl;
      //  native::ClothingCustomizerModel::get_CanUseBackpackTool = reinterpret_cast<native::ClothingCustomizerModel::_tget_CanUseBackpackTool>(CanUseBackPackTools->methodPointer);
      //  std::cout << "Check 46." << std::endl;
      // // native::Tool::PhotonInstantiate = reinterpret_cast<native::Tool::_tPhotonInstantiate>(ToolPrefab->methodPointer);
      //  std::cout << "Check 47." << std::endl;
      //  native::GlobalModel::get_LocalAccountIsDeveloper = reinterpret_cast<native::GlobalModel::_tget_LocalAccountIsDeveloper>(get_IsLocalPlayerDev->methodPointer);
      //  std::cout << "Check 48." << std::endl;
      //  native::RecRoom::Core::Locomotion::PlayerMovement::get_IsFlyingEnabled = reinterpret_cast<native::RecRoom::Core::Locomotion::PlayerMovement::_tget_IsFlyingEnabled>(get_CanFly->methodPointer);
      //  std::cout << "Check 49." << std::endl;
      //  native::UnityEngine::Transform::get_forward = reinterpret_cast<native::UnityEngine::Transform::_tget_forward>(get_forward->methodPointer);
      //  std::cout << "Check 50." << std::endl;
      //  native::UnityEngine::Transform::get_position = reinterpret_cast<native::UnityEngine::Transform::_tget_position>(get_Position->methodPointer);
      //  std::cout << "Check 51." << std::endl;
      //  native::UnityEngine::Transform::set_position = reinterpret_cast<native::UnityEngine::Transform::_tset_position>(set_position->methodPointer);
      //  std::cout << "Check 52." << std::endl;
      //  native::UnityEngine::Transform::get_rotation = reinterpret_cast<native::UnityEngine::Transform::_tget_rotation>(get_rotation->methodPointer);
      //  std::cout << "Check 53." << std::endl;
      //  native::UnityEngine::GameObject::get_transform = reinterpret_cast<native::UnityEngine::GameObject::_tget_transform>(get_TransForm_GameObject->methodPointer);
      //  std::cout << "Check 54." << std::endl;
      //  native::UnityEngine::Component::get_transform = reinterpret_cast<native::UnityEngine::Component::_tget_transform>(get_TransForm->methodPointer);
      //  std::cout << "Check 55." << std::endl;
      //  native::RecRoom::Core::Combat::RangedWeapon::Fire = reinterpret_cast<native::RecRoom::Core::Combat::RangedWeapon::_tFire>(Fire_Weapon->methodPointer);
      //  std::cout << "Check 56." << std::endl;
      //  native::RecRoom::Core::Combat::RangedWeapon::get_IsOnCooldown = reinterpret_cast<native::RecRoom::Core::Combat::RangedWeapon::_tget_IsOnCooldown>(get_IsOnCoolDown->methodPointer);
      //  std::cout << "Check 57." << std::endl;
      //  native::RecRoom::Core::Combat::Weapon::get_HasEnoughMagazineAmmunition = reinterpret_cast<native::RecRoom::Core::Combat::Weapon::_tget_HasEnoughMagazineAmmunition>(get_HasEnoughMagAmmo->methodPointer);
      //  std::cout << "Check 58." << std::endl;
      //  native::RecRoom::Core::Combat::Weapon::get_TotalAmmo = reinterpret_cast<native::RecRoom::Core::Combat::Weapon::_tTotalAmmo>(get_TotalAmmo->methodPointer);
      //  std::cout << "Check 59." << std::endl;
      //  native::RecRoom::Core::Combat::Weapon::get_MagAmmo = reinterpret_cast<native::RecRoom::Core::Combat::Weapon::_tget_MagAmmo>(get_CurrentAmmo->methodPointer);
      //  std::cout << "Check 60." << std::endl;
      //  native::UnityEngine::Transform::set_localScale = reinterpret_cast<native::UnityEngine::Transform::_tset_localScale>(set_localscale->methodPointer);
      //  std::cout << "Check 61." << std::endl;
      //  native::UnityEngine::Transform::GetChild = reinterpret_cast<native::UnityEngine::Transform::_tGetChild>(GetChild->methodPointer);
      //  std::cout << "Check 62." << std::endl;
      //  native::UnityEngine::Transform::SetParent = reinterpret_cast<native::UnityEngine::Transform::_tSetParent>(SetParent->methodPointer);
      //  std::cout << "Check 63." << std::endl;
      //  native::RecRoom::Core::Combat::Weapon::get_HasEnoughMagazineAmmunition = reinterpret_cast<native::RecRoom::Core::Combat::Weapon::_tget_HasEnoughMagazineAmmunition>(get_HasEnoughMagazineAmmunition->methodPointer);
      //  std::cout << "Check 64." << std::endl;
      //  native::RecRoom::Core::Encounters::BaseSpawnEnemyEncounterStep::MasterKillAllLivingEnemies = reinterpret_cast<native::RecRoom::Core::Encounters::BaseSpawnEnemyEncounterStep::_tMasterKillAllLivingEnemies>(KillAllEnemies->methodPointer);
      //  std::cout << "Check 65." << std::endl;
      // // native::PhotonNetwork::Instantiate = reinterpret_cast<native::PhotonNetwork::_tInstantiate>(SpawnPrefab->methodPointer);
      //  std::cout << "Check 66." << std::endl;
      //  native::UnityEngine::Component::get_gameObject = reinterpret_cast<native::UnityEngine::Component::_tget_gameObject>(get_GameObject->methodPointer);
      //  std::cout << "Check 67." << std::endl;
      //  native::UnityEngine::Quaternion::get_eulerAngles = reinterpret_cast<native::UnityEngine::Quaternion::_tget_eulerAngles>(get_EulerAngles->methodPointer);
      //  std::cout << "Check 68." << std::endl;
      //  native::Player::get_PhotonPlayer = reinterpret_cast<native::Player::_tget_PhotonPlayer>(get_BothPlayerHands->methodPointer);
      //  std::cout << "Check 69." << std::endl;
      //  native::Player::get_LocalPlayer = reinterpret_cast<native::Player::_tget_LocalPlayer>(get_LocalPlayer->methodPointer);
      //  std::cout << "Check 70." << std::endl;
      //  native::Player::get_Head = reinterpret_cast<native::Player::_tget_Head>(get_Head->methodPointer);
      //  std::cout << "Check 71." << std::endl;
      //  //native::PhotonNetwork::set_MasterClient = reinterpret_cast<native::PhotonNetwork::_tget_SetMasterClient>(SetMasterClient->methodPointer);
      //  std::cout << "Check 72." << std::endl;
      //  //native::GameCombatManager::MasterSetPlayerHealth = reinterpret_cast<native::GameCombatManager::_tMasterSetPlayerHealth>(SetLocalHealthToMax->methodPointer);
      //  std::cout << "Check 73." << std::endl;
      //  //native::Player::FindObjectsOfType = reinterpret_cast<native::Player::_tFindObjectsOfType>(FindObjectsOfType->methodPointer);
      //  std::cout << "Check 74." << std::endl;
      //  native::PhotonNetwork::Destroy = reinterpret_cast<native::PhotonNetwork::_tDestroy>(DestroyGameObject->methodPointer);
      //  std::cout << "Check 75." << std::endl;
      //  //native::PhotonNetwork::get_otherPlayers = reinterpret_cast<native::PhotonNetwork::_tget_otherPlayers>(get_OtherPlayers->methodPointer);
      //  std::cout << "Check 76." << std::endl;
      //  native::Player::get_AllToolsAttached = reinterpret_cast<native::Player::_tget_AllToolsAttached>(get_AllToolsAttached->methodPointer);
      //  std::cout << "Check 77." << std::endl;
      // // native::PhotonNetwork::get_playerList = reinterpret_cast<native::PhotonNetwork::_tget_playerList>(get_PlayerList->methodPointer);
      //  std::cout << "Check 78." << std::endl;
      //  native::DodgeballManager::RpcMasterRequestPlayerOut = reinterpret_cast<native::DodgeballManager::_tRpcMasterRequestPlayerOut>(DodgeBallPlayer->methodPointer);
      //  std::cout << "Check 79." << std::endl;
      //  native::GameCombatManager::MasterDamagePlayer = reinterpret_cast<native::GameCombatManager::_tMasterDamagePlayer>(MasterDamagePlayer->methodPointer);
      //  std::cout << "Check 80." << std::endl;
      //  native::GameManager::RpcMasterStartGameEarly = reinterpret_cast<native::GameManager::_tRpcMasterStartGameEarly>(MasterStartGameEarly->methodPointer);
      //  std::cout << "Check 81." << std::endl;
      //  native::GameManager::RpcMasterStopGame = reinterpret_cast<native::GameManager::_tRpcMasterStopGame>(MasterEndGameEarly->methodPointer);
      //  std::cout << "Check 82." << std::endl;
      //  //native::EACManager::Update = reinterpret_cast<native::EACManager::_tUpdate>(EacUpdate->methodPointer);
      //  std::cout << "Check 83." << std::endl;

        //native::RecNetRunTime::IsValid = reinterpret_cast<native::RecNetRunTime::_tHPBCIOKGCPD>(HPBCIOKGCPD_IsValid->methodPointer);
        //native::RecNetRunTime::AlwaysValidVerifyer_IsValid = reinterpret_cast<native::RecNetRunTime::_tAlwaysValidVerifyer>(AlwaysValidVerifyer_IsValid->methodPointer);
        //native::RecNetRunTime::TimeValidVerifyer_IsValid = reinterpret_cast<native::RecNetRunTime::_tTimeValidVerifyer>(TimeValidVerifyer_IsValid->methodPointer);
        /* int count2 = 0;
         auto listClass = il2cpp_class_from_type(get_AllToolsAttached->return_type);
         void* iter2 = nullptr;
         auto currentMethod2 = il2cpp_class_get_methods(listClass, &iter2);



         Il2CppImage* get_tools = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
         Il2CppClass* get_toolsclass = il2cpp_class_from_name(get_tools, "", "Player");
         get_Item = (MethodInfo*)il2cpp_class_get_method_from_name(listClass, "get_Item", 0);
         native::System::Collections::Generic::List::get_Item = reinterpret_cast<native::System::Collections::Generic::List::_tget_Item>(get_Item->methodPointer);

         Il2CppImage* get_tools = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
         Il2CppClass* get_toolsclass = il2cpp_class_from_name(get_tools, "", "Player");
         get_Item = (MethodInfo*)il2cpp_class_get_method_from_name(listClass, "get_Count", 0);
         native::System::Collections::Generic::List::get_Count = reinterpret_cast<native::System::Collections::Generic::List::_tget_Count>(currentMethod2->methodPointer);*/

        // This code finds the spefic function, as some have the same name.
        auto currentClass = PolarClass;
        void* iter = nullptr;
        auto currentMethod = il2cpp_class_get_methods(currentClass, &iter);
        
        currentClass = PlayerClass;
        iter = nullptr;
        currentMethod = il2cpp_class_get_methods(currentClass, &iter);

        for (; currentMethod; currentMethod = il2cpp_class_get_methods(currentClass, &iter))
        {
            if (strcmp(currentMethod->name, ("get_PhotonPlayer")) == 0)
            {
                native::Player::get_PhotonPlayer = reinterpret_cast<native::Player::_tget_PhotonPlayer>(currentMethod->methodPointer);
                
            }
            //else if (strcmp(currentMethod->name, ("get_AllToolsAttached")) == 0)
            //{
            //    //List
            //    int count2 = 0;
            //    auto listClass = il2cpp_class_from_type(currentMethod->return_type);
            //    void* iter2 = nullptr;
            //    auto currentMethod2 = il2cpp_class_get_methods(listClass, &iter2);

            //    for (; currentMethod2; currentMethod2 = il2cpp_class_get_methods(listClass, &iter2)) 
            //    {
            //        if (strcmp(currentMethod2->name, XS("get_Count")) == 0) 
            //        {
            //            native::System::Collections::Generic::List::get_Count = reinterpret_cast<native::System::Collections::Generic::List::_tget_Count>(currentMethod2->methodPointer);
            //            count2++;
            //        }
            //        else if (strcmp(currentMethod2->name, XS("get_Item")) == 0  /* && strcmp(il2cpp_class_from_type(currentMethod->parameters[0].parameter_type)->name, ("Int32")) == 0*/)
            //        {
            //            native::System::Collections::Generic::List::get_Item = reinterpret_cast<native::System::Collections::Generic::List::_tget_Item>(currentMethod2->methodPointer);
            //            count2++;
            //        }
            //    }
            //    
            //}
        }

        Il2CppImage* get_IL2CPPValue = il2cpp_domain_assembly_open(domain, "mscorlib")->image;
        Il2CppClass* get_IL2CPPValueClass = il2cpp_class_from_name(get_IL2CPPValue, "System", "Array");


         currentClass = get_IL2CPPValueClass;
         iter = nullptr;
         currentMethod = il2cpp_class_get_methods(currentClass, &iter);

        for (; currentMethod; currentMethod = il2cpp_class_get_methods(currentClass, &iter)) 
        {
            if (strcmp(currentMethod->name, ("GetValue")) == 0 && currentMethod->parameters_count == 1 && strcmp(il2cpp_class_from_type(currentMethod->parameters[0].parameter_type)->name, ("Int32")) == 0) {
                native::Il2CppArray2::GetValue = reinterpret_cast<native::Il2CppArray2::_tGetValue>(currentMethod->methodPointer);

            }
            else if (strcmp(currentMethod->name, ("SetValue")) == 0 && currentMethod->parameters_count == 2 && strcmp(il2cpp_class_from_type(currentMethod->parameters[1].parameter_type)->name, ("Int32")) == 0) {
                native::Il2CppArray2::SetValue = reinterpret_cast<native::Il2CppArray2::_tSetValue>(currentMethod->methodPointer);

            }
        }
       /* Il2CppImage* PhotonPlayer = il2cpp_domain_assembly_open(domain, "PhotonUnityNetworking")->image;
        Il2CppClass* PhotonPlayerClass = il2cpp_class_from_name(PhotonPlayer, "", "NFNMGBBEDLH");

        currentClass = PhotonPlayerClass;
        iter = nullptr;
        currentMethod = il2cpp_class_get_methods(currentClass, &iter);

        for (; currentMethod; currentMethod = il2cpp_class_get_methods(currentClass, &iter))
        {
            if (strcmp(currentMethod->name, ("DELDOEOKCPE")) == 0 && currentMethod->parameters_count == 1 && strcmp(il2cpp_class_from_type(currentMethod->parameters[0].parameter_type)->name, ("ALLOHNMHPIM")) == 0) 
            {
                native::PhotonNetwork::DestroyPlayerObjects = reinterpret_cast<native::PhotonNetwork::_tDestroyPlayerObjects>(currentMethod->methodPointer);
                

            }
        }*/

        

      /*  currentClass = ObjectsOfTypeClass;
        iter = nullptr;
        currentMethod = il2cpp_class_get_methods(currentClass, &iter);

        for (; currentMethod; currentMethod = il2cpp_class_get_methods(currentClass, &iter))
        {
            if (strcmp(currentMethod->name, ("FindObjectsOfType")) == 0 && currentMethod->parameters_count == 1 && strcmp(il2cpp_class_from_type(currentMethod->parameters[0].parameter_type)->name, ("Type")) == 0)
            {
                native::Player::FindObjectsOfType = reinterpret_cast<native::Player::_tFindObjectsOfType>(currentMethod->methodPointer);


            }
        }*/


        // Writes values, only for debug really.
        //native::PlayerHead::Player::head = reinterpret_cast<native::PlayerHead::head>(LocalPlayerHead->methodPointer)
        /*std::cout << "Prefab Test MethodPointer: " << native::PhotonNetwork::Instantiate << std::endl;
        std::cout << "LocalPlayer: " << native::Player::get_LocalPlayer << std::endl;
        std::cout << "PhotonPlayer: " << native::Player::get_PhotonPlayer << std::endl;
        std::cout << "PlayerHead Test: " << native::Player::get_Head << std::endl;
        std::cout << "Player Head Field: " << LocalPlayerHead << std::endl;
        std::cout << "Set Master Client: " << native::PhotonNetwork::set_MasterClient << std::endl;
        std::cout << "Set Player Health to max: " << native::GameCombatManager::MasterSetPlayerHealth << std::endl;
        std::cout << "Find Objects of Type: " << native::Player::FindObjectsOfType << std::endl;
        std::cout << "Destroy Game Object: " << native::PhotonNetwork::Destroy << std::endl;
        std::cout << "Other Photon Players: " << native::PhotonNetwork::get_otherPlayers << std::endl;
        std::cout << "Get All Players: " << native::Player::GetAllPlayers << std::endl;
        std::cout << "get_Count" << native::System::Collections::Generic::List::get_Count << std::endl;
        std::cout << "get_Item" << native::System::Collections::Generic::List::get_Item << std::endl;
        std::cout << "GetValue" << native::Il2CppArray2::GetValue << std::endl;
        std::cout << "SetValue" << native::Il2CppArray2::SetValue << std::endl;
        std::cout << "Get All Players" << native::PhotonNetwork::get_playerList << std::endl;
        std::cout << "Get Close Players: " << native::Player::GetClosestPlayer << std::endl;
        std::cout << "DodgeBallCheat: " << native::DodgeballManager::RpcMasterRequestPlayerOut << std::endl;
        std::cout << "GetPlayerVIA AccountID: " << native::Player::GetPlayerByAccountID << std::endl;
        std::cout << "MasterDamage PLayer: " << native::GameCombatManager::MasterDamagePlayer << std::endl;
        std::cout << "PhotonPlayer DestroyPlayerObjects: " << native::PhotonNetwork::DestroyPlayerObjects << std::endl;
        /*std::cout << "Game Pooped!!!" << std::endl;
        native::Player::playerAvatar = reinterpret_cast<native::Player::rightHand>(get_StaticPlayerClass->fields);*/
        //native::Player::rightHand(get_StaticPlayerClass->fields);
        //std::cout << "GetValue" << native::Il2CppArray2::GetValue << std::endl;
        //std::cout << "SetValue" << native::Il2CppArray2::SetValue << std::endl;
       // std::cout << "AlwaysValidVerifyer_IsValid: " << native::RecNetRunTime::AlwaysValidVerifyer_IsValid << std::endl;
        //std::cout << "IsValid: " << native::RecNetRunTime::IsValid << std::endl;
        //std::cout << "TimeValidVerifyer_IsValid: " << native::RecNetRunTime::TimeValidVerifyer_IsValid << std::endl;
        //std::cout << "Find Objects" << native::Player::FindObjectsOfType << std::endl;
        //std::cout << "AntiCheat: " << native::CodeStage::AntiCheat::Detectors::RRCheatDetector::Update << std::endl;
        //std::cout << "AntiCheat 2: " << native::ObscuredCheatingDetector::StopDetection << std::endl;
        std::cout << "Method Pointers initialized\n";
        return true;
    }








}