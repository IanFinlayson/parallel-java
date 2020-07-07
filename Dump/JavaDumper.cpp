#include <string>
#include <fstream>
#include "../Node/Node.cpp"
#include "../nodeTypes.h"

void dump_tree(Node& root, char* filename){
	int type = root.get_type();
	switch(type){
		
		default:
			int _num_children = root.get_num_children();
			for(int _a = 0; _a < _num_children; _a++){
				dump_tree(root.get_child(_a), filename);
			}
			break;
	}
}
