CC = gcc

CFLAGS = -Wall -Wextra -Wpedantic

SRC_DIR = .
CPU_DIR = cpu
MEMORY_DIR = memory
UTILS_DIR = utils
TESTS_DIR = tests

SRC_FILES = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(CPU_DIR)/*.c) $(wildcard $(MEMORY_DIR)/*.c) $(wildcard $(UTILS_DIR)/*.c)
TEST_FILES = $(wildcard $(TESTS_DIR)/*.c) $(wildcard $(CPU_DIR)/*.c) $(wildcard $(UTILS_DIR)/*.c)

APP_OUTPUT = main.exe
TESTS_OUTPUT = tests.exe

.PHONY: all app tests clean

all: app

app: $(APP_OUTPUT)
	./$(APP_OUTPUT)

tests: $(TESTS_OUTPUT)
	./$(TESTS_OUTPUT)

$(APP_OUTPUT): $(SRC_FILES)
	$(CC) $(CFLAGS) $^ -o $@

$(TESTS_OUTPUT): $(TEST_FILES)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(APP_OUTPUT) $(TESTS_OUTPUT)