#include <string>
#include <fstream>
#include "JavaDumper.hpp"
#include "../nodeTypes.h"
//#include "../tokens.h"


void dump_tree(Node& root, std::ofstream* dump_file, int indent){
	int type = root.get_type();
	//printf("function called");
	switch(type){
		case ptPackageContainer:
			{
				if(root.get_child(0).get_type() == ptPackage){
					*dump_file << "package ";
					dump_tree(root.get_child(0), dump_file, indent);
					*dump_file << ";\n";
				}
				dump_tree(root.get_child(1), dump_file, indent);
				break;
			}
		case ptPackage:
			{
				*dump_file << root.get_id().data();
				if(root.get_num_children() > 0){
					*dump_file << ".";
					dump_tree(root.get_child(0), dump_file, indent);
				}
				break;
			}
		case ptImport:
			{
				*dump_file << "import ";
				dump_tree(root.get_child(0), dump_file, indent);
				if(root.get_num_children() > 1){
					*dump_file << ".*";
				}
				*dump_file << ";\n";
				break;
			}
		case ptClass:
			{
				add_indent(dump_file, indent);
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "class " << root.get_id().data() << " ";
				if(root.get_child(0).get_num_children() > 1){
					dump_tree(root.get_child(0).get_child(1), dump_file, indent);
				}
				*dump_file << "{\n";
				dump_tree(root.get_child(1), dump_file, indent + 1);
				add_indent(dump_file, indent);
				*dump_file << "}\n";
				break;
			}
		case ptInterface:
			{
				add_indent(dump_file, indent);
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "interface " << root.get_id().data() << " ";
				if(root.get_child(0).get_num_children() > 1){
					dump_tree(root.get_child(0).get_child(1), dump_file, indent);
				}
				*dump_file << "{\n";
				dump_tree(root.get_child(1), dump_file, indent + 1);
				add_indent(dump_file, indent);
				*dump_file << "}\n";
				break;
			}
		case ptMod:
			{
				*dump_file << root.get_id().data() << " ";
				dump_tree(root.get_child(0), dump_file, indent);
				break;
			}
		case ptExtends:
			{
				*dump_file << "extends " << root.get_id().data() << " ";
				if(root.get_num_children() > 0){
					dump_tree(root.get_child(0), dump_file, indent);
				}
				break;
			}
		case ptImplements:
			{
				*dump_file << "implements ";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << " ";
				break;
			}
		case ptBasicIdentifier:
			{
				*dump_file << root.get_id().data();
				if(root.get_num_children() > 0){
					*dump_file << ", ";
					dump_tree(root.get_child(0), dump_file, indent);
				}
				break;
			}
		case ptClassBody:
			{
				//this whole bit has to be cleaned up in the grammar
				//the declarations are weird and not good and also weird
				//it works for now though so I'm not touching it
				add_indent(dump_file, indent);
				switch(root.get_child(0).get_type()){
					case ptDeclarationStatement:
						{
							//if(root.get_child(0).get_child(1).get_type() != ptEmpty){
								dump_tree(root.get_child(0).get_child(1), dump_file, indent);
								//*dump_file << " ";
							//}
							dump_tree(root.get_child(0), dump_file, indent);
							*dump_file << ";\n";
							dump_tree(root.get_child(1), dump_file, indent);
							break;

						}
					case ptInitializationContainer:
						{
							dump_tree(root.get_child(0).get_child(1), dump_file, indent);
							dump_tree(root.get_child(0).get_child(0), dump_file, indent);
							*dump_file << ";\n";
							dump_tree(root.get_child(1), dump_file, indent);
							break;
						}
					default:
						{
							//recurse(root, dump_file, indent);
							if(root.get_num_children() > 0){
								dump_tree(root.get_child(0), dump_file, indent);
								*dump_file << "\n";
							}
							if(root.get_num_children() > 1){
								dump_tree(root.get_child(1), dump_file, indent);
							}
							break;
						}
				}
				break;
			}
		case ptInstanceGeneric:
			{
				*dump_file << root.get_id().data() << "<";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "> ";
				break;
			}
		case ptDataType:
			{
				*dump_file << root.get_id().data() << " ";
				break;
			}
		case ptIdentifierContainer:
			{
				switch(root.get_child(0).get_type()){
					case ptIdentifier:
						{
							*dump_file << root.get_child(0).get_id().data() << " ";
							break;
						}
					case ptArrayIdentifier:
						{
							*dump_file << root.get_child(0).get_id().data() << "[] ";
							break;
						}
				}
				if(root.get_num_children() > 1){
					*dump_file << ", ";
					dump_tree(root.get_child(1), dump_file, indent);
				}
				break;
			}
		case ptInitializationStatement:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << " = ";
				dump_tree(root.get_child(1), dump_file, indent);
				break;
			}
		case ptAssignment:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "" << root.get_id().data() << " ";
				dump_tree(root.get_child(1), dump_file, indent);
				break;
			}
		case ptDeclarationStatement:
			{
				if(root.get_child(0).get_type() == ptInstanceGeneric){
					//dump_tree(root.get_child(0), dump_file, indent);
					*dump_file << root.get_child(0).get_id().data() << "<";
					dump_tree(root.get_child(0).get_child(1), dump_file, indent);
					*dump_file << "> ";
					dump_tree(root.get_child(0).get_child(0), dump_file, indent);
				}else{
					dump_tree(root.get_child(0), dump_file, indent);
					*dump_file << " ";
					dump_tree(root.get_child(0).get_child(0), dump_file, indent);
				}
				break;
			}
		case ptDeclaration:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << root.get_id().data();
				if(root.get_num_children() > 1){
					*dump_file << ", ";
					dump_tree(root.get_child(1), dump_file, indent);
				}
				break;
			}
		case ptArrayDeclaration:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << root.get_id().data() << "[] ";
				if(root.get_num_children() > 1){
					*dump_file << ", ";
					dump_tree(root.get_child(1), dump_file, indent);
				}
				break;
			}
		case ptArraySizeInitializer:
			{
				*dump_file << "new ";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "[";
				dump_tree(root.get_child(1), dump_file, indent);
				*dump_file << "] ";
				break;
			}
		case ptStatement:
			{
				add_indent(dump_file, indent);
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << ";\n";
				dump_tree(root.get_child(1), dump_file, indent);
				break;
			}
		case 239: //TOK_VOID
			{
				*dump_file << "void ";
				break;
			}
		case 215: //break
			{
				*dump_file << "break ";
				break;
			}
		case 201: //continue
			{
				*dump_file <<"continue ";
				break;
			}
		case 101: //TOK_INTVAL
			{
				*dump_file << root.get_value_int() << " ";
				break;
			}
		case 102: //TOK_FLOATVAL
			{
				*dump_file << root.get_value_double() << " ";
				break;
			}
		case 100: //TOK_IDENTIFIER
			{
				*dump_file << root.get_id().data() << " ";
				break;
			}
		case 103: //TOK_STRINGVAL
			{
				*dump_file << "\"" << root.get_id().data() << "\" ";
				break;
			}
		case 104: //TOK_BOOLVAL
			{
				if(root.get_value_int() == 0){
					*dump_file << "false ";
				}else{
					*dump_file << "true ";
				}
				break;
			}
		case ptArrayAccess:
			{
				*dump_file << root.get_id().data() << "[";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "] ";
				break;
			}
		case ptNegation:
			{
				*dump_file << "-";
				dump_tree(root.get_child(0), dump_file, indent);
				break;
			}
		case ptBitNegation:
			{
				*dump_file << "~";
				dump_tree(root.get_child(0), dump_file, indent);
				break;
			}
		case ptOperation:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << root.get_id().data() << " ";
				dump_tree(root.get_child(1), dump_file, indent);
				break;
			}
		case ptPostDecrement:
			{
				*dump_file << root.get_child(0).get_id().data();
				if(root.get_child(1).get_type() == 338){
					*dump_file << "-- ";
				}else{
					*dump_file << "++ ";
				}
				break;
			}
		case ptPreDecrement:
			{
				if(root.get_child(0).get_type() == 338){
					*dump_file << "--";
				}else{
					*dump_file << "++";
				}
				*dump_file << root.get_child(1).get_id().data() << " ";
				break;
			}
		case ptArrayExplicitInitializer:
			{
				*dump_file << "{";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "} ";
				break;
			}
		case ptInstanceInitializer:
			{
				*dump_file << "new ";
				//dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << root.get_child(0).get_id().data();
				*dump_file << "(";
				dump_tree(root.get_child(1), dump_file, indent);
				*dump_file << ") ";
				break;
			}
		case ptDataStructureInitializer:
			{
				*dump_file << "new ";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "(";
				dump_tree(root.get_child(1), dump_file, indent);
				*dump_file << ") ";
				break;
			}
		case ptDataStructure:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "<";
				if(root.get_num_children() > 1){
					dump_tree(root.get_child(1), dump_file, indent);
				}
				*dump_file << "> ";
				break;
			}
		case ptAnonymousClass:
			{
				*dump_file << "new " << root.get_id().data() << "(";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << ") {\n";
				//add_indent(dump_file, indent+1);
				dump_tree(root.get_child(1), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "}";
				break;
			}
		case ptArgument:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				//*dump_file << ", ";
				if(root.get_num_children() > 1){
					*dump_file << ", ";
					dump_tree(root.get_child(1), dump_file, indent);
				}
				break;
			}
		case ptEnclosedExpression:
			{
				*dump_file << "(";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << ") ";
				break;
			}
		case ptMethod:
			{
				dump_tree(root.get_child(0).get_child(0).get_child(0), dump_file, indent); //mod datatype
				*dump_file << root.get_id().data() << "("; //identifier
				dump_tree(root.get_child(0).get_child(0).get_child(1), dump_file, indent); //formalparameters
				*dump_file << ") ";
				dump_tree(root.get_child(0).get_child(1), dump_file, indent); //throwsclause (needs work)
				*dump_file << "{\n";
				dump_tree(root.get_child(1), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "}\n";
				break;
			}
		case ptAbstractMethod:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				dump_tree(root.get_child(1), dump_file, indent);
				break;
			}
		case ptAbstractMethodLabel:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << root.get_id().data() << "(";
				dump_tree(root.get_child(1), dump_file, indent);
				*dump_file << ") ";
				//dump_tree(root.get_child(0).get_child(0), dump_file, indent);
				*dump_file << ";\n";
				break;
			}
		case ptThrows:
			{
				*dump_file << "throws ";
				dump_tree(root.get_child(0), dump_file, indent);
				break;
			}
		case ptFieldReference:
			{
				if(root.get_child(0).get_type() == ptFieldReference){
					dump_tree(root.get_child(0), dump_file, indent);
				}else{
					*dump_file << root.get_child(0).get_id().data() << ".";
				}
				*dump_file << root.get_child(1).get_id().data();
				break;
			}
		case ptInstanceMethodCall:
			{
				if(root.get_child(0).get_type() == ptFieldReference){
					dump_tree(root.get_child(0), dump_file, indent);
				}else{
					*dump_file << root.get_child(0).get_id().data();
				}
				*dump_file << ".";
				dump_tree(root.get_child(1), dump_file, indent);
				break;
			}
		case ptMethodCall:
			{
				*dump_file << root.get_child(0).get_id().data() << "(";
				dump_tree(root.get_child(0).get_child(0), dump_file, indent);
				if(root.get_num_children() > 1){
					*dump_file << ").";
					dump_tree(root.get_child(1), dump_file, indent);
				}else{
					*dump_file << ") ";
				}

				break;
			}
		case ptWhile:
			{
				*dump_file << "while(";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << ") {\n";
				dump_tree(root.get_child(1), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "}";
				break;
			}
		case ptDoWhile:
			{
				*dump_file << "do{\n";
				dump_tree(root.get_child(1), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "} while(";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << ")";
				break;
			}
		case ptFor:
			{
				*dump_file << "for(";
				dump_tree(root.get_child(0).get_child(0), dump_file, indent);
				*dump_file << "; ";
				dump_tree(root.get_child(0).get_child(1).get_child(0), dump_file, indent);
				*dump_file << "; ";
				dump_tree(root.get_child(0).get_child(1).get_child(1), dump_file, indent);
				*dump_file << ") {\n";
				dump_tree(root.get_child(1), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "}";
				break;
			}
		case ptForEach:
			{
				*dump_file << "for(";
				dump_tree(root.get_child(0).get_child(0), dump_file, indent);
				*dump_file << ": ";
				dump_tree(root.get_child(0).get_child(1), dump_file, indent);
				*dump_file << ") {\n";
				dump_tree(root.get_child(1), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "}";
				break;
			}
		case ptIf:
			{
				*dump_file << "if(";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << ") {\n";
				dump_tree(root.get_child(1), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "}";
				break;
			}
		case ptIfElse:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << " else ";
				if(root.get_child(1).get_type() != ptEmpty){
					switch(root.get_child(1).get_child(0).get_type()){
						case ptIf:
						case ptIfElse:
							{
								dump_tree(root.get_child(1).get_child(0), dump_file, indent);
								break;
							}
						default:
							{
								*dump_file << "{\n";
								dump_tree(root.get_child(1), dump_file, indent+1);
								add_indent(dump_file, indent);
								*dump_file << "}";
								break;
							}
					}
				}else{
					*dump_file << "{}";
				}
				break;
			}
		case ptSwitch:
			{
				*dump_file << "switch(";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << ") {\n";
				dump_tree(root.get_child(1), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "}";
				break;
			}
		case ptSwitchRule:
			{
				add_indent(dump_file, indent);
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "-> ";
				if(root.get_child(1).get_type() == ptStatement){
					*dump_file << "{\n";
					dump_tree(root.get_child(1), dump_file, indent+1);
					add_indent(dump_file, indent);
					*dump_file << "}\n";
				}else{
					dump_tree(root.get_child(1), dump_file, indent);
					*dump_file << ";\n";
				}
				break;
			}
		case ptSwitchState:
			{
				add_indent(dump_file, indent);
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << ":{\n";
				dump_tree(root.get_child(1), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "}\n";
				break;
			}
		case ptSwitchLabel:
			{
				if(root.get_child(0).get_type() == ptCase){
					*dump_file << "case ";
					dump_tree(root.get_child(0), dump_file, indent);
				}else{
					*dump_file << "default ";
				}
				break;
			}
		case ptCase:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				if(root.get_num_children() > 1){
					*dump_file << ", ";
					dump_tree(root.get_child(1), dump_file, indent);
				}
				break;
			}
		case ptReturn:
			{
				*dump_file << "return ";
				dump_tree(root.get_child(0), dump_file, indent);
				break;
			}
		case ptYield:
			{
				*dump_file << "yield ";
				dump_tree(root.get_child(0), dump_file, indent);
				break;
			}
		case ptTryCatch:
			{
				*dump_file << "try {\n";
				dump_tree(root.get_child(0).get_child(0), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "} catch (";
				dump_tree(root.get_child(0).get_child(1).get_child(0), dump_file, indent); //expception???
				*dump_file << root.get_child(0).get_child(1).get_id().data() << ") {\n";
				dump_tree(root.get_child(0).get_child(1).get_child(1).get_child(0), dump_file, indent+1);
				add_indent(dump_file, indent);
				*dump_file << "}";
				if(root.get_child(0).get_child(1).get_child(1).get_num_children() > 1){
					*dump_file << " finally {\n";
					dump_tree(root.get_child(0).get_child(1).get_child(1).get_child(1), dump_file, indent+1);
					add_indent(dump_file, indent);
					*dump_file << "}";
				}
				break;
			}
		case ptException:
			{
				dump_tree(root.get_child(0), dump_file, indent);
				if(root.get_num_children() > 1){
					*dump_file << "| ";
					dump_tree(root.get_child(1), dump_file, indent);
				}
				break;
			}
		case ptThrowState:
			{
				*dump_file << "throw new ";
				dump_tree(root.get_child(0), dump_file, indent);
				*dump_file << "(";
				dump_tree(root.get_child(1), dump_file, indent);
				*dump_file << ")";
				break;
			}
		case ptEmpty:
			{
				break;
			}
		default:
			{
				//*dump_file << "" << type << "\n";
				recurse(root, dump_file, indent);
				break;
			}
	}
}

void recurse(Node& root, std::ofstream* dump_file, int indent){
	int _num_children = root.get_num_children();
	for(int _a = 0; _a < _num_children; _a++){
		dump_tree(root.get_child(_a), dump_file, indent);
	}
}

void add_indent(std::ofstream* dump_file, int indent){
	for(int _a = 0; _a < indent; _a++){
		*dump_file << "    ";
	}
}
