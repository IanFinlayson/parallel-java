#include <string>

#include "Node.hpp"


//Constructors
Node::Node(int type){
	this->type = type;
}

Node::Node(int type, int value_int, double value_double, std::string id){
	this->type = type;
	this->value_int = value_int;
	this->value_double = value_double;
	this->id = id;
}

//Destructor
Node::~Node(){
	//printf("node gone\n");
}

//Getters
int Node::get_type(){
	return type;
}

int Node::get_value_int(){
	return value_int;
}

double Node::get_value_double(){
	return value_double;
}

std::string Node::get_id(){
	return id;
}

int Node::get_num_children(){
	return num_children;
}

Node& Node::get_child(int index){
	if(index >= 0 && index < num_children){
		return *children[index];
	}
}

Node* Node::get_children(){
	return *children;
}

//Makes a string that represents the tree rooted at this node
std::string Node::get_tree_string(int numTabs){
	std::string s_type = "[T: " + std::to_string(get_type()) + ", ";
	std::string s_value_i = "VI: " + std::to_string(get_value_int()) + ", ";
	std::string s_value_d = "VD: " + std::to_string(get_value_double()) + ", ";
	std::string s_id = "ID: " + get_id() + "]";
	std::string s = "";
	s += s_type + s_value_i + s_value_d + s_id + "\n";
	for(int i = 0; i < get_num_children(); i++){
		for(int j = 0; j <= numTabs; j++){
			s+= ".  ";
		}
		s += std::to_string(i+1) + get_child(i).get_tree_string(numTabs+1);
	}
	return s;
}

//Children management
void Node::attach_child(Node& child){
	if(num_children >= 3) return;
	children[num_children] = &child;
	num_children++;
}


/* left over main from testing
int main(){
	Node n1 = Node(3, 54.2, "cool dude");
	Node n2 = Node(4, 34.3, "not cool dude");
	Node n3 = Node(1, 84.5, "very cool dude");
	Node n4 = Node(7, 48.2, "so cool dude");
	n1.attach_child(n2);
	n1.attach_child(n3);
	n2.attach_child(n4);
	printf("%s\n", n1.get_tree_string(0).data());
	//printf("%d\n", n.get_type());
	//printf("%f\n", n.get_value());
	//printf("%s\n", n.get_id().data());
	//printf("%d\n", n.get_num_children());
	//printf("%p\n", &n);
	return 0;
}
*/
