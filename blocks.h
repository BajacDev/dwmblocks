//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "",	0,		0},
	{"", "backlight",	0,		11},
	{"", "volume",	0,		10},
	{"", "internet",	5,		0},
	{"", "battery",	30,		0},

	{"", "date '+%b %d (%a) %H:%M'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
