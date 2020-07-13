#ifndef JAVADUMPER_HPP
#define JAVADUMPER_HPP

#include <string>
#include <fstream>
#include "../Node/Node.cpp"

void dump_tree(Node&, std::ofstream*, int);
void recurse(Node&, std::ofstream*, int);
void add_indent(std::ofstream*, int);

#endif
