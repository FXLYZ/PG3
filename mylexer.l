%{
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
%}

// lexical analyser name
%name mylexer

// class definitions
{
    // place any extra class members here
	unordered_map<string, int> idlist;
	int idcount = 0;
    unordered_map<string, string> keyword;
}

// constructor
{
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
}

// place any declarations here
ID [A-Za-z_][A-Za-z0-9_]*
NUM [0123456789]+
PLUS \+
MIN -
MUL \*
DIV \/
MOD \%
LPAR \(
RPAR \)
LBRA \{
RBRA \}
SQUOTE '
ASSIGN =
EQ ==
LT \<
LE \<=
GT \>
GE \>=
NE !=
AND &&
OR \|\|
BAND &
BOR \|
NOT !
LSHIFT \<\<
RSHIFT \>\>
SEMI ;
COMMA ,
COMMENT \/\/[^\n]*
LCOMMENT \/\*(.|[\r\n])*?\*\/
WS [ \t\n]*
%%

// rules sections

// place your Lex rules here
{ID}	    {
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
            }
{NUM}       { cout << "NUMBER\t\t" << yytext << "\t" << yytext  << endl; }
{PLUS}	    { cout << "PLUS\t\t" << yytext << endl; }
{MIN}	    { cout << "MINUS\t\t" << yytext << endl; }
{MUL}	    { cout << "MULTIPLY\t" << yytext << endl; }
{DIV}	    { cout << "DIVIDE\t\t" << yytext << endl; }
{MOD}	    { cout << "MODULE\t\t" << yytext << endl; }       
{LPAR}	    { cout << "LPAREN\t\t" << yytext << endl; }
{RPAR}	    { cout << "RPAREN\t\t" << yytext << endl; }
{LBRA}      { cout << "LBRACE\t\t" << yytext << endl; }
{RBRA}      { cout << "RBRACE\t\t" << yytext << endl; }
{SQUOTE}    { cout << "SINGLE QUOTE" << yytext << endl; }
{ASSIGN}    { cout << "ASSIGN\t\t" << yytext << endl; }
{EQ}        { cout << "EQUALS\t\t" << yytext << endl; }
{LT}        { cout << "LESS THAN\t" << yytext << endl; }
{LE}        { cout << "LESS EQUAL\t" << yytext << endl; }
{GT}        { cout << "GREATER THAN\t" << yytext << endl; }
{GE}        { cout << "GREATER EQUAL" << yytext << endl; }
{NE}        { cout << "NOT EQUAL\t" << yytext << endl; }
{AND}       { cout << "AND\t\t" << yytext << endl; }
{OR}        { cout << "OR\t\t" << yytext << endl; }
{BAND}      { cout << "BIT AND\t\t" << yytext << endl; }
{BOR}       { cout << "BIT OR\t\t" << yytext << endl; }
{NOT}       { cout << "NOT\t\t" << yytext << endl; }
{LSHIFT}    { cout << "LEFT SHIFT\t" << yytext << endl; }
{RSHIFT}    { cout << "RIGHT SHIFT\t" << yytext << endl; }
{SEMI}	    { cout << "SEMICOLON\t" << yytext << endl; }
{COMMA}     { cout << "COMMA\t\t" << yytext << endl; }
{COMMENT}   { ; }
{LCOMMENT}  { ; }
{WS}        { ; }
%%

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