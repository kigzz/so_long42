# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/bpouchep/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.6461.75/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/bpouchep/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.6461.75/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bpouchep/CLionProjects/so_long42

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bpouchep/CLionProjects/so_long42/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/so_long.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/so_long.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/so_long.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/so_long.dir/flags.make

CMakeFiles/so_long.dir/srcs/so_long.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/so_long.c.o: ../srcs/so_long.c
CMakeFiles/so_long.dir/srcs/so_long.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/so_long.dir/srcs/so_long.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/so_long.c.o -MF CMakeFiles/so_long.dir/srcs/so_long.c.o.d -o CMakeFiles/so_long.dir/srcs/so_long.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/so_long.c

CMakeFiles/so_long.dir/srcs/so_long.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/so_long.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/so_long.c > CMakeFiles/so_long.dir/srcs/so_long.c.i

CMakeFiles/so_long.dir/srcs/so_long.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/so_long.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/so_long.c -o CMakeFiles/so_long.dir/srcs/so_long.c.s

CMakeFiles/so_long.dir/srcs/ft_free.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/ft_free.c.o: ../srcs/ft_free.c
CMakeFiles/so_long.dir/srcs/ft_free.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/so_long.dir/srcs/ft_free.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/ft_free.c.o -MF CMakeFiles/so_long.dir/srcs/ft_free.c.o.d -o CMakeFiles/so_long.dir/srcs/ft_free.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/ft_free.c

CMakeFiles/so_long.dir/srcs/ft_free.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/ft_free.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/ft_free.c > CMakeFiles/so_long.dir/srcs/ft_free.c.i

CMakeFiles/so_long.dir/srcs/ft_free.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/ft_free.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/ft_free.c -o CMakeFiles/so_long.dir/srcs/ft_free.c.s

CMakeFiles/so_long.dir/srcs/check_extension.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/check_extension.c.o: ../srcs/check_extension.c
CMakeFiles/so_long.dir/srcs/check_extension.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/so_long.dir/srcs/check_extension.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/check_extension.c.o -MF CMakeFiles/so_long.dir/srcs/check_extension.c.o.d -o CMakeFiles/so_long.dir/srcs/check_extension.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/check_extension.c

CMakeFiles/so_long.dir/srcs/check_extension.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/check_extension.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/check_extension.c > CMakeFiles/so_long.dir/srcs/check_extension.c.i

CMakeFiles/so_long.dir/srcs/check_extension.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/check_extension.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/check_extension.c -o CMakeFiles/so_long.dir/srcs/check_extension.c.s

CMakeFiles/so_long.dir/srcs/init_structure.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/init_structure.c.o: ../srcs/init_structure.c
CMakeFiles/so_long.dir/srcs/init_structure.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/so_long.dir/srcs/init_structure.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/init_structure.c.o -MF CMakeFiles/so_long.dir/srcs/init_structure.c.o.d -o CMakeFiles/so_long.dir/srcs/init_structure.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/init_structure.c

CMakeFiles/so_long.dir/srcs/init_structure.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/init_structure.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/init_structure.c > CMakeFiles/so_long.dir/srcs/init_structure.c.i

CMakeFiles/so_long.dir/srcs/init_structure.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/init_structure.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/init_structure.c -o CMakeFiles/so_long.dir/srcs/init_structure.c.s

CMakeFiles/so_long.dir/srcs/hook_functions.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/hook_functions.c.o: ../srcs/hook_functions.c
CMakeFiles/so_long.dir/srcs/hook_functions.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/so_long.dir/srcs/hook_functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/hook_functions.c.o -MF CMakeFiles/so_long.dir/srcs/hook_functions.c.o.d -o CMakeFiles/so_long.dir/srcs/hook_functions.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/hook_functions.c

CMakeFiles/so_long.dir/srcs/hook_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/hook_functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/hook_functions.c > CMakeFiles/so_long.dir/srcs/hook_functions.c.i

CMakeFiles/so_long.dir/srcs/hook_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/hook_functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/hook_functions.c -o CMakeFiles/so_long.dir/srcs/hook_functions.c.s

