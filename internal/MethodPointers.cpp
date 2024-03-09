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

    //Assigns All Method Pointers
   
     static bool EnableMethodPointers() 
    {

MethodInfo* get_forward;
MethodInfo* bulletTransFormField;
MethodInfo* get_IsOnCoolDown;
MethodInfo* setTime;
MethodInfo* RapidFire_Weapon;
MethodInfo* get_Position;
MethodInfo* get_TransForm;
MethodInfo* Fire_Weapon;

    Il2CppDomain* domain = il2cpp_domain_get();
    Il2CppImage* unityCore = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
    Il2CppClass* timeClass = il2cpp_class_from_name(unityCore, "UnityEngine", "Time");
    setTime = (MethodInfo*)il2cpp_class_get_method_from_name(timeClass, "set_timeScale", 1);

    Il2CppImage* unityCore1 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
    Il2CppClass* TransFormCLass = il2cpp_class_from_name(unityCore1, "UnityEngine", "Transform");
    get_Position = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass, "get_position", 0);

    Il2CppImage* unityCore2 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
    Il2CppClass* ComponentClass = il2cpp_class_from_name(unityCore2, "UnityEngine", "Component");
    get_TransForm = (MethodInfo*)il2cpp_class_get_method_from_name(ComponentClass, "get_transform", 0);

    Il2CppImage* FireWeapon = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
    Il2CppClass* Fire_Component = il2cpp_class_from_name(FireWeapon, "RecRoom.Core.Combat", "RangedWeapon");
    Fire_Weapon = (MethodInfo*)il2cpp_class_get_method_from_name(Fire_Component, "Fire", 2);

    Il2CppImage* unityCore3 = il2cpp_domain_assembly_open(domain, "UnityEngine.CoreModule")->image;
    Il2CppClass* TransFormCLass1 = il2cpp_class_from_name(unityCore3, "UnityEngine", "Transform");
    get_forward = (MethodInfo*)il2cpp_class_get_method_from_name(TransFormCLass1, "get_forward", 0);

    Il2CppImage* unityCore4 = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
    Il2CppClass* FireWeaponField = il2cpp_class_from_name(unityCore4, "RecRoom.Core.Combat", "RangedWeapon");
    bulletTransFormField = (MethodInfo*)il2cpp_class_get_field_from_name(FireWeaponField, "barrelTransform");

    Il2CppImage* RangedWeapon = il2cpp_domain_assembly_open(domain, "Assembly-CSharp")->image;
    Il2CppClass* IsGunOnCoolDown = il2cpp_class_from_name(RangedWeapon, "RecRoom.Core.Combat", "RangedWeapon");
    get_IsOnCoolDown = (MethodInfo*)il2cpp_class_get_method_from_name(IsGunOnCoolDown, "get_IsOnCooldown", 0);





    return true;
}

    


}