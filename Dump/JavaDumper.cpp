#include <string>
#include <fstream>
#include "../Node/Node.cpp"
#include "../nodeTypes.h"

void dump_tree(Node& root, std::ofstream* dump_file, int indent);
void recurse(Node& root, std::ofstream* dump_file, int indent);
void add_indent(std::ofstream* dump_file, int indent);

void dump_tree(Node& root, std::ofstream* dump_file, int indent){
	int type = root.get_type();
	switch(type){
		case ptPackageContainer:
			{
				if(root.get_child(0).get_type() == ptPackage){
					*dump_file << "package ";
					dump_tree(root.get_child(0), dump_file, indent);
					*dump_file << ";\n";
				}
				dump_tree(root.get_child(1), dump_file, indent);
				break;
			}
		case ptPackage:
			{
				*dump_file << root.get_id().data();
				if(root.get_num_children() > 0){
					*dump_file << ".";
					dump_tree(root.get_child(0), dump_file, indent);
				}
				break;
			}
		case ptImport:
			{
				*dump_file << "import ";
				dump_tree(root.get_child(0), dump_file, indent);
				if(root.get_num_children() > 1){
					*dump_file << ".*";
				}
				*dump_file << ";\n";
				break;
			}
		case ptClass:
			{
				add_indent(dump_file, indent);
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "class " << root.get_id().data() << " ";
				if(root.get_child(0).get_num_children() > 1){
					dump_tree(root.get_child(0).get_child(1), dump_file, indent);
				}
				*dump_file << "{\n";
				dump_tree(root.get_child(1), dump_file, indent + 1);
				add_indent(dump_file, indent);
				*dump_file << "}\n";
				break;
			}
		case ptMod:
			{
				*dump_file << root.get_id().data() << " ";
				dump_tree(root.get_child(0), dump_file, indent);
				break;
			}
		case ptExtends:
			{
				*dump_file << "extends " << root.get_id().data() << " ";
				if(root.get_num_children() > 0){
					dump_tree(root.get_child(0), dump_file, indent);
				}
				break;
			}
		case ptImplements:
			{
				*dump_file << "implements ";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << " ";
				break;
			}
		case ptBasicIdentifier:
			{
				*dump_file << root.get_id().data();
				if(root.get_num_children() > 0){
					*dump_file << ", ";
					dump_tree(root.get_child(0), dump_file, indent);
				}
				break;
			}
		case ptEmpty:
			{
				break;
			}
		default:
			{
				//*dump_file << "" << type << "\n";
				recurse(root, dump_file, indent);
				break;
			}
	}
}

void recurse(Node& root, std::ofstream* dump_file, int indent){
	int _num_children = root.get_num_children();
	for(int _a = 0; _a < _num_children; _a++){
		dump_tree(root.get_child(_a), dump_file, indent);
	}
}

void add_indent(std::ofstream* dump_file, int indent){
	for(int _a = 0; _a < indent; _a++){
		*dump_file << "    ";
	}
}