CMakeFiles/so_long.dir/srcs/open_image.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/open_image.c.o: ../srcs/open_image.c
CMakeFiles/so_long.dir/srcs/open_image.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/so_long.dir/srcs/open_image.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/open_image.c.o -MF CMakeFiles/so_long.dir/srcs/open_image.c.o.d -o CMakeFiles/so_long.dir/srcs/open_image.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/open_image.c

CMakeFiles/so_long.dir/srcs/open_image.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/open_image.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/open_image.c > CMakeFiles/so_long.dir/srcs/open_image.c.i

CMakeFiles/so_long.dir/srcs/open_image.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/open_image.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/open_image.c -o CMakeFiles/so_long.dir/srcs/open_image.c.s

CMakeFiles/so_long.dir/srcs/store_map.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/store_map.c.o: ../srcs/store_map.c
CMakeFiles/so_long.dir/srcs/store_map.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/so_long.dir/srcs/store_map.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/store_map.c.o -MF CMakeFiles/so_long.dir/srcs/store_map.c.o.d -o CMakeFiles/so_long.dir/srcs/store_map.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/store_map.c

CMakeFiles/so_long.dir/srcs/store_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/store_map.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/store_map.c > CMakeFiles/so_long.dir/srcs/store_map.c.i

CMakeFiles/so_long.dir/srcs/store_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/store_map.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/store_map.c -o CMakeFiles/so_long.dir/srcs/store_map.c.s

CMakeFiles/so_long.dir/srcs/check_map.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/check_map.c.o: ../srcs/check_map.c
CMakeFiles/so_long.dir/srcs/check_map.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/so_long.dir/srcs/check_map.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/check_map.c.o -MF CMakeFiles/so_long.dir/srcs/check_map.c.o.d -o CMakeFiles/so_long.dir/srcs/check_map.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/check_map.c

CMakeFiles/so_long.dir/srcs/check_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/check_map.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/check_map.c > CMakeFiles/so_long.dir/srcs/check_map.c.i

CMakeFiles/so_long.dir/srcs/check_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/check_map.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/check_map.c -o CMakeFiles/so_long.dir/srcs/check_map.c.s

CMakeFiles/so_long.dir/srcs/game_init.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/game_init.c.o: ../srcs/game_init.c
CMakeFiles/so_long.dir/srcs/game_init.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/so_long.dir/srcs/game_init.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/game_init.c.o -MF CMakeFiles/so_long.dir/srcs/game_init.c.o.d -o CMakeFiles/so_long.dir/srcs/game_init.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/game_init.c

CMakeFiles/so_long.dir/srcs/game_init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/game_init.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/game_init.c > CMakeFiles/so_long.dir/srcs/game_init.c.i

CMakeFiles/so_long.dir/srcs/game_init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/game_init.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/game_init.c -o CMakeFiles/so_long.dir/srcs/game_init.c.s

CMakeFiles/so_long.dir/srcs/map_draw.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/map_draw.c.o: ../srcs/map_draw.c
CMakeFiles/so_long.dir/srcs/map_draw.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/so_long.dir/srcs/map_draw.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/map_draw.c.o -MF CMakeFiles/so_long.dir/srcs/map_draw.c.o.d -o CMakeFiles/so_long.dir/srcs/map_draw.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/map_draw.c

CMakeFiles/so_long.dir/srcs/map_draw.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/map_draw.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/map_draw.c > CMakeFiles/so_long.dir/srcs/map_draw.c.i

CMakeFiles/so_long.dir/srcs/map_draw.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/map_draw.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/map_draw.c -o CMakeFiles/so_long.dir/srcs/map_draw.c.s

CMakeFiles/so_long.dir/srcs/player_movement.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/player_movement.c.o: ../srcs/player_movement.c
CMakeFiles/so_long.dir/srcs/player_movement.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/so_long.dir/srcs/player_movement.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/player_movement.c.o -MF CMakeFiles/so_long.dir/srcs/player_movement.c.o.d -o CMakeFiles/so_long.dir/srcs/player_movement.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/player_movement.c

CMakeFiles/so_long.dir/srcs/player_movement.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/player_movement.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/player_movement.c > CMakeFiles/so_long.dir/srcs/player_movement.c.i

