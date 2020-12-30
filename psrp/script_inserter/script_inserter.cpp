/*
Phantasy Star: Script Inserter
*/

#include <cstdio>
#include <exception>
#include <stdexcept>
#include <vector>
#include "ScriptItem.h"

#ifdef _WIN32
#include <Windows.h>
#endif

extern void Convert_Symbols(const std::string& scriptFilename, const std::string& language, const std::string& tableFilename, std::vector<ScriptItem>& script);
extern void Huffman_Compress(const std::string& scriptFilename, const std::string& patchFilename, const std::string& treeFilename, const std::vector<ScriptItem>& script);


int main(int argc, const char** argv)
{
	try
	{
#ifdef WIN32
		SetConsoleOutputCP(CP_UTF8);
#endif

		// Assert proper usage
		if (argc != 7)
		{
			throw std::runtime_error("Usage: script_inserter <script file> <language> <table file> <output script file> <output script patch file> <output Huffman data file>");
		}

		// phase 1: Script conversion
		std::vector<ScriptItem> script;
		Convert_Symbols(argv[1], argv[2], argv[3], script);

		// phase 2: Huffman encoding
		Huffman_Compress(argv[4], argv[5], argv[6], script);
	}
	catch (const std::exception& e)
	{
		fprintf(stderr, "%s\n", e.what());
		return -1;
	}
	
	return 0;
}
