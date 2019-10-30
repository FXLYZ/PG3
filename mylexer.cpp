/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 20 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 10/30/19
* Time: 12:26:57
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

#line 45 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 20 ".\\mylexer.l"

    keyword["if"] = "IF";
    keyword["else"] = "ELSE";
    keyword["while"] = "WHILE";
    keyword["for"] = "FOR";
    keyword["break"] = "BREAK";
    keyword["continue"] = "CONTINUE";
    keyword["int"] = "INT";
    keyword["char"] = "CHAR";
    keyword["double"] = "DOUBLE";
    keyword["float"] = "FLOAT";

#line 78 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 70 ".\\mylexer.l"

                if (keyword.find(yytext) != keyword.end()) {
                    cout << keyword[yytext] << "\t\t" << yytext << endl;
                }
                else {
                    if (idlist.find(yytext) == idlist.end()) {
                        idlist[yytext] = idcount;
                        idcount++;
                    }
                    cout << "ID\t\t" << yytext << "\t" <<idlist[yytext] << endl;	
                }
            
#line 168 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 82 ".\\mylexer.l"
 cout << "NUMBER\t\t" << yytext << "\t" << yytext  << endl; 
#line 175 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 83 ".\\mylexer.l"
 cout << "PLUS\t\t" << yytext << endl; 
#line 182 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 84 ".\\mylexer.l"
 cout << "MINUS\t\t" << yytext << endl; 
#line 189 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 85 ".\\mylexer.l"
 cout << "MULTIPLY\t" << yytext << endl; 
#line 196 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 86 ".\\mylexer.l"
 cout << "DIVIDE\t\t" << yytext << endl; 
#line 203 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 87 ".\\mylexer.l"
 cout << "MODULE\t\t" << yytext << endl; 
#line 210 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 88 ".\\mylexer.l"
 cout << "LPAREN\t\t" << yytext << endl; 
#line 217 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 89 ".\\mylexer.l"
 cout << "RPAREN\t\t" << yytext << endl; 
#line 224 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 90 ".\\mylexer.l"
 cout << "LBRACE\t\t" << yytext << endl; 
#line 231 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 91 ".\\mylexer.l"
 cout << "RBRACE\t\t" << yytext << endl; 
#line 238 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 92 ".\\mylexer.l"
 cout << "SINGLE QUOTE" << yytext << endl; 
#line 245 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 93 ".\\mylexer.l"
 cout << "ASSIGN\t\t" << yytext << endl; 
#line 252 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 94 ".\\mylexer.l"
 cout << "EQUALS\t\t" << yytext << endl; 
#line 259 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 95 ".\\mylexer.l"
 cout << "LESS THAN\t" << yytext << endl; 
#line 266 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 96 ".\\mylexer.l"
 cout << "LESS EQUAL\t" << yytext << endl; 
#line 273 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 97 ".\\mylexer.l"
 cout << "GREATER THAN\t" << yytext << endl; 
#line 280 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 98 ".\\mylexer.l"
 cout << "GREATER EQUAL" << yytext << endl; 
#line 287 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 99 ".\\mylexer.l"
 cout << "NOT EQUAL\t" << yytext << endl; 
#line 294 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 100 ".\\mylexer.l"
 cout << "AND\t\t" << yytext << endl; 
#line 301 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 101 ".\\mylexer.l"
 cout << "OR\t\t" << yytext << endl; 
#line 308 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 102 ".\\mylexer.l"
 cout << "BIT AND\t\t" << yytext << endl; 
#line 315 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 103 ".\\mylexer.l"
 cout << "BIT OR\t\t" << yytext << endl; 
#line 322 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 104 ".\\mylexer.l"
 cout << "NOT\t\t" << yytext << endl; 
#line 329 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 105 ".\\mylexer.l"
 cout << "LEFT SHIFT\t" << yytext << endl; 
#line 336 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 106 ".\\mylexer.l"
 cout << "RIGHT SHIFT\t" << yytext << endl; 
#line 343 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 107 ".\\mylexer.l"
 cout << "SEMICOLON\t" << yytext << endl; 
#line 350 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 108 ".\\mylexer.l"
 cout << "COMMA\t\t" << yytext << endl; 
#line 357 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 109 ".\\mylexer.l"
 ; 
#line 364 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 110 ".\\mylexer.l"
 ; 
#line 371 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 111 ".\\mylexer.l"
 ; 
#line 378 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 146;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 3, 1 },
		{ 3, 3 },
		{ 3, 3 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 15, 15 },
		{ 26, 14 },
		{ 31, 19 },
		{ 32, 19 },
		{ 28, 17 },
		{ 29, 17 },
		{ 27, 14 },
		{ 30, 18 },
		{ 25, 6 },
		{ 24, 4 },
		{ 3, 1 },
		{ 4, 1 },
		{ 3, 3 },
		{ 33, 22 },
		{ 0, 27 },
		{ 5, 1 },
		{ 6, 1 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 35, 34 },
		{ 14, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 15, 1 },
		{ 34, 35 },
		{ 16, 1 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 0, 0 },
		{ 21, 1 },
		{ 22, 1 },
		{ 23, 1 },
		{ 20, 20 },
		{ 0, 0 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 },
		{ 20, 20 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 20, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -6, 31 },
		{ 0, -38, 24 },
		{ 0, 0, 7 },
		{ 0, -16, 22 },
		{ 0, 0, 12 },
		{ 0, 0, 8 },
		{ 0, 0, 9 },
		{ 0, 0, 5 },
		{ 0, 0, 3 },
		{ 0, 0, 28 },
		{ 0, 0, 4 },
		{ 0, -27, 6 },
		{ 0, -43, 2 },
		{ 0, 0, 27 },
		{ 0, -42, 15 },
		{ 0, -40, 13 },
		{ 0, -45, 17 },
		{ 0, 23, 1 },
		{ 0, 0, 10 },
		{ 0, -97, 23 },
		{ 0, 0, 11 },
		{ 0, 0, 19 },
		{ 0, 0, 20 },
		{ 35, 0, 0 },
		{ -27, 18, 29 },
		{ 0, 0, 25 },
		{ 0, 0, 16 },
		{ 0, 0, 14 },
		{ 0, 0, 18 },
		{ 0, 0, 26 },
		{ 0, 0, 21 },
		{ 35, -9, 0 },
		{ -26, 8, 30 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 112 ".\\mylexer.l"


// programs sections

int main(void)
{
    int n = 1;
    mylexer lexer;
    if (lexer.yycreate()) {
        lexer.yyin = new std::ifstream("input.txt");
		cout << "µ¥´Ê\t\t´ÊËØ\tÊôÐÔ\n";
        if (!lexer.yyin->fail()) {
            n = lexer.yylex();
        }
		system("pause");
		return n;
    }
}
