#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 20 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 10/30/19
# Time: 12:26:57
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [A-Za-z_][A-Za-z0-9_]*

    2  [0123456789]+

    3  \+

    4  -

    5  \*

    6  \/

    7  \%

    8  \(

    9  \)

   10  \{

   11  \}

   12  '

   13  =

   14  ==

   15  \<

   16  \<=

   17  \>

   18  \>=

   19  !=

   20  &&

   21  \|\|

   22  &

   23  \|

   24  !

   25  \<\<

   26  \>\>

   27  ;

   28  ,

   29  \/\/[^\n]*

   30  \/\*(.|[\r\n])*?\*\/

   31  [ \t\n]*


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09 - 0x0a (2)    goto 3
	0x20               goto 3
	0x21               goto 4
	0x25               goto 5
	0x26               goto 6
	0x27               goto 7
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2f               goto 14
	0x30 - 0x39 (10)   goto 15
	0x3b               goto 16
	0x3c               goto 17
	0x3d               goto 18
	0x3e               goto 19
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20
	0x7b               goto 21
	0x7c               goto 22
	0x7d               goto 23


state 2
	^INITIAL

	0x09 - 0x0a (2)    goto 3
	0x20               goto 3
	0x21               goto 4
	0x25               goto 5
	0x26               goto 6
	0x27               goto 7
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2f               goto 14
	0x30 - 0x39 (10)   goto 15
	0x3b               goto 16
	0x3c               goto 17
	0x3d               goto 18
	0x3e               goto 19
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20
	0x7b               goto 21
	0x7c               goto 22
	0x7d               goto 23


state 3
	0x09 - 0x0a (2)    goto 3
	0x20               goto 3

	match 31


state 4
	0x3d               goto 24

	match 24


state 5
	match 7


state 6
	0x26               goto 25

	match 22


state 7
	match 12


state 8
	match 8


state 9
	match 9


state 10
	match 5


state 11
	match 3


state 12
	match 28


state 13
	match 4


state 14
	0x2a               goto 26
	0x2f               goto 27

	match 6


state 15
	0x30 - 0x39 (10)   goto 15

	match 2


state 16
	match 27


state 17
	0x3c               goto 28
	0x3d               goto 29

	match 15


state 18
	0x3d               goto 30

	match 13


state 19
	0x3d               goto 31
	0x3e               goto 32

	match 17


state 20
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x5a (26)   goto 20
	0x5f               goto 20
	0x61 - 0x7a (26)   goto 20

	match 1


state 21
	match 10


state 22
	0x7c               goto 33

	match 23


state 23
	match 11


state 24
	match 19


state 25
	match 20


state 26
	0x00 - 0x29 (42)   goto 26
	0x2a               goto 34
	0x2b - 0xff (213)  goto 26


state 27
	0x00 - 0x09 (10)   goto 27
	0x0b - 0xff (245)  goto 27

	match 29


state 28
	match 25


state 29
	match 16


state 30
	match 14


state 31
	match 18


state 32
	match 26


state 33
	match 21


state 34
	0x00 - 0x29 (42)   goto 26
	0x2a               goto 34
	0x2b - 0x2e (4)    goto 26
	0x2f               goto 35
	0x30 - 0xff (208)  goto 26


state 35
	0x00 - 0x29 (42)   goto 26
	0x2a               goto 34
	0x2b - 0xff (213)  goto 26

	match 30


#############################################################################
# Summary
#############################################################################

1 start state(s)
31 expression(s), 35 state(s)


#############################################################################
# End of File
#############################################################################
