#include <string>
#include <fstream>
#include "../Node/Node.cpp"

void dump_tree(Node& root, std::ofstream* dump_file, int indent);
void recurse(Node& root, std::ofstream* dump_file, int indent);
void add_indent(std::ofstream* dump_file, int indent);

