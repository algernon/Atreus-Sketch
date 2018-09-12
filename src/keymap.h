/* -*- mode: c++ -*-
 * Atreus-Sketch -- algernon's Atreus Sketch
 * Copyright (C) 2018  Gergely Nagy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "layers.h"

#define Key_Exclamation LSHIFT(Key_1)
#define Key_At LSHIFT(Key_2)
#define Key_Hash LSHIFT(Key_3)
#define Key_Dollar LSHIFT(Key_4)
#define Key_Percent LSHIFT(Key_5)
#define Key_Caret LSHIFT(Key_6)
#define Key_And LSHIFT(Key_7)
#define Key_Star LSHIFT(Key_8)
#define Key_Plus LSHIFT(Key_Equals)

/* *INDENT-OFF* */
KEYMAPS(
  [GAMING] = KEYMAP_STACKED
  (
       Key_1  ,Key_2 ,Key_3 ,Key_4 ,Key_5
      ,Key_Q  ,Key_W ,Key_E ,Key_R ,Key_T
      ,Key_A  ,Key_S ,Key_D ,Key_F ,Key_G
      ,Key_Z  ,Key_X ,Key_C ,Key_V ,Key_B ,Key_LeftShift

                       ,Key_6 ,Key_7 ,Key_8     ,Key_9     ,Key_0
                       ,Key_Y ,Key_U ,Key_I     ,Key_O     ,Key_P
                       ,Key_H ,Key_J ,Key_K     ,Key_L     ,LockLayer(DVORAK)
      ,Key_LeftControl ,Key_N ,Key_M ,Key_Space ,Key_Enter ,Key_LeftAlt
  ),

  [DVORAK] = KEYMAP_STACKED(
       Key_Quote    ,Key_Comma ,Key_Period  ,Key_P   ,Key_Y
      ,Key_A        ,Key_O     ,Key_E       ,Key_U   ,Key_I
      ,Key_Slash    ,Key_Q     ,Key_J       ,Key_K   ,Key_X
      ,OSL(LOWER)   ,Key_Tab   ,Key_LeftGui ,Key_Esc ,Key_Backspace ,OSM(LeftShift)

                 ,Key_F     ,Key_G     ,Key_C            ,Key_R        ,Key_L
                 ,Key_D     ,Key_H     ,Key_T            ,Key_N        ,Key_S
                 ,Key_B     ,Key_M     ,Key_W            ,Key_V        ,Key_Z
      ,Key_Enter ,Key_Space ,Key_Minus ,OSM(LeftControl) ,OSM(LeftAlt) ,OSL(RAISE)
  ),

  [LOWER] = KEYMAP_STACKED
  (
       Key_LeftCurlyBracket  ,Key_At        ,Key_Star      ,Key_Dollar     ,Key_Caret
      ,Key_Backtick          ,Key_Home      ,Key_UpArrow   ,Key_End        ,XXX
      ,Key_Backslash         ,Key_LeftArrow ,Key_DownArrow ,Key_RightArrow ,XXX
      ,___                   ,___           ,___           ,___            ,___       ,___

           ,Key_PageUp    ,Key_1 ,Key_2 ,Key_3 ,Key_Equals
           ,Key_PageDown  ,Key_4 ,Key_5 ,Key_6 ,Key_Plus
           ,Key_Semicolon ,Key_7 ,Key_8 ,Key_9 ,Key_0
      ,___ ,___           ,___   ,___   ,___   ,M(M_GAMING)
   ),

  [RAISE] = KEYMAP_STACKED
  (
       Key_Percent             ,Key_Exclamation ,Key_Hash         ,Key_And       ,Key_RightCurlyBracket
      ,Consumer_ScanNextTrack  ,Key_LeftBracket ,Key_RightBracket ,Key_LeftParen ,Key_RightParen
      ,Consumer_PlaySlashPause ,XXX             ,XXX              ,XXX           ,M(M_RESET)
      ,M(M_GAMING)             ,___             ,___              ,___           ,___                   ,___

            ,Consumer_VolumeIncrement ,Key_F1 ,Key_F2 ,Key_F3 ,Key_F10
            ,Consumer_VolumeDecrement ,Key_F4 ,Key_F5 ,Key_F6 ,Key_F11
            ,XXX                      ,Key_F7 ,Key_F8 ,Key_F9 ,Key_F12
      ,___  ,___                      ,___    ,___    ,___    ,___
   )
)
/* *INDENT-ON* */
