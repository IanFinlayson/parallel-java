#include <string>


class Node{
	private:
		int type;
		double value;
		std::string id;
	public:
		Node(int, double, std::string);
		~Node();
};

Node::Node(int type, double value, std::string id){
	this->type = type;
	this->value = value;
	this->id = id;
}

Node::~Node(){
	printf("node gone\n");
}

int main(){
	Node n = Node(3, 5.4, "what");
	
	return 0;
}
