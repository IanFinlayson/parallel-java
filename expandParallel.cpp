#include <iostream>
#include "expandParallel.hpp"
#include "nodeTypes.h"

void expandParallel (Node &root){
	for (int i = 0; i < root.get_num_children(); i++){
		if((root.get_child(i)).get_type() == ptParallelBlock){
			std::vector<Node*> *children = (root.get_child(i)).get_children();
			Node *next =(children -> at(0)) -> remove_child(1);
			Node *working = children -> at(0);
			while (working.get_type() != ptEmpty){
				std::cout << "---" << std::endl;
				working -> print();
				working = next;
				next = working -> remove_child(1);
			}
		}else{
			expandParallel(root.get_child(i));
		}
	}

}
