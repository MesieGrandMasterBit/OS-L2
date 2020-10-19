#ifndef H_FILE
#define H_FILE

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <string>
#include <sys/stat.h>
#include <cstdlib>
#include <fstream>
#include <sys/types.h> // for opendir(), readdir(), closedir()
#include <sys/stat.h> // for stat()

using namespace std;

// Help function
void showMenu();
void printArguments();
void printReadme();
void CreateFile();
void Help();

// Copy file
void copyFile(string path, string fileName);

// Move file
void moveFile(string path, string fileName);

// Delete file
void deleteFile(string fileName);
void DeleteFile(string path, string fileName);

// All process
int IsNumeric(const char* ccharptr_CharacterList);
int displayProc();

// Display all files
void displayAllFiles(const char *dirName);

// Size file or dir
int getFileSize(const char *fileName);
int getDirSize(const char *dirName);

#endif
