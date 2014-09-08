#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
	public:
		ifstream input_file;
		bool _eof;
		bool closed;
	private:
		//constructor
		ReadFile* createReadFile(const char* file_name);
		//destructor
		~ReadFile(ReadFile* rf);
		String* readLine(ReadFile* rf);
		bool eof(ReadFile* rf);
		void close(ReadFile* rf);

};

#endif
