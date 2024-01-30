
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"   ", "nmcli -t -f NAME connection show --active", 5, 0},

	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{" ", "acpi | awk '{print $4}'", 60, 0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
// -----------------------------------------------------------------------------------------------------------------/
/*EDIT SECON SETTINS*/
//Modify this file to change what commands output to your statusbar, and recompile using the make command.
// Declaración o definición de status

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"   ", "nmcli -t -f NAME connection show --active", 5, 0},

	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"battery ", "/usr/local/bin/battery-notification.sh", 60, 0},

	{"", "date '+%b %d (%a) %I:%M%p'",        5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;




















































































