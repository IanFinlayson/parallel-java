#include <string>

#define MAX_CHILDREN 3

class Node{
	private:
		int type;
		double value;
		std::string id;
		
		int numChildren = 0;
		Node* children[MAX_CHILDREN];
	public:
		Node(int);
		Node(int, double);
		Node(int, double, std::string);
		~Node();

		int getType();
		double getValue();
		std::string getId();
		int getNumChildren();
		//Node& getChild(int);

		void attachChild(Node&);

};


//Constructors
Node::Node(int type){
	this->type = type;
}

Node::Node(int type, double value){
	this->type = type;
	this->value = value;
}

Node::Node(int type, double value, std::string id){
	this->type = type;
	this->value = value;
	this->id = id;
}

//Destructor
Node::~Node(){
	printf("node gone\n");
}

//Getters
int Node::getType(){
	return type;
}

double Node::getValue(){
	return value;
}

std::string Node::getId(){
	return id;
}

int Node::getNumChildren(){
	return numChildren;
}

//Children management
void Node::attachChild(Node& child){
	if(numChildren >= 3) return;
	children[numChildren] = &child;
	numChildren++;
}

int main(){
	Node n = Node(3, 54.2, "cool dude");
	Node n2 = Node(4, 34.3, "not cool dude");
	n.attachChild(n2);
	//printf("%d\n", n.getType());
	//printf("%f\n", n.getValue());
	//printf("%s\n", n.getId().data());
	//printf("%d\n", n.getNumChildren());
	//printf("%p\n", &n);
	return 0;
}
