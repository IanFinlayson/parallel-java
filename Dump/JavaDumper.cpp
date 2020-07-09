#include <string>
#include <fstream>
#include "../Node/Node.cpp"
#include "../nodeTypes.h"

void dump_tree(Node& root, std::ofstream* dump_file);
void recurse(Node& root, std::ofstream* dump_file);

void dump_tree(Node& root, std::ofstream* dump_file){
	int type = root.get_type();
	switch(type){
		//case ptPackageContainer:
		//	*dump_file << "uh idk if this is working\n";
		//	break;
		default:
			*dump_file << "cool dude\n";
			recurse(root, dump_file);
			break;
	}
}

void recurse(Node& root, std::ofstream* dump_file){
	int _num_children = root.get_num_children();
	for(int _a = 0; _a < _num_children; _a++){
		dump_tree(root.get_child(_a), dump_file);
	}
}
