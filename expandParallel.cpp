#include <iostream>
#include "expandParallel.hpp"
#include "nodeTypes.h"
#include <string>


int counter = 0;
std::string name;
std::string anonclassname(){
	++counter;
	name = "parallelJavaR" + std::to_string(counter) ;
	return name;
}

void expandParallel (Node &root){
	for (int i = 0; i < root.get_num_children(); i++){
		if((root.get_child(i)).get_type() == ptParallelBlock){
			std::vector<Node*> *children = (root.get_child(i)).get_children();
			Node *next = &((children -> at(0)) -> remove_child(1));
			Node working = *(children -> at(0));
	//		while ((working.get_type()) != ptEmpty){
				//anonclassnode 
				Node *initiContainer = new Node(ptInitializationContainer);
				
				//initcontainer left child
				Node *initistatement = new Node(ptInitializationStatement);
				
				//initstatement left child
				Node *declarator = new Node(ptDeclaration, 0, 0, anonclassname());
				
				//declarator left child
				Node *datatype = new Node(ptDataType, 0, 0, "Runnable");
				declarator -> attach_child(*datatype);

				//declarator right child
				Node *initializer = new Node(ptAnonymousClass, 0, 0, "Runnable");
				
				//initializer left child
				Node *argument = new Node(ptArgument);
				initializer -> attach_child(*argument);
				
				//initializer right child
				Node *classbody = new Node(ptClassBody);
				
				//classbody left child
				Node *method = new Node(ptMethod);
				
				//method left child
				Node *methodlabel1 = new Node(ptMethodLabel);
				
				//methodlabel left child
				methodlabel1 -> attach_child(*(new Node(ptMod, 0, 0, "public")));
				
				//methodlabel right child
				methodlabel1 -> attach_child(*(new Node(ptDataType, 0, 0, "void")));
				method -> attach_child (*methodlabel1);
				method -> attach_child(working);
				
				classbody -> attach_child(*method);

				initializer -> attach_child(*classbody);
				
				initistatement -> attach_child(*declarator);
				initistatement -> attach_child(*initializer);
				initiContainer -> attach_child(*initistatement);			
				
/*
				root.replace_child(1, *initiContainer);	
			

				root = root.get_child(1);
*/			
				working = *next;
				next = &(working.remove_child(1));
	//		}
	
		}else{
			expandParallel(root.get_child(i));
		}
	}


}
