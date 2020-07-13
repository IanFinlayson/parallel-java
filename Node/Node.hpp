#ifndef NODE_HPP
#define NODE_HPP

#include <string>
#include <vector>

class Node{
	private:
		int type;				//token val
		int value_int;			//an integer value... for integers...
		double value_double;	//a uh double value
		std::string id;			//string representing an identifier or characters or strings
		
		std::vector<Node*> children;	//vector holding immediate children

	public:
		Node(int);								//constructor for those tokens that are just a token
		Node(int, int, double, std::string);	//constructor for any other token
		~Node();								//destructor

		int get_type();						//returns type
		int get_value_int();				//returns value_int
		double get_value_double();			//returns value_double
		std::string get_id();				//returns id
		int get_num_children();				//returns current number of children
		Node& get_child(int);				//returns a reference to the left, middle, or right (0, 1, or 2) child
		std::vector<Node*>* get_children();	//returns a pointer to the children vector
		std::string get_tree_string(int);	//returns a string the represents the entire tree rooted at this node
												//always input 0
												//format:
												//[T: type, VI: value_int, VD: value_double, ID: id]
												//.  1[left child information]
												//.  .  1[left child information]
												//.  2[middle child information]
		void print();						//prints the string created from get_tree_string()

		void attach_child(Node&);			//attach a new child (from left to right)
		Node& remove_child(int);			//remove a child and return a reference to it.
											//If it is the left child that is removed then the right child
											//becomes the left child
		void replace_child(int, Node&);		//replace a child with a new node if that child exists.

};


#endif
