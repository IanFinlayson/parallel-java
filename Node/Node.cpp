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
	printf("node gone\n");
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
	return children.size();
}

Node& Node::get_child(int index){
	if(index >= 0 && index < children.size()){
		return *children.at(index);
	}
	//return null or something here lol
}

std::vector<Node*>* Node::get_children(){
	return &children;
}

//Makes a string that represents the tree rooted at this node
std::string Node::get_tree_string(int numTabs){
	std::string s_type = "[T: " + std::to_string(get_type()) + ", ";
	std::string s_value_i = "VI: " + std::to_string(get_value_int()) + ", ";
	std::string s_value_d = "VD: " + std::to_string(get_value_double()) + ", ";
	std::string s_id = "ID: " + get_id() + "]";
	std::string s = "";
	s += s_type + s_value_i + s_value_d + s_id + "\n";
	for(int i = 0; i < children.size(); i++){
		for(int j = 0; j <= numTabs; j++){
			s+= ".  ";
		}
		s += std::to_string(i+1) + get_child(i).get_tree_string(numTabs+1);
	}
	return s;
}

//Prints tree string
void Node::print(){
	printf("%s\n", this->get_tree_string(0).data());
}

//Children management
void Node::attach_child(Node& child){
	children.push_back(&child);
}

Node& Node::remove_child(int index){
	if(index >= 0 && index < this->get_num_children()){
		Node& _n = this->get_child(index);
		children.erase(children.begin() + index);
		return _n;
	}
}

void Node::replace_child(int index, Node& node){
	if(index >= 0 && index < this->get_num_children()){
		children.insert(children.begin() + index, &node);
		this->remove_child(index + 1);
	}
}

/*/ left over main from testing
int main(){
	Node n1 = Node(3, 3, 54.2, "cool dude");
	Node n2 = Node(4, 5, 34.3, "not cool dude");
	Node n3 = Node(1, 6, 84.5, "very cool dude");
	Node n4 = Node(7, 1, 48.2, "so cool dude");
	n1.attach_child(n2);
	n1.attach_child(n3);
	//n2.attach_child(n4);
	printf("%s\n", n1.get_tree_string(0).data());
	n1.replace_child(0, n4);
	n1.print();
	//printf("%d\n", n.get_type());
	//printf("%f\n", n.get_value());
	//printf("%s\n", n.get_id().data());
	//printf("%d\n", n.get_num_children());
	//printf("%p\n", &n);
	return 0;
}
*/
