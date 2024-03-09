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



namespace Cheats
{

    std::map<native::RecRoom::Core::Combat::RangedWeapon*, bool> rapid_fire_weapons;

    void LoopFire(native::RecRoom::Core::Combat::RangedWeapon* __this, float charge)
    {
       // MainCheats::oFire(MainCheats::Test1_Value, MainCheats::Test2_Value, MainCheats::Test33_Value, MainCheats::Test4_Value);
        /*bool __state_rapidfire = true;
        auto iter = rapid_fire_weapons.find(__this);
        if (__state_rapidfire && iter == rapid_fire_weapons.end())
        {
            iter = rapid_fire_weapons.emplace(__this, false).first;
        }
        else if (!__state_rapidfire) {
            rapid_fire_weapons.clear();
            return;
        }
        std::cout << "Function called but failed Test6\n";
        if (!iter->second)
        {
            

                auto iter = rapid_fire_weapons.find(__this);


                auto velocity = native::UnityEngine::Transform::get_forward(__this->barrelTransform, nullptr);
                velocity.x *= __this->bulletFireSpeed;
                velocity.y *= __this->bulletFireSpeed;
                velocity.z *= __this->bulletFireSpeed;

                native::RecRoom::Core::Combat::RangedWeapon::Fire(__this, velocity, charge - 0.001f, nullptr);
            
                    
                

            iter->second = true;
        }

        else if (charge == 1.0f)
        {
            std::cout << "Function killed\n";
            rapid_fire_weapons.erase(iter);
        }*/


    }
}