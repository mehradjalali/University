# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/mehrad/Documents/AP/HW5 University/University"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/mehrad/Documents/AP/HW5 University/University"

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/cmake-gui -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/home/mehrad/Documents/AP/HW5 University/University/CMakeFiles" "/home/mehrad/Documents/AP/HW5 University/University/CMakeFiles/progress.marks"
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/home/mehrad/Documents/AP/HW5 University/University/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named University

# Build rule for target.
University: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 University
.PHONY : University

# fast build rule for target.
University/fast:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/build
.PHONY : University/fast

Course.o: Course.cpp.o

.PHONY : Course.o

# target to build an object file
Course.cpp.o:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Course.cpp.o
.PHONY : Course.cpp.o

Course.i: Course.cpp.i

.PHONY : Course.i

# target to preprocess a source file
Course.cpp.i:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Course.cpp.i
.PHONY : Course.cpp.i

Course.s: Course.cpp.s

.PHONY : Course.s

# target to generate assembly for a file
Course.cpp.s:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Course.cpp.s
.PHONY : Course.cpp.s

Person.o: Person.cpp.o

.PHONY : Person.o

# target to build an object file
Person.cpp.o:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Person.cpp.o
.PHONY : Person.cpp.o

Person.i: Person.cpp.i

.PHONY : Person.i

# target to preprocess a source file
Person.cpp.i:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Person.cpp.i
.PHONY : Person.cpp.i

Person.s: Person.cpp.s

.PHONY : Person.s

# target to generate assembly for a file
Person.cpp.s:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Person.cpp.s
.PHONY : Person.cpp.s

Professor.o: Professor.cpp.o

.PHONY : Professor.o

# target to build an object file
Professor.cpp.o:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Professor.cpp.o
.PHONY : Professor.cpp.o

Professor.i: Professor.cpp.i

.PHONY : Professor.i

# target to preprocess a source file
Professor.cpp.i:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Professor.cpp.i
.PHONY : Professor.cpp.i

Professor.s: Professor.cpp.s

.PHONY : Professor.s

# target to generate assembly for a file
Professor.cpp.s:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Professor.cpp.s
.PHONY : Professor.cpp.s

Student.o: Student.cpp.o

.PHONY : Student.o

# target to build an object file
Student.cpp.o:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Student.cpp.o
.PHONY : Student.cpp.o

Student.i: Student.cpp.i

.PHONY : Student.i

# target to preprocess a source file
Student.cpp.i:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Student.cpp.i
.PHONY : Student.cpp.i

Student.s: Student.cpp.s

.PHONY : Student.s

# target to generate assembly for a file
Student.cpp.s:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/Student.cpp.s
.PHONY : Student.cpp.s

University.o: University.cpp.o

.PHONY : University.o

# target to build an object file
University.cpp.o:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/University.cpp.o
.PHONY : University.cpp.o

University.i: University.cpp.i

.PHONY : University.i

# target to preprocess a source file
University.cpp.i:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/University.cpp.i
.PHONY : University.cpp.i

University.s: University.cpp.s

.PHONY : University.s

# target to generate assembly for a file
University.cpp.s:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/University.cpp.s
.PHONY : University.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/University.dir/build.make CMakeFiles/University.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... University"
	@echo "... Course.o"
	@echo "... Course.i"
	@echo "... Course.s"
	@echo "... Person.o"
	@echo "... Person.i"
	@echo "... Person.s"
	@echo "... Professor.o"
	@echo "... Professor.i"
	@echo "... Professor.s"
	@echo "... Student.o"
	@echo "... Student.i"
	@echo "... Student.s"
	@echo "... University.o"
	@echo "... University.i"
	@echo "... University.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

