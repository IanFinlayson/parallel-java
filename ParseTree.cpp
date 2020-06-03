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
		Node& getChild(int);
		std::string getTreeString(int);

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
	//printf("node gone\n");
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

Node& Node::getChild(int index){
	if(index >= 0 && index < numChildren){
		return *children[index];
	}
}

//Makes a string that represents the tree rooted at this node
std::string Node::getTreeString(int numTabs){
	std::string s_type = "[T: " + std::to_string(getType()) + ", ";
	std::string s_value = "V: " + std::to_string(getValue()) + ", ";
	std::string s_id = "I: " + getId() + "]";
	std::string s = "";
	s += s_type + s_value + s_id + "\n";
	for(int i = 0; i < getNumChildren(); i++){
		for(int j = 0; j <= numTabs; j++){
			s+= ".  ";
		}
		s += std::to_string(i+1) + getChild(i).getTreeString(numTabs+1);
	}
	return s;
}

//Children management
void Node::attachChild(Node& child){
	if(numChildren >= 3) return;
	children[numChildren] = &child;
	numChildren++;
}



int main(){
	Node n1 = Node(3, 54.2, "cool dude");
	Node n2 = Node(4, 34.3, "not cool dude");
	Node n3 = Node(1, 84.5, "very cool dude");
	Node n4 = Node(7, 48.2, "so cool dude");
	n1.attachChild(n2);
	n1.attachChild(n3);
	n2.attachChild(n4);
	printf("%s\n", n1.getTreeString(0).data());
	//printf("%d\n", n.getType());
	//printf("%f\n", n.getValue());
	//printf("%s\n", n.getId().data());
	//printf("%d\n", n.getNumChildren());
	//printf("%p\n", &n);
	return 0;
}
