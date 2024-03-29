#include <stack>
#include <list>
#include "../native_invoke.hpp"
#include <MinHook.h>



std::stack<native_invoke::native_invoke_function> queue;
std::list<native_invoke::recurring_invoke_function> recurring_funcs;
uintptr_t GameAssembly_ForAntiCheat = (uintptr_t)GetModuleHandle("GameAssembly.dll");



void native_invoke::init() 
{
    
    queue = std::stack<native_invoke::native_invoke_function>();
    recurring_funcs = std::list<native_invoke::recurring_invoke_function>();
   
}

void native_invoke::destroy() {
    while (!queue.empty()) {
        queue.pop();
    }
}

void native_invoke::add(native_invoke::native_invoke_function func) {
    queue.push(func);
}

void native_invoke::add_recurring(native_invoke::recurring_invoke_function func) 
{
    recurring_funcs.push_back(func);
}

void native_invoke::run() 
{
    while (!queue.empty()) {
        queue.top()();
        queue.pop();
    }

    auto func_iter = recurring_funcs.begin();
    while (func_iter != recurring_funcs.end()) {
        if ((*func_iter)()) {
            func_iter++;
        }
        else {
            func_iter = recurring_funcs.erase(func_iter);
        }
    }
}