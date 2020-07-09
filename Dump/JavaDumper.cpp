#include <string>
#include <fstream>
#include "../Node/Node.cpp"
#include "../nodeTypes.h"

void dump_tree(Node& root, std::ofstream* dump_file);
void recurse(Node& root, std::ofstream* dump_file);

void dump_tree(Node& root, std::ofstream* dump_file){
	int type = root.get_type();
	switch(type){
		case ptPackageContainer:
			{
				if(root.get_child(0).get_type() == ptPackage){
					*dump_file << "package ";
					dump_tree(root.get_child(0), dump_file);
					*dump_file << ";\n";
				}
				dump_tree(root.get_child(1), dump_file);
				break;
			}
		case ptPackage:
			{
				*dump_file << root.get_id().data();
				if(root.get_num_children() > 0){
					*dump_file << ".";
					dump_tree(root.get_child(0), dump_file);
				}
				break;
			}
		default:
			{
				*dump_file << "" << type << "\n";
				recurse(root, dump_file);
				break;
			}
	}
}

void recurse(Node& root, std::ofstream* dump_file){
	int _num_children = root.get_num_children();
	for(int _a = 0; _a < _num_children; _a++){
		dump_tree(root.get_child(_a), dump_file);
	}
}
