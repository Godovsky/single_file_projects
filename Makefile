### An enumeration of the commands used so that there are no conflicts with directories
### or files of the same name.
.PHONY: all clean clean_%



### Choosing a compiler
CC = gcc

### Compiler flags. -Wall is an flag that shows all warnings
CFLAGS = -Wall

### The path to the binary folders and files
MAINBIN = bin
### Here you can make the path to the files more nested BIN = $(MAINBIN)/DIR1/DIR2/...
BIN = $(MAINBIN)

### The path to the source files
SRC = src



### The output text command
ECHO = echo

### The make dir command. -p is an option that allows you to create paths with more than one folder.
### Windows PowerShell: "MKDIR = mkdir" or "MKDIR = md"
MKDIR = mkdir -p

### The remove command. -f is an option that allows you to ignore non-existent files and arguments,
### and not ask about anything. -r is an option that allows you to recursively delete directories. -v - showing progress
### and their contents. Windows PowerShell: "RMDIR = rmdir -r" or "RMDIR = rd -r"
RMDIR = rm -frv



### How to connect all c files and assemble binary files
### of the same name from them

### Way 1
### wildcard is a function that takes all files with the .c extension from the directory
#CFILES = $(wildcard $(SRC)/*.c)
### One of the ways to replace certain fields in the contents of a variable
#BFILES = $(CFILES:$(SRC)/%.c=$(BIN)/%)

### Way 2
### patsubst is a function that replaces certain fields in the contents of a variable,
### as in the way 1
BFILES = $(patsubst $(SRC)/%.c, $(BIN)/%, $(wildcard $(SRC)/*.c))

### way 3
#CFILES = $(wildcard $(SRC)/*.c)
#BFILES = $(patsubst $(SRC)/%.c, $(BIN)/%, $(CFILES))



### A universal script for building
### <left>: <right>
### 	$(CC) $(CFLAGS) $< -o $@
### $< - put the right side to the script
### $@ - put the left side to the script
### The @ character at the beginning of the command hides the output of the command on the screen
### @F takes the file name from the target (left side)
all: $(BFILES)

$(BIN)/%: $(SRC)/%.c | $(BIN)
	@$(ECHO) 'Building "$(@F)"'
	@$(CC) $(CFLAGS) $< -o $@

$(BIN):
	@$(ECHO) 'Creating "$(@)"'
	@$(MKDIR) $@

clean-%:
#	@$(ECHO) 'Removing "$(@:clean-%=%)"'
	@$(RMDIR) $(BIN)/$(@:clean-%=%)

clean:
#	@$(ECHO) 'Cleaning'
	@$(RMDIR) $(MAINBIN)
