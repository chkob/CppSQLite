// stdafx.cpp : source file that includes just the standard includes
// CppSQLiteLib.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

#ifdef _DEBUG
#pragma comment(lib, "..\\..\\3rdparty\\lib\\debug\\sqlite3_x64.lib")
#else
#pragma comment(lib, "..\\..\\3rdparty\\lib\\release\\sqlite3_x64.lib")
#endif
