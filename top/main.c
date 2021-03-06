/*
Copyright (C) 2012  Eren Türkay

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301, USA.
*/

#include <debug.h>
#include <printf.h>
#include <platform.h>

void kernel_main(void);
void kernel_main(void) {
    char c;

    dprintf(DEBUG, "platform_init(): initializing platform\n");
    platform_init();

    printf("\n\r");
    printf("========\n\r");
    printf("Hello from Simple Operating System!\n\r");
    printf("Website: %s\n\r", "http://github.com/eren/sos");
    printf("========\n\n\r");
    printf("Now echoing what you type on serial port...\n\n\r");

    while (1) {
        platform_dgetc(&c);
        platform_dputc(c);
    }
    

}
