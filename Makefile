# Modern C++ Practice Repository Makefile
CXX ?= clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic
BIN_DIR = bin
SRCS = $(shell find basics -name "*.cpp" | sort)

.PHONY: all help check build-all run clean

all: help

help:
	@echo "=========================================================="
	@echo "  Modern C++ Learning Repository - Build System"
	@echo "=========================================================="
	@echo "  make check           - Verify syntax of all 107 C++ programs"
	@echo "  make build-all       - Compile all programs into $(BIN_DIR)/"
	@echo "  make run FILE=<path> - Compile & run a specific program"
	@echo "  make clean           - Remove binaries and build artifacts"
	@echo "=========================================================="
	@echo "  Examples:"
	@echo "    make run FILE=basics/library_mgmt.cpp"
	@echo "    make run FILE=basics/0_sample_pgms/pgm000.cpp"
	@echo "=========================================================="

check:
	@echo "Checking syntax of all C++ files with $(CXX)..."
	@failed=0; \
	for f in $(SRCS); do \
		echo "Verifying $$f..."; \
		$(CXX) $(CXXFLAGS) -fsyntax-only "$$f" || failed=1; \
	done; \
	if [ $$failed -eq 0 ]; then \
		echo "All 107 C++ files passed verification!"; \
	else \
		echo "Verification failed on some files."; exit 1; \
	fi

build-all:
	@mkdir -p $(BIN_DIR)
	@echo "Compiling all programs into $(BIN_DIR)/..."
	@for f in $(SRCS); do \
		base=$$(basename "$$f" .cpp); \
		echo "Building $$base..."; \
		$(CXX) $(CXXFLAGS) "$$f" -o "$(BIN_DIR)/$$base" || exit 1; \
	done
	@echo "All programs compiled successfully in $(BIN_DIR)/"

run:
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make run FILE=<path-to-cpp>"; \
		echo "Example: make run FILE=basics/library_mgmt.cpp"; \
		exit 1; \
	fi
	@mkdir -p $(BIN_DIR)
	@base=$$(basename "$(FILE)" .cpp); \
	echo "Compiling $(FILE)..."; \
	$(CXX) $(CXXFLAGS) "$(FILE)" -o "$(BIN_DIR)/$$base" && \
	echo "----------------------------------------" && \
	"$(BIN_DIR)/$$base"

clean:
	@rm -rf $(BIN_DIR)
	@find basics -type f -perm +111 -not -name "*.cpp" -not -name "*.md" -delete 2>/dev/null || true
	@rm -rf basics/**/**/*.dSYM 2>/dev/null || true
	@echo "All binaries and artifacts cleaned up."
