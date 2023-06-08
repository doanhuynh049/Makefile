CC = gcc			# Use the GCC frontend program when linking
CFLAGS = -g		# Flags for compilation (adding warnings are always good)
LDFLAGS =			# Flags for linking (none for the moment)

PRO_DIR := .
INPUT_PATH 	:= $(PRO_DIR)/source
INCLUDE_PATH := $(PRO_DIR)/include
OUTPUT_PATH := $(PRO_DIR)/output

#SOURCES := $(INPUT_PATH)/main.c $(INPUT_PATH)/edit.c $(INPUT_PATH)/menu.c $(INPUT_PATH)/print.c $(INPUT_PATH)/search.c $(INPUT_PATH)/add.c $(INPUT_PATH)/sum.c
SOURCES := $(INPUT_PATH)/main.cpp $(INPUT_PATH)/sum.c
OBJECTS := $(SOURCES:$(INPUT_PATH)/%.c=$(OUTPUT_PATH)/%.o)	# This creates a list of object files from the source files
EXECUTABLE  := $(OUTPUT_PATH)/results 						# The name of the executable

build: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(EXECUTABLE)

$(OUTPUT_PATH)/%.o: $(INPUT_PATH)/%.c $(INCLUDE_PATH)/*.h
	$(CC) $(CFLAGS) -c $< -o $@ -I.$(INCLUDE_PATH)

run: $(EXECUTABLE)
	$(EXECUTABLE)

print:
	@echo $(INCLUDE_PATH)
# rm is delete, -f block displayed when deleting file
clean:
	rm -f $(OUTPUT_PATH)/*
