#ifndef LUA_H
#define LUA_H

#include "lua.hpp"

typedef struct LuaScripts {
	char** ScriptFiles;
	int ScriptFileCount;
} LuaScripts;

typedef struct LuaFunction {
	char* name;
	lua_CFunction function;
} LuaFunction;

bool Initialise_Lua();

void Register_Lua_Function(const char* name, lua_CFunction function);

bool Execute_Lua_Script(char* luaScript);

bool Execute_Lua_File(char* luaScriptPath);

struct LuaString Read_Lua_String(int index);

#endif