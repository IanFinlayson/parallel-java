#include <iostream>
#include "expandParallel.hpp"
#include "nodeTypes.h"
#include <string>


int threadNameCounter = 0;
int threadNameCounter2 = 0;

std::vector<std::string> thread_Names;
std::string name_Var;

std::string anon_Class_Name(){
	++threadNameCounter;
	name_Var = "parallelJavaR" + std::to_string(threadNameCounter) ;
	return name_Var;
}

std::string thread_Name(){
	name_Var = "parallelJavaT" + std::to_string(threadNameCounter);
	return name_Var;
}

void expandParallel (Node *root){
	//search the children nodes of the root of the tree
	for (int i = 0; i < root -> get_num_children(); i++){
		
		//check to see if that child's type indicates that it is a parallel block
		if((root -> get_child(i)).get_type() == ptParallelBlock){
			//store the children of the parallel block 
			std::vector<Node*> *rootChildren = ((root -> get_child(i)).get_children());

			//the second statement to be done in parallel will be the right child of the first statement
			Node *next = &((rootChildren -> at(0)) -> remove_child(1));
			
			//Because of the structure of the tree, the first statement to be done in parallel should be the parallel blocks left child
			Node *working = (rootChildren -> at(0));
			
			//the code after the parallel block to reattach to the tree later. Should always be the parallel blocks right child
			Node *afterParallel = (rootChildren -> at(1));
			
			//remove the parallel block node from the tree
			root -> remove_child(1);

			while ((working -> get_type()) != ptEmpty){
				std::cout << "--" << std::endl;
				/*Runnable anonymous class */
				Node *anonClassStatement = new Node(ptStatement, 0, 0, "");
				
				//anonClassStatement left child, container for the anonymous class
				Node *anonClassContainer = new Node(ptInitializationContainer, 0, 0, "");
				anonClassStatement -> attach_child(*anonClassContainer);
				
				//anonClassContainer left child, Runnable anonymous class
				Node *anonClassInitiStatement = new Node (ptInitializationStatement, 0, 0, "");
				anonClassContainer -> attach_child(*anonClassInitiStatement);

				//anonClassInitiStatement left child, declaration portion of the anonymous class
				//Runnable parallelJavaR...
				std::string anonclass = anon_Class_Name();
				
				Node *anonClassDeclarator = new Node (ptDeclaration, 0, 0, anonclass);
				Node *datatype = new Node (ptDataType, 0, 0, "Runnable");
				anonClassDeclarator -> attach_child(*datatype);
				anonClassInitiStatement -> attach_child(*anonClassDeclarator);

				//anonClassInitiStatement right child, initializer of the anonymous class
				// = new Runnable() 
				Node *anonClassInitializer = new Node (ptAnonymousClass, 0, 0, "Runnable");
				anonClassInitiStatement -> attach_child(*anonClassInitializer);

				//anonClassInitializer left child
				Node *empty = new Node(ptEmpty, 0, 0, "");
				anonClassInitializer -> attach_child(*empty);

				//anonClassInitializer right child, body of the anonymous class
				Node *anonClassBody = new Node(ptClassBody, 0, 0, "");
				anonClassInitializer -> attach_child(*anonClassBody);

				//anonClassBody left child, run method
				Node *runMethod = new Node(ptMethod, 0, 0, "run");
				anonClassBody -> attach_child(*runMethod);

				//runMethod left child
				Node *methodHeader1 = new Node(ptMethodLabel, 0, 0, "");
				runMethod -> attach_child(*methodHeader1);

				//methodHeader1 left child 
				Node *methodHeader2 = new Node(ptMethodLabel, 0, 0, "");
				methodHeader1 -> attach_child(*methodHeader2);

				//methodHeader2 left child
				Node *methodHeader3 = new Node(ptMethodLabel, 0, 0, "");
				methodHeader2 -> attach_child(*methodHeader3);

				//methodinfo3 left child, modifier of run method
				Node *methodModifier = new Node(ptMod, 0, 0, "public");
				methodHeader3 -> attach_child(*methodModifier);

				//methodModifier empty nodes
				Node *empty1 = new Node(ptEmpty, 0, 0, "");
				methodModifier -> attach_child(*empty1);
				empty1 -> attach_child(*(new Node(ptEmpty, 0, 0, "")));

				//methodHeader3 right child, datatype of run method
				Node *methodReturnType = new Node(ptDataType, 0, 0, "void");
				methodHeader3 -> attach_child(*methodReturnType);

				//methodHeader2 right child, empty formal parameters
				Node *formalParams = new Node(ptEmpty, 0, 0, "");
				methodHeader2 -> attach_child(*formalParams);
				
				//methodHeader1 right child
				Node *throws = new Node(ptEmpty, 0, 0, "");
				methodHeader1 -> attach_child(*throws);

				//runMethod right child, the statements that should be placed within the run method
				runMethod -> attach_child(*working);
				working -> attach_child(*(new Node(ptEmpty, 0, 0, "")));

				//anonclass right child
				Node *placeholder = new Node(ptClassBody, 0, 0, "");
				placeholder -> attach_child(*(new Node(ptEmpty, 0, 0, "")));
				anonClassBody -> attach_child(*placeholder);


				/*Thread Statement Declaration*/
				//anonClassStatement right child
				Node *threadStatement = new Node(ptStatement, 0, 0, "");
				anonClassStatement -> attach_child(*threadStatement);
				
				//threadStatement left child,thread initialization statement container
				Node *threadContainer = new Node(ptInitializationContainer, 0, 0, "");
				threadStatement -> attach_child(*threadContainer);

				//threadContainer left child, thread initialization statement itself
				Node *threadInitializationStatement = new Node(ptInitializationStatement, 0, 0, "");
				threadContainer -> attach_child(*threadInitializationStatement);

				//threadInitializationStatement left child, Thread statement declarator
				//Thread parallelJavaT...
				std::string thread = thread_Name();
				thread_Names.push_back(thread);

				Node *threadDeclarator = new Node(ptDeclaration, 0, 0, thread);
				Node *threadDataType = new Node(ptDataType, 0, 0, "Thread");
				threadDeclarator -> attach_child(*threadDataType);
				threadInitializationStatement -> attach_child(*threadDeclarator);

				//threadInitializationStatement rightchild, Thread statement initializer
				Node *threadInitializer = new Node(ptInstanceInitializer,0, 0, "");
				threadInitializationStatement -> attach_child(*threadInitializer);

				//threadInitializer left child, Thread datatype
				// = new Thread
				Node *threadDataType2 = new Node (100, 0, 0, "Thread");
				threadInitializer -> attach_child(*threadDataType2);

				//threadInitializer right child, argument to be passed into the thread
				// = new Thread(parallelJavaR...)
				Node *threadArgument = new Node (ptArgument, 0, 0, "");
				threadArgument -> attach_child(*(new Node(100, 0, 0 , anonclass)));
				threadInitializer -> attach_child(*threadArgument);

				/*call to start the thread*/
				//threadStatement right child, method call to start the thread
				Node *methodCallStatement = new Node(ptStatement, 0, 0, "");
				threadStatement -> attach_child(*methodCallStatement);

				//methodCallStatement left child, instance part of the method call
				Node *threadMethodCall = new Node(ptInstanceMethodCall, 0, 0, "");
				methodCallStatement -> attach_child(*threadMethodCall);
				
				//threadMethodCall left child, instance identifier
				//parallelJavaT...
				Node *methodCallIdentifier = new Node (ptIdentifier, 0, 0, thread);
				threadMethodCall -> attach_child(*methodCallIdentifier);

				//threadMethodCall right child, method call
				//parallelJavaT...start()
				Node *methodCall = new Node (ptMethodCall, 0, 0, "");
				Node *start = new Node (ptIdentifier, 0, 0, "start");
				methodCall -> attach_child(*start);
				start -> attach_child(*(new Node(ptEmpty, 0, 0, "")));
				threadMethodCall -> attach_child(*methodCall);

				//attach the anonymous class, thread, and call to start the thread to the root node
				root -> attach_child(*anonClassStatement);
				
				//set root to methodCallStatement so that next anonymous class can be attached to that statement
				root = methodCallStatement;
				
				//the next statement to be done in parallel
				working = next;
				next = &(working -> remove_child(1));

			}

			/*Try Catch Block */
			//Last start statement right child
			Node *tryCatchStatement = new Node(ptStatement, 0, 0, "");
			root -> attach_child(*tryCatchStatement);

			//tryCatchStatement left child, try catch block
			Node *tryCatchBlock = new Node(ptTryCatch, 0, 0, "");
			tryCatchStatement -> attach_child(*tryCatchBlock);

			//tryCatchBlock left child, try part of try catch block
			Node *tryBlock = new Node(ptTry, 0, 0, "");
			tryCatchBlock -> attach_child(*tryBlock);

			//tryBlock left children

			//set root to tryblock so that it's possible for the statements inside of the try block to always be the right child
			root = tryBlock;
			
			/*join statements*/

			while(threadNameCounter2 < threadNameCounter){
				Node *joinStatement = new Node(ptStatement, 0, 0, "");
				
				//joinStatement left child, join instance method call
				Node *joinInstanceMethodCall = new Node(ptInstanceMethodCall, 0, 0, "");
				joinStatement -> attach_child(*joinInstanceMethodCall);

				//joinMethodCall left child, the name of the thread to join
				//parallelJavaT1...
				Node *joinThreadName = new Node(ptIdentifier, 0, 0, thread_Names.at(threadNameCounter2));
				joinInstanceMethodCall -> attach_child(*joinThreadName);

				//joinInstanceMethodCall right child, the method call portion of the join instance method call
				Node *joinMethodCall = new Node(ptMethodCall, 0, 0, "");
				joinInstanceMethodCall -> attach_child(*joinMethodCall);

				//joinMethodCall left child, name of the method call
				//parallelJavaT1.join
				Node *join = new Node(ptIdentifier, 0, 0, "join");
				join -> attach_child(*(new Node(ptEmpty, 0, 0, "")));
				joinMethodCall -> attach_child(*join);

				root -> attach_child(*joinStatement);
				
				//allows the next join statement to be attached to the previous
				root = joinStatement;
				++threadNameCounter2;
			}

			root -> attach_child(*(new Node(ptEmpty, 0, 0, "")));

			/*catch block */
			//tryBlock right child, container for the exception
			Node *exceptionContainer = new Node(ptExceptionContainer, 0, 0, "ie");
			tryBlock -> attach_child(*exceptionContainer);

			//ExceptionContainer left child, exception type
			// new InterruptedException
			Node *exceptionType = new Node(ptException, 0, 0, "");
			exceptionType -> attach_child(*(new Node(100, 0, 0, "InterruptedException")));
			exceptionContainer -> attach_child(*exceptionType);

			//exceptionContainer right child, catch block
			Node *catchBlock = new Node(ptCatch, 0, 0, "");
			exceptionContainer -> attach_child(*catchBlock);

			//catchBlock left child
			Node *stackTraceStatement = new Node(ptStatement, 0, 0, "");
			catchBlock -> attach_child(*stackTraceStatement);

			//stackTraceStatement left child, print stack trace instance method call
			Node *stackTraceInstanceCall = new Node (ptInstanceMethodCall, 0, 0, "");
			stackTraceStatement -> attach_child(*stackTraceInstanceCall);
			
			//stackTraceInstanceCall left child, instance part of instance method call
			//ie...
			stackTraceInstanceCall -> attach_child(*(new Node(ptIdentifier, 0, 0, "ie")));

			//stackTraceInstanceCall right child, method call portion
			Node *stackTraceMethodCall = new Node(ptMethodCall, 0, 0, "");
			stackTraceInstanceCall -> attach_child(*stackTraceMethodCall);

			//stackTraceMethodCall left child, name of method call
			//ie.printStackTrace
			Node *printStackTrace = new Node(ptIdentifier, 0, 0, "printStackTrace");
			printStackTrace -> attach_child(*(new Node(ptEmpty, 0, 0, "")));
			stackTraceMethodCall -> attach_child(*printStackTrace);

			//stackTraceStatement right child
			stackTraceStatement -> attach_child(*(new Node(ptEmpty, 0, 0, "")));

			//reattaching nodes after parallel block
			root = tryCatchStatement;
			root -> attach_child(*afterParallel);

		}
			//keep searching for parallel blocks
			expandParallel(&(root -> get_child(i)));
		

	}
}
