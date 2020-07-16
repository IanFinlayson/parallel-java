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

std::string threadname(){
	name = "parallelJavaT" + std::to_string(counter);
	return name;
}

void expandParallel (Node *root){
	for (int i = 0; i < root -> get_num_children(); i++){
		if((root -> get_child(i)).get_type() == ptParallelBlock){
			std::vector<Node*> *children = ((root -> get_child(i)).get_children());
			Node *next = &((children -> at(0)) -> remove_child(1));
			Node *working = (children -> at(0));
			Node *original = (children -> at(1));
			root -> remove_child(1);
			while ((working -> get_type()) != ptEmpty){
				std::cout << "--" << std::endl;
				//anonclassnode 
				Node *initiContainer = new Node(ptInitializationContainer, 0, 0, "");
				
				//initcontainer left child
				Node *initistatement = new Node(ptInitializationStatement, 0, 0, "");
				
				//initstatement left child
				std::string anonclass = anonclassname();
				Node *declarator = new Node(ptDeclaration, 0, 0, anonclass);
			
				//initstatement right child
				Node *thread = new Node(ptInitializationStatement, 0, 0, "");

				//thread left child
				std::string threadn = threadname();
				Node *threaddec = new Node (ptDeclaration, 0, 0, threadn);
				
				//threaddec leftchild
				Node *threadDatatype = new Node (ptDataType, 0, 0, "Thread");
				threaddec -> attach_child(*threadDatatype);

				//threaddec right child
				Node *tInitializer = new Node (ptInstanceInitializer, 0, 0, "Thread");
				
				//tInitializer left child
				Node *tArgument = new Node (ptArgument, 0, 0, anonclass);
				tInitializer -> attach_child(*tArgument);
				threaddec -> attach_child(*tInitializer);
				thread -> attach_child(*threaddec);
			
				//thread right child
				Node *start = new Node(ptInstanceMethodCall, 0, 0, "");
				start -> attach_child(*(new Node(ptIdentifier, 0, 0, threadn)));
				Node *methodcall = new Node(ptMethodCall, 0, 0, "");
				methodcall -> attach_child(*(new Node(ptIdentifier, 0, 0, "start")));
				start -> attach_child(*methodcall);
				thread -> attach_child(*start);

				//declarator left child
				Node *datatype = new Node(ptDataType, 0, 0, "Runnable");
				declarator -> attach_child(*datatype);

				//declarator right child
				Node *initializer = new Node(ptAnonymousClass, 0, 0, "Runnable");
				
				//initializer left child
				Node *argument = new Node(ptArgument, 0,0, "");
				initializer -> attach_child(*argument);
				
				//initializer right child
				Node *classbody = new Node(ptClassBody, 0, 0, "");
				
				//classbody left child
				Node *method = new Node(ptMethod, 0, 0, "");
				
				//method left child
				Node *methodlabel1 = new Node(ptMethodLabel, 0, 0, "");
				
				//methodlabel left child
				methodlabel1 -> attach_child(*(new Node(ptMod, 0, 0, "public")));
				
				//methodlabel right child
				methodlabel1 -> attach_child(*(new Node(ptDataType, 0, 0, "void")));
				method -> attach_child (*methodlabel1);
				method -> attach_child(*working);
				
				classbody -> attach_child(*method);

				initializer -> attach_child(*classbody);
				
				declarator -> attach_child(*initializer);
				initistatement -> attach_child(*declarator);
				initistatement -> attach_child(*thread);
				initiContainer -> attach_child(*initistatement);			
				
				
				root -> attach_child(*initiContainer);	
				root = initiContainer;	
				working = next;
				next = &(working -> remove_child(1));

			}

				//join statement
				Node *trycatch = new Node (ptTryCatch, 0, 0, "");
				root -> attach_child(*trycatch);
				//trycatch left child
				Node *tryblock = new Node(ptTry, 0, 0, "");
				trycatch -> attach_child(*tryblock);
				//try leftchild
				root = tryblock;

				int numstates = 0;
				while (numstates < counter){
					++numstates;
					Node *joinstate = new Node(ptInstanceMethodCall, 0, 0, "");
					Node *iden = new Node(ptIdentifier, 0, 0, "parallelJavaT" + std::to_string(numstates));
					Node *joinmethodcall = new Node (ptMethodCall, 0, 0, "");
					joinmethodcall -> attach_child(*(new Node(ptIdentifier, 0, 0, "join")));
					iden -> attach_child(*joinmethodcall);
					joinstate -> attach_child(*iden);
					root -> attach_child(*joinstate);			
					root = joinstate;
				}	
				
				root = tryblock;

				//tryblock right child
				Node *catchb = new Node(ptCatch, 0, 0, "");
				root -> attach_child(*catchb);
				//catch left child
				Node *exception = new Node(ptException, 0, 0, "");
				//exception left child
				exception -> attach_child(*(new Node(ptIdentifier, 0, 0, "InterruptedException ie")));
				catchb -> attach_child(*exception);

				//catchb right child
				Node *stacktrace = new Node(ptInstanceMethodCall, 0, 0, "");
				Node *stacktraceid = new Node (ptIdentifier, 0, 0, "ie");
				Node *tracemethodcall = new Node(ptMethodCall, 0, 0, "");
				tracemethodcall -> attach_child(*(new Node(ptIdentifier, 0, 0, "printStackTrace")));
				stacktraceid -> attach_child(*tracemethodcall);
				stacktrace -> attach_child(*stacktraceid);
				catchb -> attach_child(*stacktrace);


				//right child of trycatch block
				root = trycatch;
				root -> attach_child(*original);				
									
	
		}
		else{
			expandParallel(&(root -> get_child(i)));
		}
	}


}
