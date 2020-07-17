#include <iostream>
#include "expandParallel.hpp"
#include "nodeTypes.h"
#include <string>


int counter = 0;
int counter2 = 0;
std::vector<std::string> threadNames;
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
				/*Runnable anonymous class */

				Node *statement = new Node(ptStatement, 0, 0, "");
				//statement left child
				Node *anonClassContainer = new Node(ptInitializationContainer, 0, 0, "");
				statement -> attach_child(*anonClassContainer);
				
				//anonClassContainer left child
				Node *anonClassInitiStatement = new Node (ptInitializationStatement, 0, 0, "");
				anonClassContainer -> attach_child(*anonClassInitiStatement);

				//anonClassInitiStatement left child
				std::string anonclass = anonclassname();
				Node *anonClassDec = new Node (ptDeclaration, 0, 0, anonclass);
				Node *datatype = new Node (ptDataType, 0, 0, "Runnable");
				anonClassDec -> attach_child(*datatype);
				anonClassInitiStatement -> attach_child(*anonClassDec);

				//anonClassInitiStatement right child
				Node *anonClassIniti = new Node (ptAnonymousClass, 0, 0, "Runnable");
				anonClassInitiStatement -> attach_child(*anonClassIniti);

				//anonClassIniti left child
				Node *empty = new Node(ptEmpty, 0, 0, "");
				anonClassIniti -> attach_child(*empty);

				//anonClassIniti right child
				Node *anonClassBody = new Node(ptClassBody, 0, 0, "");
				anonClassIniti -> attach_child(*anonClassBody);

				//anonClassBody left child
				Node *runMethod = new Node(ptMethod, 0, 0, "run");
				anonClassBody -> attach_child(*runMethod);

				//runMethod left child
				Node *methodInfo1 = new Node(ptMethodLabel, 0, 0, "");
				runMethod -> attach_child(*methodInfo1);

				//methodInfo1 left child 
				Node *methodInfo2 = new Node(ptMethodLabel, 0, 0, "");
				methodInfo1 -> attach_child(*methodInfo2);

				//methodInfo2 left child
				Node *methodInfo3 = new Node(ptMethodLabel, 0, 0, "");
				methodInfo2 -> attach_child(*methodInfo3);

				//methodinfo3 left child
				Node *methodMod = new Node(ptMod, 0, 0, "public");
				methodInfo3 -> attach_child(*methodMod);

				//methodMod empty nodes
				Node *empty1 = new Node(ptEmpty, 0, 0, "");
				methodMod -> attach_child(*empty1);
				empty1 -> attach_child(*(new Node(ptEmpty, 0, 0, "")));

				//methodInfo3 right child
				Node *methodReturnType = new Node(ptDataType, 0, 0, "void");
				methodInfo3 -> attach_child(*methodReturnType);

				//methodInfo2 right child
				Node *formalParams = new Node(ptEmpty, 0, 0, "");
				methodInfo2 -> attach_child(*formalParams);
				
				//methodInfo1 right child
				Node *throws = new Node(ptEmpty, 0, 0, "");
				methodInfo1 -> attach_child(*throws);

				//runMethod right child
				runMethod -> attach_child(*working);
				working -> attach_child(*(new Node(ptEmpty, 0, 0, "")));

				//anonclass right child
				Node *placeholder = new Node(ptClassBody, 0, 0, "");
				placeholder -> attach_child(*(new Node(ptEmpty, 0, 0, "")));
				anonClassBody -> attach_child(*placeholder);


				/*Thread Statement Declaration*/
				//statement right child
				Node *threadStatement = new Node(ptStatement, 0, 0, "");
				statement -> attach_child(*threadStatement);
				
				//threadStatement left child
				Node *threadContainer = new Node(ptInitializationContainer, 0, 0, "");
				threadStatement -> attach_child(*threadContainer);

				//threadContainer left child
				Node *threadInitiStatement = new Node(ptInitializationStatement, 0, 0, "");
				threadContainer -> attach_child(*threadInitiStatement);

				//threadInitiStatement left child
				std::string threadN = threadname();
				threadNames.push_back(threadN);
				Node *threadDec = new Node(ptDeclaration, 0, 0, threadN);
				Node *threadDT = new Node(ptDataType, 0, 0, "Thread");
				threadDec -> attach_child(*threadDT);
				threadInitiStatement -> attach_child(*threadDec);

				//threadInitiStatement rightchild
				Node *threadInitializer = new Node(ptInstanceInitializer,0, 0, "");
				threadInitiStatement -> attach_child(*threadInitializer);

				//threadInitializer left child
				Node *threadDT2 = new Node (ptIdentifier, 0, 0, "Thread");
				threadInitializer -> attach_child(*threadDT2);

				//threadInitializer right child
				Node *threadArgument = new Node (ptArgument, 0, 0, "");
				threadArgument -> attach_child(*(new Node(ptIdentifier, 0, 0 , anonclass)));
				threadInitializer -> attach_child(*threadArgument);

				/*call to start the thread*/
				//threadStatement right child
				Node *methodCallStatement = new Node(ptStatement, 0, 0, "");
				threadStatement -> attach_child(*methodCallStatement);


				//methodCallStatement left child
				Node *startMethodCall = new Node(ptInstanceMethodCall, 0, 0, "");
				methodCallStatement -> attach_child(*startMethodCall);
				
				//startMethodCall left child
				Node *methodCallIden = new Node (ptIdentifier, 0, 0, threadN);
				startMethodCall -> attach_child(*methodCallIden);

				//startMethodCall right child
				Node *methodCall = new Node (ptMethodCall, 0, 0, "");
				Node *start = new Node (ptIdentifier, 0, 0, "start");
				methodCall -> attach_child(*start);
				start -> attach_child(*(new Node(ptEmpty, 0, 0, "")));
				startMethodCall -> attach_child(*methodCall);

				root -> attach_child(*statement);
				
				//set root to methodCallStatement so that next anonymous class can be attached
				root = methodCallStatement;
				working = next;
				next = &(working -> remove_child(1));

			}

			/*Try Catch Block */
			//Last start statement right child
			Node *tryCatchStatement = new Node(ptStatement, 0, 0, "");
			root -> attach_child(*tryCatchStatement);

			//tryCatchStatement left child
			Node *tryCatchBlock = new Node(ptTryCatch, 0, 0, "");
			tryCatchStatement -> attach_child(*tryCatchBlock);

			//tryCatchBlock left child
			Node *tryBlock = new Node(ptTry, 0, 0, "");
			tryCatchBlock -> attach_child(*tryBlock);

			//tryBlock left children
			root = tryBlock;
			
			/*join statements*/

			while(counter2 < counter){
				Node *joinStatement = new Node(ptStatement, 0, 0, "");
				//joinStatement left child
				Node *joinInstanceMethodCall = new Node(ptInstanceMethodCall, 0, 0, "");
				joinStatement -> attach_child(*joinInstanceMethodCall);

				//joinMethodCall left child
				Node *joinThreadName = new Node(ptIdentifier, 0, 0, threadNames.at(counter2));
				joinInstanceMethodCall -> attach_child(*joinThreadName);
				//joinInstanceMethodCall right child
				Node *joinMethodCall = new Node(ptMethodCall, 0, 0, "");
				joinInstanceMethodCall -> attach_child(*joinMethodCall);

				//joinMethodCall left child
				Node *join = new Node(ptIdentifier, 0, 0, "join");
				join -> attach_child(*(new Node(ptEmpty, 0, 0, "")));
				joinMethodCall -> attach_child(*join);

				root -> attach_child(*joinStatement);
				root = joinStatement;
				++counter2;
			}

			root -> attach_child(*(new Node(ptEmpty, 0, 0, "")));

			/*catch block */
			//tryBlock right child
			Node *exceptionContainer = new Node(ptExceptionContainer, 0, 0, "");
			tryBlock -> attach_child(*exceptionContainer);

			//ExceptionContainer left child
			Node *exception = new Node(ptException, 0, 0, "");
			exception -> attach_child(*(new Node(ptIdentifier, 0, 0, "InterruptedException")));
			exceptionContainer -> attach_child(*exception);

			//exceptionContainer right child
			Node *catchBlock = new Node(ptCatch, 0, 0, "");
			exceptionContainer -> attach_child(*catchBlock);

			//catchBlock left child
			Node *stackTraceStatement = new Node(ptStatement, 0, 0, "");
			catchBlock -> attach_child(*stackTraceStatement);

			//stackTraceStatement left child
			Node *stackTraceCall = new Node (ptInstanceMethodCall, 0, 0, "");
			stackTraceStatement -> attach_child(*stackTraceCall);
			//stackTraceCall left child
			stackTraceCall -> attach_child(*(new Node(ptIdentifier, 0, 0, "ie")));

			//stackTraceCall right child
			Node *stackTraceCall2 = new Node(ptMethodCall, 0, 0, "");
			stackTraceCall -> attach_child(*stackTraceCall2);

			//stackTraceCall2 left child
			Node *printStackTrace = new Node(ptIdentifier, 0, 0, "printStackTrace");
			printStackTrace -> attach_child(*(new Node(ptEmpty, 0, 0, "")));
			stackTraceCall2 -> attach_child(*printStackTrace);

			//stackTraceStatement right child
			stackTraceStatement -> attach_child(*(new Node(ptEmpty, 0, 0, "")));

			//reattaching nodes after parallel block
			root = tryCatchStatement;
			root -> attach_child(*original);

		}
			//keep searching for parallel blocks
			expandParallel(&(root -> get_child(i)));
		

	}
}
