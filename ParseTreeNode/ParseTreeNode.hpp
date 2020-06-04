#include <string>

#define MAX_CHILDREN 3

class Node{
	private:
		int type;
		double value;
		std::string id;
		
		int num_children = 0;
		Node* children[MAX_CHILDREN];

	public:
		Node(int);
		Node(int, double);
		Node(int, double, std::string);
		~Node();

		int get_type();
		double get_value();
		std::string get_id();
		int get_num_children();
		Node& get_child(int);
		Node* get_children();
		std::string get_tree_string(int);

		void attach_child(Node&);

};
