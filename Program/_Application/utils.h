/**
	@file	utils.h
	@brief	Butterfly MP3 utility routines
	@author	RA Sewell 
	@date	January 2006

	Copyright (C) 2005 Nick Lott <nick_Lott@bigfoot.com>
	Copyright (C) 2006 RA Sewell <richsewell@gmail.com>
	Minor changes for a digital picture frame by M.Bode 2007
	
	This is a simple MP3 player based around the AVR Butterfly.It currently 
	uses a VS1001 mp3 decoder, MMC card and Nokia LCD. It has been heavily 
	influenced by the Yampp system by Jesper Hansen <jesperh@telia.com>.
	
	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software Foundation, 
	Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.


	Target(s)...: ATmega169

	Compiler....: AVR-GCC 3.3.1; avr-libc 1.0
	
**/

#ifndef UTILS_H
#define UTILS_H

#include "inttypes.h"

uint16_t strLen(uint8_t *str);
void strCatChar(uint8_t *str, uint8_t byte);

#endif // UTILS_H

