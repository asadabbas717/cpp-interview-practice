#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class Logger { ofstream file; public: Logger(const string& path) : file(path) {} void write(const string& message) { file << message << '\n'; } ~Logger() { cout << "File closes automatically when Logger leaves scope.\n"; } };
int main() { Logger log("lesson.log"); log.write("RAII keeps cleanup tied to object lifetime."); }
