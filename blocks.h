//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "nettraf",	1,		0},
	{"", "backlight",	0,		11},
	{"", "volume",	0,		10},
	{"", "internet",	1,		0},
	{"", "battery",	1,		0},

	{"", "clock",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ❘ ";
static unsigned int delimLen = 5;
