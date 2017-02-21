//
//  IntArray.cpp
//  FirstAfternoonCPlusPlus
//
//  Created by Paladugu, Sai neeraj on 2/8/17.
//  Copyright © 2017 CTEC. All rights reserved.
//


#include "IntArray.hpp"
#include <assert.h>

IntNodeArray :: IntNodeArray(int size);

{
    assert(size > 0);
    
    this ->size = size;
    this ->front = new IntNode();
    
    for(int index = 0; index < size; index++)
    {
        IntNode * current = new IntNode();
        current->setNodePointer(front);
        front = current;
        
    }
    
    
template <class Type>
    Node<Type> :: Node(type data)
    {
        this->nodeData = dat;
        this->nodepointer = nullptr;
        
    }
template <class Type>
    Node<Type> :: Node()
    {
            //Explicity DO NOT instantiate the nodeData data memeber
        this ->nodePointer = nullptr;
    }
}
