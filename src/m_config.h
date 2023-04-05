//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005-2014 Simon Howard
// Copyright(C) 2014-2017 RestlessRodent
// Copyright(C) 2018-2023 Julia Nechaevskaya
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//      Configuration file interface.
//    


#ifndef __M_CONFIG__
#define __M_CONFIG__

#include "doomtype.h"

void M_LoadDefaults(void);
void M_SaveDefaults(void);
void M_SaveDefaultsAlternate(char *main);
void M_SetConfigDir(char *dir);
void M_BindIntVariable(char *name, int *variable);
void M_BindFloatVariable(char *name, float *variable);
void M_BindStringVariable(char *name, char **variable);
boolean M_SetVariable(char *name, char *value);
int M_GetIntVariable(char *name);
const char *M_GetStringVariable(char *name);
float M_GetFloatVariable(char *name);
void M_SetConfigFilenames(char *main_config);
char *M_GetSaveGameDir(char *iwadname);
char *M_GetAutoloadDir(const char *iwadname);

extern char *configdir;

#endif
