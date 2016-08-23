/*
  Copyright 2008,2009,2010 Alun Williams
  This file is part of MAF.
  MAF is free software: you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  MAF is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with MAF.  If not, see <http://www.gnu.org/licenses/>.
*/


/*
$Log: purevirt.c $
Revision 1.2  2007/10/24 21:15:30Z  Alun
*/


#include <stdio.h>

void  _purecall(void)
{
  printf("Pure Virtual Function called!\n");
  * (char *) 0 = 0;
}
