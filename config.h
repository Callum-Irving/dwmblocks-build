//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ " BTC: ", "sb-price btc Bitcoin 'BTC: '", 3600, 21 },    // Leading whitespace is to make bar look better
        { "",      "sb-volume",                    0,    10 },
        { "",      "sb-battery",                   5,    3  },
        { "",      "sb-clock",                     30,   1  }
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
