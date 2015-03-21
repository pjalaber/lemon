/*
 *  Created by Martin Mroz on 3/21/15.
 *
 *  The author of the original program disclaims copyright.
 *  D language support Copyright (GPL) Serge Vakulenko <serge@vak.ru>.
 *  Copyright (GPL) (c) 2015 Martin Mroz <martinmroz@gmail.com>
 *  See LICENSE for additional information.
 */

#ifndef __lemon_table_h__
#define __lemon_table_h__

#include "lemon.h"

#include "struct.h"

/*
 ** All code in this file has been automatically generated
 ** from a specification in the file
 **              "table.q"
 ** by the associative array code building program "aagen".
 ** Do not edit this file!  Instead, edit the specification
 ** file, then rerun aagen.
 */
/*
 ** Code for processing tables in the LEMON parser generator.
 */

/* Routines for handling a strings */

char *Strsafe();

void Strsafe_init(/* void */);
int Strsafe_insert(/* char * */);
char *Strsafe_find(/* char * */);

/* Routines for handling symbols of the grammar */

struct symbol *Symbol_new();
int Symbolcmpp(/* struct symbol **, struct symbol ** */);
void Symbol_init(/* void */);
int Symbol_insert(/* struct symbol *, char * */);
struct symbol *Symbol_find(/* char * */);
struct symbol *Symbol_Nth(/* int */);
int Symbol_count(/*  */);
struct symbol **Symbol_arrayof(/*  */);

/* Routines to manage the state table */

int Configcmp(/* struct config *, struct config * */);
struct state *State_new();
void State_init(/* void */);
int State_insert(/* struct state *, struct config * */);
struct state *State_find(/* struct config * */);
struct state **State_arrayof(/*  */);

/* Routines used for efficiency in Configlist_add */

void Configtable_init(/* void */);
int Configtable_insert(/* struct config * */);
struct config *Configtable_find(/* struct config * */);
void Configtable_clear(/* int(*)(struct config *) */);

#endif /* defined(__lemon_table_h__) */
