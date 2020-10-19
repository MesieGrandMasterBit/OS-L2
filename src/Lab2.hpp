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
#include <sys/types.h>
#include <sys/stat.h>

using namespace std;

// Основа
void showMenu();
void printArguments();
void printReadme();
void CreateFile();

// Копирование файла
void copyFile(string path, string fileName);

// Перемещение файла
void moveFile(string path, string fileName);

// Удаление файлов
void deleteFile(string fileName);
void DeleteFile(string path, string fileName);

// Процессы
int IsNumeric(const char* ccharptr_CharacterList);
int displayProc();

// Показать все файлы
void displayAllFiles(const char *dirName);

// Размер файла и директории
int getFileSize(const char *fileName);
int getDirSize(const char *dirName);

#endif
