/*
	**Make sure to include this file in any part of the program that deals with the parse tree.**
	This enumerator is exclusively for the parse tree.
	Each node is denoted by a value from this enumerator or, 
	in some special cases, a token value like TOK_IDENTIFIER.
*/

#ifndef NODETYPES_H
#define NODETYPES_H

enum ParseTreeNode {
	ptEmpty,
	ptPackageContainer,
	ptPackage,
	ptImports,
	ptImportContainer,
	ptImport,
	ptTypeDec,
	ptClass,
	ptMod,
	ptClassBody,
	ptDeclaration,
	ptDataType,
	ptInstanceGeneric,
	ptIdentifierContainer,
	ptIdentifier,
	ptArrayIdentifier,
	ptEnclosedExpression,
	ptNegation,	
	ptBitNegation,
	ptOperation,
	ptArrayDeclaration,
	ptInitializationContainer,
	ptInitializationStatement,
	ptMethod,
	ptAbstractMethod,
	ptAbstractMethodLabel,
	ptMethodLabel,
	ptConstructorLabel,
	ptStatement,
	ptArgument,
	ptInstanceMethodCall,
	ptMethodCall,
	ptFieldReference,
	ptPreDecrement,
	ptPostDecrement,
	ptArraySizeInitializer,
	ptArrayExplicitInitializer,
	ptInstanceInitializer,
	ptDataStructureInitializer,
	ptDataStructure,
	ptAssignment,
	ptInterface,
	ptExtends,
	ptImplements,
	ptBasicIdentifier,
	ptArrayAccess,
	ptWhile,
	ptDoWhile,
	ptFor,
	ptForEach,
	ptForEachDec,
	ptIf,
	ptIfElse,
	ptReturn,
	ptThrows,
	ptSwitch,
	ptSwitchBlock,
	ptSwitchRule,
	ptSwitchState,
	ptSwitchLabel,	
	ptCase,
	ptThrowState,
	ptYield,
	ptAnonymousClass,
	ptParallelBlock,
	ptTryCatch,
	ptTry,
	ptCatch,
	ptExceptionContainer,
	ptException,
	ptFinally

};


#endif






















