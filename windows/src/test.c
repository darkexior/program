/*
 <sidescroller> <test.c> | Copyright (c) <2024> <gabriel guiti�n estrella>
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but without ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program. If not, see <https://www.gnu.org/licenses/>. */

#include <stdio.h>

void hello_string();

int test() {
  hello_string();
  return 0;
}

void hello_string() {
  printf("\x68\x65\x6c\x6c\x6f\n");
}
