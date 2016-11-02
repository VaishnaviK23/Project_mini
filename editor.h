/*****************************************************************************
 * Copyright (C) Vaishnavi Kulkarni vaishnavikulkarni@hotmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3.0 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>
 *****************************************************************************/

#ifndef __EDITOR_H
#define __EDITOR_H

#define CTRL(c) ((c) & 037)

WINDOW *pad;

/* Global value of current cursor position */
int row, col;
/*Global value of total number of lines in file*/
int max_lines;
/*Global value of topmost line in pad*/
int pad_topline;
/*Max lines in pad*/
long int plines;
int creat;
 
int len(int);
void edit(char *filename);
void input(void);
void backspace(void);
void file_lines(FILE *);
int cut_copy(int *, int);
void pPaste(int *, int, int);
void find_replace(char *, char *, int);
#endif
