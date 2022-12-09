# SIMPLE_SHELL AKA KOOPA

Date of Release - 12/09/22

## Table of Contents

1. Introduction
2. Project Information
    - General Requirements
    - Output
    - Allowed functions & system calls
3. Documentation
    - Installation
    - Usage
    - Files Description
4. Authors
    
## Introduction

- What is Shell?

  The shell is the layer of programming that understands and executes the commands a user enters. 
  In some systems, the shell is called a command interpreter. 
  A shell usually implies an interface with a command syntax.

- What is Kernel?

  A kernel is a type of low-level program that has its interfacing with the hardware on top of which all the 
  applications run (disks, RAM, CPU, etc.). Uses and Purpose. A shell allows all of its users to establish 
  communication with the kernel.

- What is a pid and a ppid?

  pid : The is the process ID (PID) of the process you call the Process. pid method in. 
  ppid : The PID of the parent process (the process that spawned the current one).

- What is the difference between a function & a system call?

  The main difference between system call and function call is that a system call is a request for the kernel to access a resource while a function call is a request made by a program to perform a specific task. A computer program makes a system call when it makes a request to the operating system's kernel. System call provides the services of the operating system to the user programs via Application Program Interface(API).

- How to suspend the execution of a process until one of its children terminates?

  We can suspend the execution of a process until one of its children terminates using the wait function. A call to wait() blocks the calling process until one of its child processes exits or a signal is received. After child process terminates, parent continues its execution after wait system call instruction.

- What is EOF?

End of file is a condition that terminates the program and brings the user home using (Ctrl+D)

## Project Information

Your Shell should:

   - Display a prompt and wait for the user to type a command. A command line always ends with a new line.
   - The prompt is displayed again each time a command has been executed.
   - The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
   - The command lines are made only of one word. No arguments will be passed to programs.
   - If an executable cannot be found, print an error message and display the prompt again.
   - It should be able to handle errors.
   - You have to handle the “end of file” condition (Ctrl+D)

You don’t have to:

   use the PATH
   implement built-ins
   handle special characters : ", ', `, \, *, &, #
   be able to move the cursor
   handle commands with arguments

### General requirements

   Allowed editors: vi, vim, emacs

   - All your files will be compiled on Ubuntu 20.04 LTS using gcc
   - using the options -Wall -Werror -Wextra -pedantic -std=gnu89
   - All your files should end with a new line
   - A README.md file, at the root of the folder of the project is mandatory
   - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
   - Your shell should not have any memory leaks
   - No more than 5 functions per file
   - All your header files should be include guarded

#Output
   - Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) 
   - as well as the exact same error output.
   - The only difference is when you print an error, the name of the program must be equivalent to your argv[0]

### Allowed functions & system calls

    - access (man 2 access)
    - chdir (man 2 chdir)
    - close (man 2 close)
    - closedir (man 3 closedir)
    - execve (man 2 execve)
    - exit (man 3 exit)
    - _exit (man 2 _exit)
    - fflush (man 3 fflush)
    - fork (man 2 fork)
    - free (man 3 free)
    - getcwd (man 3 getcwd)
    - getline (man 3 getline)
    - getpid (man 2 getpid)
    - isatty (man 3 isatty)
    - kill (man 2 kill)
    - malloc (man 3 malloc)
    - open (man 2 open)
    - opendir (man 3 opendir)
    - perror (man 3 perror)
    - read (man 2 read)
    - readdir (man 3 readdir)
    - signal (man 2 signal)
    - stat (__xstat) (man 2 stat)
    - lstat (__lxstat) (man 2 lstat)
    - fstat (__fxstat) (man 2 fstat)
    - strtok (man 3 strtok)
    - wait (man 2 wait)
    - waitpid (man 2 waitpid)
    - wait3 (man 2 wait3)
    - wait4 (man 2 wait4)
    - write (man 2 write)


## Instalation 

   - Use the "./hsh" Command to open our Simple Shell in built in terminal. 
   - Here you will be able to access our KOOPA interface. 

### Usage (Interactive & Non-Interactive, Built-In)

  Interactive
  
  An interactive shell takes commands as input from the user and acknowledges the output to the user.

  [./hsh]

  Non-Interactive
  
  A non-interactive shell does not interact with the user. 
  It is highly recommended to use the full path for a command in non-interactive shells.

  ["echo "/bin/ls" | ./hsh"]

  Built-In
  
  A built-in is a command or function that is part of the shell itself. 
  No external program is necessary to run the command.

## 🖋️ Authors

![Melissa Arroyo](https://github.com/MelissaAT)
![Guillermo Rosario](https://github.com/GuillermoRosario)

