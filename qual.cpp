/// An array that transforms Phred qualities into their maq-like
/// equivalents by dividing by ten and rounding to the nearest 10,
/// but saturating at 3.
unsigned char qualRounds[] = {
	0, 0, 0, 0, 0,                          //   0 -   4
	10, 10, 10, 10, 10, 10, 10, 10, 10, 10, //   5 -  14
	20, 20, 20, 20, 20, 20, 20, 20, 20, 20, //  15 -  24
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, //  25 -  34
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, //  35 -  44
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, //  45 -  54
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, //  55 -  64
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, //  65 -  74
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, //  75 -  84
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, //  85 -  94
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, //  95 - 104
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 105 - 114
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 115 - 124
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 125 - 134
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 135 - 144
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 145 - 154
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 155 - 164
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 165 - 174
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 175 - 184
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 185 - 194
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 195 - 204
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 205 - 214
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 215 - 224
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 225 - 234
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 235 - 244
	30, 30, 30, 30, 30, 30, 30, 30, 30, 30, // 245 - 254
	30                                      // 255
};