CMakeFiles/so_long.dir/srcs/player_movement.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/player_movement.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/player_movement.c -o CMakeFiles/so_long.dir/srcs/player_movement.c.s

CMakeFiles/so_long.dir/srcs/show_moves.c.o: CMakeFiles/so_long.dir/flags.make
CMakeFiles/so_long.dir/srcs/show_moves.c.o: ../srcs/show_moves.c
CMakeFiles/so_long.dir/srcs/show_moves.c.o: CMakeFiles/so_long.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/so_long.dir/srcs/show_moves.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/so_long.dir/srcs/show_moves.c.o -MF CMakeFiles/so_long.dir/srcs/show_moves.c.o.d -o CMakeFiles/so_long.dir/srcs/show_moves.c.o -c /home/bpouchep/CLionProjects/so_long42/srcs/show_moves.c

CMakeFiles/so_long.dir/srcs/show_moves.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/so_long.dir/srcs/show_moves.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bpouchep/CLionProjects/so_long42/srcs/show_moves.c > CMakeFiles/so_long.dir/srcs/show_moves.c.i

CMakeFiles/so_long.dir/srcs/show_moves.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/so_long.dir/srcs/show_moves.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bpouchep/CLionProjects/so_long42/srcs/show_moves.c -o CMakeFiles/so_long.dir/srcs/show_moves.c.s

# Object files for target so_long
so_long_OBJECTS = \
"CMakeFiles/so_long.dir/srcs/so_long.c.o" \
"CMakeFiles/so_long.dir/srcs/ft_free.c.o" \
"CMakeFiles/so_long.dir/srcs/check_extension.c.o" \
"CMakeFiles/so_long.dir/srcs/init_structure.c.o" \
"CMakeFiles/so_long.dir/srcs/hook_functions.c.o" \
"CMakeFiles/so_long.dir/srcs/open_image.c.o" \
"CMakeFiles/so_long.dir/srcs/store_map.c.o" \
"CMakeFiles/so_long.dir/srcs/check_map.c.o" \
"CMakeFiles/so_long.dir/srcs/game_init.c.o" \
"CMakeFiles/so_long.dir/srcs/map_draw.c.o" \
"CMakeFiles/so_long.dir/srcs/player_movement.c.o" \
"CMakeFiles/so_long.dir/srcs/show_moves.c.o"

# External object files for target so_long
so_long_EXTERNAL_OBJECTS =

so_long: CMakeFiles/so_long.dir/srcs/so_long.c.o
so_long: CMakeFiles/so_long.dir/srcs/ft_free.c.o
so_long: CMakeFiles/so_long.dir/srcs/check_extension.c.o
so_long: CMakeFiles/so_long.dir/srcs/init_structure.c.o
so_long: CMakeFiles/so_long.dir/srcs/hook_functions.c.o
so_long: CMakeFiles/so_long.dir/srcs/open_image.c.o
so_long: CMakeFiles/so_long.dir/srcs/store_map.c.o
so_long: CMakeFiles/so_long.dir/srcs/check_map.c.o
so_long: CMakeFiles/so_long.dir/srcs/game_init.c.o
so_long: CMakeFiles/so_long.dir/srcs/map_draw.c.o
so_long: CMakeFiles/so_long.dir/srcs/player_movement.c.o
so_long: CMakeFiles/so_long.dir/srcs/show_moves.c.o
so_long: CMakeFiles/so_long.dir/build.make
so_long: CMakeFiles/so_long.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C executable so_long"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/so_long.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/so_long.dir/build: so_long
.PHONY : CMakeFiles/so_long.dir/build

CMakeFiles/so_long.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/so_long.dir/cmake_clean.cmake
.PHONY : CMakeFiles/so_long.dir/clean

CMakeFiles/so_long.dir/depend:
	cd /home/bpouchep/CLionProjects/so_long42/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bpouchep/CLionProjects/so_long42 /home/bpouchep/CLionProjects/so_long42 /home/bpouchep/CLionProjects/so_long42/cmake-build-debug /home/bpouchep/CLionProjects/so_long42/cmake-build-debug /home/bpouchep/CLionProjects/so_long42/cmake-build-debug/CMakeFiles/so_long.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/so_long.dir/depend

