//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5, 0},
	{"wlan0: ", "ip a | grep wlan0 | grep inet | awk '{print $2}'", 60, 0},

	/* {" ", "acpi | awk '{print $4}'", 60, 0}, */
	{"Bat: ", "acpi | awk '{print $4}'", 60, 0},

	{"", "date '+%b %d (%a) %I:%M%p'", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
